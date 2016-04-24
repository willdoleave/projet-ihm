#include "ajoutdialog.h"
#include "ui_ajoutdialog.h"

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
