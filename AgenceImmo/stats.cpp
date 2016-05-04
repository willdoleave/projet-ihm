#include "stats.h"
#include "ui_stats.h"
#include "mainwindow.h"
#include <QDate>

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
        if (a.dateModificationEtat >= datedebut && a.dateModificationEtat <= datefin) {
            for (int j = 0; j < listeType.length();i++) {
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


}

void Stats::on_pushButton_clicked()
{
    this->calcul();
}
