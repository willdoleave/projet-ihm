#include "ajoutdialog.h"
#include "ui_ajoutdialog.h"
#include "xml_dom.h"
#include "mainwindow.h"
#include <QMessageBox>
#include <QFileDialog>
#include <QFileInfo>


ajoutDialog::ajoutDialog(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::ajoutDialog)
{
    ui->setupUi(this);
}

ajoutDialog::~ajoutDialog()
{
    delete ui;
}

void ajoutDialog::on_pushButton_2_clicked()
{
    close();
}

void ajoutDialog::on_pushButton_clicked()
{
    xml_dom *Dom = new xml_dom();
    bool ajout;
    QString id = QDateTime::currentDateTime().toString("yyMMddHHmmss");
    if (filephoto1.size()>=1) photo1 = QString("../upload/"+id+"photo1"+"."+QFileInfo(filephoto1).suffix()); else photo1 = QString("");
    if (filephoto2.size()>=1) photo2 = QString("../upload/"+id+"photo2"+"."+QFileInfo(filephoto2).suffix()); else photo2 = QString("");
    if (filephoto3.size()>=1) photo3 = QString("../upload/"+id+"photo3"+"."+QFileInfo(filephoto3).suffix()); else photo3 = QString("");
    if (filephoto4.size()>=1) photo4 = QString("../upload/"+id+"photo4"+"."+QFileInfo(filephoto4).suffix()); else photo4 = QString("");
    ajout = Dom->ajoutElem(id.toStdString(), ui->etat->currentText().toStdString(), ui->type->currentText().toStdString(),
                           ui->prix->text().toStdString(),ui->titre->text().toStdString(),
                           ui->description->toPlainText().toStdString(),
                           photo1.toStdString(),photo2.toStdString(),photo3.toStdString(),photo4.toStdString(),
                           ui->adresse->text().toStdString(),ui->ville->text().toStdString(),
                           ui->codePostal->text().toStdString(), ui->nom->text().toStdString(),
                           ui->prenom->text().toStdString(),ui->telephone->text().toStdString(),
                           ui->email->text().toStdString(), ui->superficie->text().toStdString(),
                           ui->nombrePieces->text().toStdString()
                   );
    if (!ajout) {
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
        close();
    }

}

void ajoutDialog::on_upload_image1_clicked()
{
    filephoto1 = QFileDialog::getOpenFileName(this,
    tr("Open Image"), "..", tr("Image Files (*.png *.jpg *.bmp)"));

    //stream << "../upload/" << fileName.toStdString().c_str() << " ../upload";

    //QFile::copy(fileName.toStdString().c_str(), "/path/copy-of-file");
}
