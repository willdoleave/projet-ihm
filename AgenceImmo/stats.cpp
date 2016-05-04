#include "stats.h"
#include "ui_stats.h"
#include "mainwindow.h"
#include <QDate>
#include <QVector>
#include "qcustomplot/qcustomplot.h"


Stats::Stats(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Stats)
{
    ui->setupUi(this);
}

Stats::~Stats()
{
    delete ui;
}


void Stats::calcul()
{
    MainWindow *mw = (MainWindow*)this->parent();
    en_vente = 0; vendus = 0; en_location = 0; loue = 0;
    QList<QString> listeType;
    QDate datedebut = ui->datedebut->date();
    QDate datefin = ui->datefin->date();

    if(ui->chkAppt->checkState() == 2) {
        listeType.append((ui->chkAppt->text()));
    }
    if(ui->chkAutre->checkState() == 2) {
        listeType.append((ui->chkAutre->text()));
    }
    if(ui->chkBureau->checkState() == 2) {
        listeType.append((ui->chkBureau->text()));
    }
    if(ui->chkChateau->checkState() == 2) {
        listeType.append((ui->chkChateau->text()));
    }
    if(ui->chkFerme->checkState() == 2) {
        listeType.append((ui->chkFerme->text()));
    }
    if(ui->chkMaison->checkState() == 2) {
        listeType.append((ui->chkMaison->text()));
    }
    if(ui->chkTerrain->checkState() == 2) {
        listeType.append((ui->chkTerrain->text()));
    }
    if(ui->chkCommerce->checkState() == 2) {
        listeType.append((ui->chkCommerce->text()));
    }

    for (int i = 0; i < mw->list_annonces->length(); i++)
    {
        Annonce a = mw->list_annonces->at(i);
        if (a.dateCreation >= datedebut && a.dateCreation <= datefin) {
            for (int j = 0; j < listeType.length();j++) {
                if (a.type == listeType.value(j)) {
                    if (a.etat == "Vente") en_vente++;
                    else if (a.etat == "Location") en_location++;
                    else if (a.etat == "Vendu") vendus++;
                    else if (a.etat == "Loué") loue++;
                }
            }
        }
    }


    qDebug() << "Vendu :" << vendus << " Loué :" << loue << " En Vente : " << en_vente << " En Location :" << en_location;
    ui->vendus->setText(QString::number(vendus));
    ui->en_vente->setText(QString::number(en_vente));
    ui->loues->setText(QString::number(loue));
    ui->en_location->setText(QString::number(en_location));

}

void Stats::on_pushButton_clicked()
{
    this->calcul();
    this->dessinerGraphique();

}


void Stats::dessinerGraphique()
{
    ui->customPlot->clearGraphs();
    ui->customPlot->clearItems();
    ui->customPlot->clearPlottables();

    QCPBars *vente = new QCPBars(ui->customPlot->xAxis, ui->customPlot->yAxis);
    QCPBars *vendu = new QCPBars(ui->customPlot->xAxis, ui->customPlot->yAxis);
    QCPBars *location = new QCPBars(ui->customPlot->xAxis, ui->customPlot->yAxis);
    QCPBars *loueg = new QCPBars(ui->customPlot->xAxis, ui->customPlot->yAxis);
    ui->customPlot->addPlottable(vente);
    ui->customPlot->addPlottable(vendu);
    ui->customPlot->addPlottable(location);
    ui->customPlot->addPlottable(loueg);


    QPen pen;
    pen.setWidth(1.5);
    vente->setName("Vente");
    pen.setColor(QColor(0,0,0));
    vente->setPen(pen);
    vente->setBrush(QColor(255,0,0));

    vendu->setName("Vendu");
    pen.setColor(QColor(0,0,0));
    vendu->setPen(pen);
    vendu->setBrush(QColor(0,255,0));

    location->setName("Location");
    pen.setColor(QColor(0,0,0));
    location->setPen(pen);
    location->setBrush(QColor(0,0,255));


    loueg->setName("Loué");
    pen.setColor(QColor(255,0,255));
    loueg->setPen(pen);
    loueg->setBrush(QColor(230,230,0));



    QVector<double> ticks;
    QVector<QString> labels;
    ticks << 1 << 2 << 3 << 4;
    labels << "Vente" << "Location" << "Vendu" << "Loué";
    ui->customPlot->xAxis->setAutoTicks(false);
    ui->customPlot->xAxis->setAutoTickLabels(false);
    ui->customPlot->xAxis->setTickVector(ticks);
    ui->customPlot->xAxis->setTickVectorLabels(labels);
    ui->customPlot->xAxis->setTickLabelRotation(60);
    ui->customPlot->xAxis->setSubTickCount(0);
    ui->customPlot->xAxis->setTickLength(0, 4);
    ui->customPlot->xAxis->grid()->setVisible(true);
    ui->customPlot->xAxis->setRange(0, 8);

    int myints[] = {loue,vendus,en_vente,en_location};
    ui->customPlot->yAxis->setRange(0, *std::max_element(myints,myints+4));
    ui->customPlot->yAxis->setPadding(5);
    ui->customPlot->yAxis->setLabel("");
    ui->customPlot->yAxis->grid()->setSubGridVisible(true);

    QPen gridPen;
    gridPen.setStyle(Qt::SolidLine);
    gridPen.setColor(QColor(0,0,0,25));
    ui->customPlot->yAxis->grid()->setPen(gridPen);
    gridPen.setStyle(Qt::DotLine);
    ui->customPlot->yAxis->grid()->setSubGridPen(gridPen);

    QVector<double> datavente, datavendu, datalocation, dataloue;

    dataloue << en_vente << en_location << vendus << loue;
    datavendu << en_vente << en_location << vendus;
    datalocation << en_vente << en_location;
    datavente << en_vente;



    vente->setData(ticks, datavente);
    vendu->setData(ticks, datavendu);
    loueg->setData(ticks, dataloue);
    location->setData(ticks, datalocation);

    ui->customPlot->legend->setVisible(false);
    ui->customPlot->axisRect()->insetLayout()->setInsetAlignment(0, Qt::AlignTop|Qt::AlignCenter);
    ui->customPlot->legend->setBrush(QColor(255,255,255,200));
    QPen legendPen;
    ui->customPlot->legend->setBorderPen(legendPen);
    QFont legendFont = font();
    legendFont.setPointSize(10);
    ui->customPlot->legend->setFont(legendFont);
    ui->customPlot->setInteractions(QCP::iRangeDrag | QCP::iRangeZoom);

    ui->customPlot->replot();
}

