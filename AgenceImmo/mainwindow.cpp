#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QtCore>
#include <QtGui>
#include <QMessageBox>
#include <QPushButton>
#include <iostream>
#include <xml_dom.h>
using namespace std;

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    Dom = new xml_dom();
    list_annonces = new QList<Annonce>();
    remplirListeWidget();
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_actionImporter_triggered()
{

    QMessageBox msgBox;
    msgBox.setText(tr("Voulez-vous exporter votre base actuelle avant d'en importer une nouvelle ?"));
    QAbstractButton* pButtonYes = msgBox.addButton(tr("Oui"), QMessageBox::YesRole);
    QAbstractButton* pButtonNo = msgBox.addButton(tr("Non"), QMessageBox::NoRole);
    QAbstractButton* pButtonCancel = msgBox.addButton(tr("Annuler"), QMessageBox::NoRole);
    //msgBox.addButton(tr("Annuler"), QMessageBox::NoRole);
    msgBox.setWindowTitle("Importer une base");
    msgBox.setIconPixmap(QPixmap(":/images/img/question.png"));
    msgBox.exec();

    if (msgBox.clickedButton()==pButtonYes) {
        cout << "Oui" << endl;
    } else if (msgBox.clickedButton() == pButtonNo) {
        cout << "Non" << endl;
    } else if (msgBox.clickedButton() == pButtonCancel) {
        cout << "Annuler" << endl;
    }

}

void MainWindow::on_action_propos_triggered()
{
    QMessageBox msgBox;
    /*QMessageBox::StandardButton reply  = */msgBox.information(this, "À Propos", "AgenceImmo Version 1.0", QMessageBox::Close);
    //QAbstractButton* pButtonClose = msgBox.addButton(tr("Fermer", QMessageBox::Close));
}

void MainWindow::on_actionRecherche_triggered()
{
    recherche_dialog.setWindowTitle("Recherche d'une annonce");
    recherche_dialog.show();
}

void MainWindow::on_actionAjouter_une_annonce_triggered()
{
    ajout_dialog.setWindowTitle("Ajout d'une annonce");
    ajout_dialog.show();
}

void MainWindow::on_actionQuitter_triggered()
{
    close();
}

void MainWindow::remplirListeWidget()
{
    Dom->listeElem(list_annonces);
    for (int i = 0; i < list_annonces->count()-1; i++) {
        QListWidgetItem *list_item = new QListWidgetItem(0,0);
        QString text;
        QTextStream stream(&text);
        Annonce a = list_annonces->at(i);
        /*if (!(a.photoContractuelle.toStdString().empty()))
        {
            QIcon icon(a.photoContractuelle);
            item->setIcon(icon);
        }*/
        stream << a.titre;
        list_item->setText(text);
        ui->listWidget->addItem(list_item);
    }
}
