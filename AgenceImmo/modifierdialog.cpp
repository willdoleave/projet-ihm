#include "modifierdialog.h"
#include "ui_modifierdialog.h"

modifierdialog::modifierdialog(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::modifierdialog)
{
    ui->setupUi(this);
}

modifierdialog::~modifierdialog()
{
    delete ui;
}
