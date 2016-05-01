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
    /*
    bool ajoutElem(const char *etat, const char *type, const char *prix,
                   const char *titre, const char *description, const char *photo1,
                   const char *photo2, const char *photo3, const char *photo4,
                   const char *adresse, const char *ville, const char *codePostal,
                   const char *nom, const char *prenom, const char *telephone,
                   const char *mail, const char *superficie, const char *nbPiece);
    */
    Dom->ajoutElem(ui->etat->currentText().toStdString(), ui->type->currentText().toStdString(), ui->prix->text().toStdString(),
                   ui->titre->text().toStdString(), ui->description->toPlainText().toStdString(), (std::string)"photo1",(std::string)"photo2",(std::string)"photo3",(std::string)"photo4",ui->adresse->text().toStdString(),
                   ui->ville->text().toStdString(), ui->codePostal->text().toStdString(), ui->nom->text().toStdString(), ui->prenom->text().toStdString(),
                   ui->telephone->text().toStdString(), ui->email->text().toStdString(), ui->superficie->text().toStdString(), ui->nombrePieces->text().toStdString()
                   );
    //QMessageBox::information(this,"Parfait","Ajout avec succès ! : "+ui->description->toPlainText());

}
