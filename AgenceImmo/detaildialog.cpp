#include "detaildialog.h"
#include "ui_detaildialog.h"
#include "mainwindow.h"
#include "xml_dom.h"
#include <QListWidget>
#include <QMessageBox>

detaildialog::detaildialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::detaildialog)
{
    ui->setupUi(this);
    ui->listWidget->clear();
}

detaildialog::detaildialog(QWidget *parent, Annonce *aa) :
    QDialog(parent),
    ui(new Ui::detaildialog)
{
    ui->setupUi(this);

    a = *aa;

    QString adresse, superficie, id_etat, parution_prix, pieces, prix, nom_prenom;
    adresse = a.adresse.toUtf8()+", "+a.codePostal.toUtf8()+", "+a.ville;
    superficie = a.superficie.toUtf8();
    id_etat = "id: "+a.id.toUtf8()+" - En "+a.etat.toUtf8();
    parution_prix = "Parution: "+a.dateCreation.toString("dd/MM/yyyy")+" - Prix: "+a.prix.toUtf8();
    pieces = a.nbPiece+ " pièces";
    prix = a.prix;
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

    if (a.etat.toUtf8() == "Location")
        ui->bouton_vendre->setText("Louer");
    else if (a.etat.toUtf8() == "Vente")
        ui->bouton_vendre->setText("Vendre");
    else if (a.etat.toUtf8() == "Vendu")
        ui->bouton_vendre->setText("Afficher acheteur");
    else if (a.etat.toUtf8() == "Loué")
        ui->bouton_vendre->setText("Afficher loueur");


    if (a.photoContractuelle.size()>0)
        ui->photo_contractuelle->setPixmap(QPixmap(a.photoContractuelle).scaled(QSize(400,400)));

    ui->listWidget->clear();
    ui->listWidget->setIconSize(QSize(128,128));

    QListWidgetItem *list_item = new QListWidgetItem(0,0);
    list_item->setIcon(QPixmap(a.photoContractuelle).scaled(QSize(128,128)));

    list_item->setStatusTip(QString(a.photoContractuelle));
    ui->listWidget->addItem(list_item);

    //QMessageBox::information(this, "Information", QString::number(a.photos.length()) );

    for (int i = 0; i < a.photos.length(); i++) {
        list_item = new QListWidgetItem(0,0);

        list_item->setIcon(QPixmap(a.photos.value(i)).scaled(QSize(128,128)));

        list_item->setStatusTip(QString(a.photos.value(i)));
        ui->listWidget->addItem(list_item);
    }


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

    QObject::connect(ui->listWidget, SIGNAL(itemDoubleClicked(QListWidgetItem*)), this, SLOT(on_actionSwitch_Image_triggered()));
}

detaildialog::~detaildialog()
{

    delete ui;
}

void detaildialog::on_pushButton_clicked()
{
    close();
}

void detaildialog::on_pushButton_2_clicked()
{
    MainWindow *mw = (MainWindow*)this->parent();
    close();
    mw->on_actionModifier_triggered();
}

void detaildialog::on_bouton_vendre_clicked()
{
    // Vendre un bien (ou le louer);
    qDebug() << ui->bouton_vendre->text();

}

void detaildialog::on_actionSwitch_Image_triggered()
{
    QListWidgetItem *wi = ui->listWidget->selectedItems().first();

    ui->photo_contractuelle->setPixmap(QPixmap(wi->statusTip()).scaled(QSize(400,400)));
}
