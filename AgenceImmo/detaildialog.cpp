#include "detaildialog.h"
#include "ui_detaildialog.h"
#include "mainwindow.h"
#include "xml_dom.h"
#include <QListWidget>

detaildialog::detaildialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::detaildialog)
{
    ui->setupUi(this);
}

detaildialog::detaildialog(QWidget *parent, Annonce *aa) :
    QDialog(parent),
    ui(new Ui::detaildialog)
{
    ui->setupUi(this);

    //MainWindow *mw = (MainWindow*)this->parent();
    //QListWidgetItem *wi = mw->list_widget->selectedItems().at(0);

    //Annonce a = mw->list_annonces->at(wi->statusTip().toInt());
    Annonce a = *aa;
    //printf("%s\n",aa->adresse.toStdString().c_str());
    //wi->listWidget()->currentItem();

    QString adresse, superficie, id_etat, parution_prix, pieces, prix, nom_prenom;
    adresse = a.adresse.toUtf8()+", "+a.codePostal.toUtf8()+", "+a.ville;
    superficie = a.superficie.toUtf8()+" m²";
    id_etat = "id: "+a.id.toUtf8()+" - En "+a.etat.toUtf8();
    parution_prix = "Parution: "+a.dateCreation.toString("dd/MM/yyyy")+" - Prix: "+a.prix.toUtf8()+"€";
    pieces = a.nbPiece+ " pièces";
    prix = a.prix+"€";
    nom_prenom = a.nom+" "+a.prenom;

    ui->titre_global->setText(a.titre);
    ui->adresse->setText(adresse);
    ui->superficie->setText(superficie);
    ui->id_etat->setText(id_etat);
    ui->parution_prix->setText(parution_prix);
    ui->description->setText(QString::fromUtf8(a.description.toUtf8()));
    ui->pieces->setText(pieces);
    ui->prix->setText(prix);
    ui->nom_prenom->setText(nom_prenom);
    ui->email->setText(a.mail.toUtf8());
    ui->telephone->setText(a.telephone.toUtf8());

    if (a.photoContractuelle.size()>0)
        ui->photo_contractuelle->setPixmap(QPixmap(a.photoContractuelle).scaled(QSize(400,400)));

    if (a.photo1.size()>0 && a.photo1.toUtf8() != a.photoContractuelle.toUtf8())
        ui->photo1->setPixmap(QPixmap(a.photo1).scaled(QSize(150,150)));
    else
        ui->photo1->setVisible(false);

    if (a.photo2.size()>0 && a.photo2.toUtf8() != a.photoContractuelle.toUtf8())
        ui->photo2->setPixmap(QPixmap(a.photo2).scaled(QSize(150,150)));
    else
        ui->photo2->setVisible(false);

    if (a.photo3.size()>0 && a.photo3.toUtf8() != a.photoContractuelle.toUtf8())
        ui->photo3->setPixmap(QPixmap(a.photo3).scaled(QSize(150,150)));
    else
        ui->photo3->setVisible(false);

    if (a.photo4.size()>0 && a.photo4.toUtf8() != a.photoContractuelle.toUtf8())
         ui->photo4->setPixmap(QPixmap(a.photo4).scaled(QSize(150,150)));
    else
        ui->photo4->setVisible(false);

  //  ui->photo_contractuelle->setVisible(false);
  //  ui->photo1->setVisible(false);
  //  ui->photo2->setVisible(false);
  //  ui->photo3->setVisible(false);



    QString titre_description;
    if (a.type.toUtf8() == "Maison")
        titre_description = "Description de la maison";
    else if (a.type.toUtf8() == "Appartement")
        titre_description = "Description de l'appartement";
    else if (a.type.toUtf8() == "Château")
        titre_description = "Description du château";
    else if (a.type.toUtf8() == "Terrain")
        titre_description = "Description du terrain";
    else if (a.type.toUtf8() == "Commerce")
        titre_description = "Description du commerce";
    else if (a.type.toUtf8() == "Bureau")
        titre_description = "Description du bureau";
    else if (a.type.toUtf8() == "Ferme")
        titre_description = "Description de la ferme";
    else titre_description = "Description du bien";

    ui->titre_description->setText(titre_description);


}

detaildialog::~detaildialog()
{

    delete ui;
}
