#include "ajoutdialog.h"
#include "ui_ajoutdialog.h"
#include "xml_dom.h"
#include "mainwindow.h"
#include <QMessageBox>
#include <QFileDialog>
#include <QFileInfo>
#include <QResource>
#include <qresource.h>


ajoutDialog::ajoutDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::ajoutDialog)
{
    ajout = true;
    ui->setupUi(this);
}

ajoutDialog::ajoutDialog(QWidget *parent, Annonce *a) :
    QDialog(parent),
    ui(new Ui::ajoutDialog)
{
    ajout = false;
    ui->setupUi(this);
    this->id_new = a->id;

    ui->pushButton->setText("Modifier");
    ui->titre_global->setText("Modification");
    ui->adresse->setText(a->adresse);
    ui->prix->setValue(a->prix.toInt());
    ui->codePostal->setValue(a->codePostal.toInt());
    ui->description->setText(a->description);
    ui->email->setText(a->mail);
    ui->titre->setText(a->titre);
    ui->adresse->setText(a->adresse);
    ui->ville->setText(a->ville);
    ui->nom->setText(a->nom);
    ui->prenom->setText(a->prenom);
    ui->telephone->setText(a->telephone);
    ui->email->setText(a->mail);
    ui->superficie->setValue(a->superficie.toInt());
    ui->nombrePieces->setValue(a->nbPiece.toInt());
    //ui->contractuelle4->setChecked(true);


    if (a->etat.toUtf8() == "Vente")
        ui->etat->setCurrentIndex(0);
    else if (a->etat.toUtf8() == "Location")
        ui->etat->setCurrentIndex(1);
    else if (a->etat.toUtf8() == "Vendu")
        ui->etat->setCurrentIndex(3);
    else if (a->etat.toUtf8() == "Loué")
        ui->etat->setCurrentIndex(4);


    if (a->type.toUtf8() == "Maison")
        ui->type->setCurrentIndex(0);
    else if (a->type.toUtf8() == "Appartement")
        ui->type->setCurrentIndex(1);
    else if (a->type.toUtf8() == "Château")
        ui->type->setCurrentIndex(2);
    else if (a->type.toUtf8() == "Commerce")
        ui->type->setCurrentIndex(3);
    else if (a->type.toUtf8() == "Bureau")
        ui->type->setCurrentIndex(4);
    else if (a->type.toUtf8() == "Terrain")
        ui->type->setCurrentIndex(5);
    else if (a->type.toUtf8() == "Ferme")
        ui->type->setCurrentIndex(6);
    else ui->type->setCurrentIndex(7);

    if(a->photo1.size()>0)
        ui->image1->setPixmap(QPixmap(a->photo1).scaled(QSize(128,128)));

}


ajoutDialog::~ajoutDialog()
{
    delete ui;
}

void ajoutDialog::on_pushButton_2_clicked()
{
    ui->prix->setValue(0);
    ui->titre->setText("");
    ui->description->setText("");
    ui->adresse->setText("");
    ui->ville->setText("");
    ui->codePostal->setValue(0);
    ui->nom->setText("");
    ui->prenom->setText("");
    ui->telephone->setText("");
    ui->email->setText("");
    ui->superficie->setValue(0);
    ui->nombrePieces->setValue(0);
    filePhoto.clear();
    cheminPhoto.clear();
    ui->image1->setPixmap(QPixmap(":/images/img/camera.png"));
    close();
}

void ajoutDialog::on_pushButton_clicked()
{
    QString id = QDateTime::currentDateTime().toString("yyMMddHHmmss");
    if (filephoto1.size()>=1) photo1 = QString("../upload/"+id+"photoContrac"+"."+QFileInfo(filephoto1).suffix()); else photo1 = QString("");
    for (int i = 0; i< filePhoto.length(); i++) {
        cheminPhoto.append(QString("../upload/"+id+"photo"+ QString::number(i+1) +"."+QFileInfo(filePhoto.value(i)).suffix()));
    }

    MainWindow *mw = (MainWindow*)this->parent();
    Annonce a;
    a.id = id;
    a.etat = ui->etat->currentText();
    a.type = ui->type->currentText();
    a.prix = ui->prix->text();
    a.titre = ui->titre->text();
    a.description = ui->description->toPlainText();
    a.photos = cheminPhoto;
    a.adresse = ui->adresse->text();
    a.ville = ui->ville->text();
    a.codePostal = ui->codePostal->text();
    a.nom = ui->nom->text();
    a.prenom = ui->prenom->text();
    a.telephone = ui->telephone->text();
    a.mail = ui->email->text();
    a.superficie = ui->superficie->text();
    a.nbPiece = ui->nombrePieces->text();
    a.photoContractuelle = photo1;
    a.dateCreation = QDate::currentDate();


    if (ajout) {

        int size = mw->list_annonces->size();
        mw->list_annonces->append(a);
        if (size == mw->list_annonces->size()) {
            QMessageBox::critical(this,"Echec de l'ajout","L'insertion n'a pas eu lieu car il manque des champs obligatoires !");
        } else {
            QMessageBox::information(this,"Parfait","L'annonce a été créée avec succès !");
            ui->prix->setValue(0);
            ui->titre->setText("");
            ui->description->setText("");
            ui->adresse->setText("");
            ui->ville->setText("");
            ui->codePostal->setValue(0);
            ui->nom->setText("");
            ui->prenom->setText("");
            ui->telephone->setText("");
            ui->email->setText("");
            ui->superficie->setValue(0);
            ui->nombrePieces->setValue(0);

            QFile::copy(filephoto1, photo1);
            for (int i = 0; i < filePhoto.length(); i++) {
                QFile::copy(filePhoto.value(i), cheminPhoto.value(i));
            }
            filePhoto.clear();
            cheminPhoto.clear();

            ui->image1->setPixmap(QPixmap(":/img/camera.png"));
            close();

            mw->remplirListeWidget();

        }
    } else {

        int index = 0;
        for(int i = 0; i < mw->list_annonces->count() ; i++)
        {
            QString q1 = mw->list_annonces->at(i).id.toUtf8();
            QString q2 = this->id_new;
            if (q1 == q2) {
                index = i;
                break;
            }
        }
            printf("%d\n",index);
            //qDebug << "count = " << mw->list_annonces->size();// << " id =" << id;
            mw->list_annonces->replace(index,a);
            mw->remplirListeWidget();
            close();
    }

}

void ajoutDialog::on_upload_image1_clicked()
{
    filephoto1 = QFileDialog::getOpenFileName(this,
    tr("Open Image"), "..", tr("Image Files (*.png *.jpg *.bmp)"));
    if (filephoto1.size()>0)
        ui->image1->setPixmap(QPixmap(filephoto1).scaled(QSize(120,120)));

}

void ajoutDialog::on_upload_image2_clicked()
{
    filePhoto.append(QFileDialog::getOpenFileName(this,
    tr("Open Image"), "..", tr("Image Files (*.png *.jpg *.bmp)")));

    ui->listWidget->setIconSize(QSize(128,128));

    QListWidgetItem *list_item = new QListWidgetItem(0,0);
    list_item->setIcon(QPixmap(filePhoto.last()).scaled(QSize(128,128)));

    list_item->setStatusTip(QString(filePhoto.last()));
    ui->listWidget->addItem(list_item);
}
