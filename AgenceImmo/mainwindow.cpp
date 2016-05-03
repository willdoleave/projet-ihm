#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QtCore>
#include <QtGui>
#include <QMessageBox>
#include <QPushButton>
#include <iostream>
#include <QBoxLayout>
#include <QLabel>
#include <xml_dom.h>
#include "detaildialog.h"
using namespace std;

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    this->setWindowIcon(QIcon(":/images/img/windowico.ico"));
    ui->setupUi(this);
    Dom = new xml_dom();
    list_annonces = new QList<Annonce>();
    remplirListeWidget();
    list_widget = ui->listWidget;
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
    rechercheDialog recherche_dialog(this);
    recherche_dialog.setWindowTitle("Recherche d'une annonce");
    recherche_dialog.exec();
    //recherche_dialog.show();
}

void MainWindow::on_actionAjouter_une_annonce_triggered()
{
    ui->actionAjouter_une_annonce->setEnabled(false);
    ajoutDialog ajout_dialog(this);
    ajout_dialog.setWindowTitle("Ajout d'une annonce");
    ajout_dialog.exec();
    ui->actionAjouter_une_annonce->setEnabled(true);
}

void MainWindow::on_actionQuitter_triggered()
{
    close();
}

void MainWindow::remplirListeWidget()
{

    list_annonces = new QList<Annonce>();
    ui->listWidget->clear();
    Dom->listeElem(list_annonces);
    ui->listWidget->setIconSize(QSize(128,128));
    for (int i = 0; i < list_annonces->count(); i++) {
        QListWidgetItem *list_item = new QListWidgetItem(0,0);
        Annonce a = list_annonces->at(i);

        if (!a.photoContractuelle.toStdString().empty())
            list_item->setIcon(QPixmap(a.photoContractuelle).scaled(QSize(128,128)));

        QString text;

        text = "---"+a.titre.toUtf8() + "---\n" + a.ville + ", " + a.codePostal + "\n" + a.superficie + "m² - "
                + a.nbPiece + " pièces\n" + "En "+ a.etat +"\n"+ "Prix : " + a.prix+"€";
        list_item->setText(text.toUtf8());
        list_item->setStatusTip(QString(i));
        ui->listWidget->addItem(list_item);
    }
    if (list_annonces->count()) {
        ui->listWidget->setCurrentRow(0);
        ui->actionSupprimerAnnonce->setEnabled(true);
        ui->actionModifier->setEnabled(true);
        ui->actionExaminer_annonce->setEnabled(true);
    }
        //ui->listWidget->setStyleSheet( "QListWidget::item { border-bottom: 1px solid black; }" );
        //ui->listWidget->setStyleSheet("WidgetItem:pressed { background-color: blue; }");
}

void MainWindow::on_actionExaminer_annonce_triggered()
{
    detaildialog detail_dialog(this);
    detail_dialog.setWindowTitle("Détail de l'annonce");
    detail_dialog.exec();
}
