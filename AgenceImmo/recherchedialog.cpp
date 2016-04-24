#include "recherchedialog.h"
#include "ui_recherchedialog.h"

rechercheDialog::rechercheDialog(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::rechercheDialog)
{
    ui->setupUi(this);
}

rechercheDialog::~rechercheDialog()
{
    delete ui;
}
