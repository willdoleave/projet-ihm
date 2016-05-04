#include "stats.h"
#include "ui_stats.h"
#include "mainwindow.h"
#include <QDate>
#include <QtCharts/QChartView>
#include <QtCharts/QBarSeries>
#include <QtCharts/QBarSet>
#include <QtCharts/QLineSeries>
#include <QtCharts/QLegend>
#include <QtCharts/QBarCategoryAxis>
#include <QtCharts/QValueAxis>


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
    en_vente = 0; vendu = 0; en_location = 0; loue = 0;
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
                    else if (a.etat == "Vendu") vendu++;
                    else if (a.etat == "Loué") loue++;
                }
            }
        }
    }


    qDebug() << "Vendu :" << vendu << " Loué :" << loue << " En Vente : " << en_vente << " En Location :" << en_location;
    ui->vendus->setText(QString::number(vendu));
    ui->en_vente->setText(QString::number(en_vente));
    ui->loues->setText(QString::number(loue));
    ui->en_location->setText(QString::number(en_location));

}

void Stats::on_pushButton_clicked()
{
    this->calcul();

    QBarSet *set0 = new QBarSet("Jane");
    QBarSet *set1 = new QBarSet("John");
    QBarSet *set2 = new QBarSet("Axel");
    QBarSet *set3 = new QBarSet("Mary");
    QBarSet *set4 = new QBarSet("Sam");

    *set0 << 1 << 2 << 3 << 4 << 5 << 6;
    *set1 << 5 << 0 << 0 << 4 << 0 << 7;
    *set2 << 3 << 5 << 8 << 13 << 8 << 5;
    *set3 << 5 << 6 << 7 << 3 << 4 << 5;
    *set4 << 9 << 7 << 5 << 3 << 1 << 2;

    QBarSeries *barseries = new QBarSeries();
    barseries->append(set0);
    barseries->append(set1);
    barseries->append(set2);
    barseries->append(set3);
    barseries->append(set4);

    QLineSeries *lineseries = new QLineSeries();
    lineseries->setName("trend");
    lineseries->append(QPoint(0, 4));
    lineseries->append(QPoint(1, 15));
    lineseries->append(QPoint(2, 20));
    lineseries->append(QPoint(3, 4));
    lineseries->append(QPoint(4, 12));
    lineseries->append(QPoint(5, 17));

    QChart *chart = new QChart();
    chart->addSeries(barseries);
    chart->addSeries(lineseries);
    chart->setTitle("Line and barchart example");

    QStringList categories;
    categories << "Jan" << "Feb" << "Mar" << "Apr" << "May" << "Jun";
    QBarCategoryAxis *axisX = new QBarCategoryAxis();
    axisX->append(categories);
    chart->setAxisX(axisX, lineseries);
    chart->setAxisX(axisX, barseries);
    axisX->setRange(QString("Jan"), QString("Jun"));

    QValueAxis *axisY = new QValueAxis();
    chart->setAxisY(axisY, lineseries);
    chart->setAxisY(axisY, barseries);
    axisY->setRange(0, 20);

    chart->legend()->setVisible(true);
    chart->legend()->setAlignment(Qt::AlignBottom);

    QChartView *chartView = new QChartView(chart);
    chartView->setRenderHint(QPainter::Antialiasing);

    QMainWindow window;
    window.setCentralWidget(chartView);
    window.resize(440, 300);
    window.show();
}
