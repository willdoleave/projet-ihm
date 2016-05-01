#include "ajoutdialog.h"
#include "ui_ajoutdialog.h"
#include "xml_dom.h"
#include <QMessageBox>


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
    ajout = Dom->ajoutElem(ui->etat->currentText().toStdString(), ui->type->currentText().toStdString(), ui->prix->text().toStdString(),
                   ui->titre->text().toStdString(), ui->description->toPlainText().toStdString(), (std::string)"photo1",(std::string)"photo2",(std::string)"photo3",(std::string)"photo4",ui->adresse->text().toStdString(),
                   ui->ville->text().toStdString(), ui->codePostal->text().toStdString(), ui->nom->text().toStdString(), ui->prenom->text().toStdString(),
                   ui->telephone->text().toStdString(), ui->email->text().toStdString(), ui->superficie->text().toStdString(), ui->nombrePieces->text().toStdString()
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
        close();
    }

}
