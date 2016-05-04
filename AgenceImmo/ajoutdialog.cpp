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


    if (a->photoContractuelle == a->photo1)
        ui->contractuelle1->setChecked(true);
    else if (a->photoContractuelle == a->photo2)
        ui->contractuelle2->setChecked(true);
    else if (a->photoContractuelle == a->photo3)
        ui->contractuelle3->setChecked(true);
    else if (a->photoContractuelle == a->photo4)
        ui->contractuelle4->setChecked(true);
    else ui->contractuelle1->setChecked(true);


    if (a->etat.toUtf8() == "Location")
        ui->etat->setCurrentIndex(1);
    else
        ui->etat->setCurrentIndex(0);

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
    if(a->photo2.size()>0)
        ui->image2->setPixmap(QPixmap(a->photo2).scaled(QSize(128,128)));
    if(a->photo3.size()>0)
        ui->image3->setPixmap(QPixmap(a->photo3).scaled(QSize(128,128)));
    if(a->photo4.size()>0)
        ui->image4->setPixmap(QPixmap(a->photo4).scaled(QSize(128,128)));
    //if (filephoto1.size()>0)
    //    ui->image1->setPixmap(QPixmap(filephoto1).scaled(QSize(48,48)));

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
    this->photo1 = QString("");
    this->photo2 = QString("");
    this->photo3 = QString("");
    this->photo4 = QString("");
    this->filephoto1 = QString("");
    this->filephoto2 = QString("");
    this->filephoto3 = QString("");
    this->filephoto4 = QString("");
    ui->image1->setPixmap(QPixmap(":/images/img/camera.png"));
    close();
}

void ajoutDialog::on_pushButton_clicked()
{
    QString id = QDateTime::currentDateTime().toString("yyMMddHHmmss");
    if (filephoto1.size()>=1) photo1 = QString("../upload/"+id+"photo1"+"."+QFileInfo(filephoto1).suffix()); else photo1 = QString("");
    if (filephoto2.size()>=1) photo2 = QString("../upload/"+id+"photo2"+"."+QFileInfo(filephoto2).suffix()); else photo2 = QString("");
    if (filephoto3.size()>=1) photo3 = QString("../upload/"+id+"photo3"+"."+QFileInfo(filephoto3).suffix()); else photo3 = QString("");
    if (filephoto4.size()>=1) photo4 = QString("../upload/"+id+"photo4"+"."+QFileInfo(filephoto4).suffix()); else photo4 = QString("");
    QString contractuelle;
    if (ui->contractuelle1->isChecked()) contractuelle = photo1;
    else if (ui->contractuelle2->isChecked()) contractuelle = photo2;
    else if (ui->contractuelle3->isChecked()) contractuelle = photo3;
    else if (ui->contractuelle1->isChecked()) contractuelle = photo4;
    else contractuelle = QString("");

    MainWindow *mw = (MainWindow*)this->parent();
    Annonce a;
    a.id = id;
    a.etat = ui->etat->currentText();
    a.type = ui->type->currentText();
    a.prix = ui->prix->text();
    a.titre = ui->titre->text();
    a.description = ui->description->toPlainText();
    a.photo1 = photo1;
    a.photo2 = photo2;
    a.photo3 = photo3;
    a.photo4 = photo4;
    a.adresse = ui->adresse->text();
    a.ville = ui->ville->text();
    a.codePostal = ui->codePostal->text();
    a.nom = ui->nom->text();
    a.prenom = ui->prenom->text();
    a.telephone = ui->telephone->text();
    a.mail = ui->email->text();
    a.superficie = ui->superficie->text();
    a.nbPiece = ui->nombrePieces->text();
    a.photoContractuelle = contractuelle;
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
            this->photo1 = QString("");
            this->photo2 = QString("");
            this->photo3 = QString("");
            this->photo4 = QString("");

            if (filephoto1.size()>1) QFile::copy(filephoto1, QString("../upload/"+id+"photo1"+"."+QFileInfo(filephoto1).suffix()));
            if (filephoto2.size()>1) QFile::copy(filephoto2, QString("../upload/"+id+"photo2"+"."+QFileInfo(filephoto2).suffix()));
            if (filephoto3.size()>1) QFile::copy(filephoto3, QString("../upload/"+id+"photo3"+"."+QFileInfo(filephoto3).suffix()));
            if (filephoto4.size()>1) QFile::copy(filephoto4, QString("../upload/"+id+"photo4"+"."+QFileInfo(filephoto4).suffix()));
            this->filephoto1 = QString("");
            this->filephoto2 = QString("");
            this->filephoto3 = QString("");
            this->filephoto4 = QString("");
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
    filephoto2 = QFileDialog::getOpenFileName(this,
    tr("Open Image"), "..", tr("Image Files (*.png *.jpg *.bmp)"));
    if (filephoto2.size()>0)
        ui->image2->setPixmap(QPixmap(filephoto2).scaled(QSize(120,120)));
}

void ajoutDialog::on_upload_image3_clicked()
{
    filephoto3 = QFileDialog::getOpenFileName(this,
    tr("Open Image"), "..", tr("Image Files (*.png *.jpg *.bmp)"));
    if (filephoto3.size()>0)
        ui->image3->setPixmap(QPixmap(filephoto3).scaled(QSize(120,120)));
}


void ajoutDialog::on_upload_image4_clicked()
{
    filephoto4 = QFileDialog::getOpenFileName(this,
    tr("Open Image"), "..", tr("Image Files (*.png *.jpg *.bmp)"));
    if (filephoto4.size()>0)
        ui->image4->setPixmap(QPixmap(filephoto4).scaled(QSize(120,120)));
}
