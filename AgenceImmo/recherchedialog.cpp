#include "recherchedialog.h"
#include "ui_recherchedialog.h"

rechercheDialog::rechercheDialog(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::rechercheDialog)
{
    ui->setupUi(this);
    ui->radioDateAvant->setChecked(true);
    ui->prixMax->setValue(99999999);
    ui->superficieMax->setValue(99999999);
    ui->piecesMax->setValue(99999999);
}

rechercheDialog::~rechercheDialog()
{
    delete ui;
}

void rechercheDialog::on_pushButton_2_clicked()
{
    close();
}

void rechercheDialog::on_annuler_clicked()
{
    close();
}
