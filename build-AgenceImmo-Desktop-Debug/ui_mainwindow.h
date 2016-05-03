/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionSauvegarder;
    QAction *actionImporter;
    QAction *actionAjouter_une_annonce;
    QAction *actionQuitter;
    QAction *actionRecherche;
    QAction *actionExporter;
    QAction *action_propos;
    QAction *actionStatistiques;
    QAction *actionUtilisation;
    QAction *actionSupprimerAnnonce;
    QAction *actionToutAfficher;
    QAction *actionModifier;
    QWidget *centralWidget;
    QListWidget *listWidget;
    QMenuBar *menuBar;
    QMenu *menuFichier;
    QMenu *menuAide;
    QMenu *menuOutils;
    QStatusBar *statusBar;
    QToolBar *toolBar_2;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(688, 501);
        MainWindow->setMinimumSize(QSize(586, 417));
        MainWindow->setMaximumSize(QSize(1000, 1000));
        actionSauvegarder = new QAction(MainWindow);
        actionSauvegarder->setObjectName(QStringLiteral("actionSauvegarder"));
        actionSauvegarder->setCheckable(false);
        actionSauvegarder->setChecked(false);
        QIcon icon;
        icon.addFile(QStringLiteral(":/images/img/save.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionSauvegarder->setIcon(icon);
        actionSauvegarder->setIconVisibleInMenu(true);
        actionImporter = new QAction(MainWindow);
        actionImporter->setObjectName(QStringLiteral("actionImporter"));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/images/img/import.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionImporter->setIcon(icon1);
        actionAjouter_une_annonce = new QAction(MainWindow);
        actionAjouter_une_annonce->setObjectName(QStringLiteral("actionAjouter_une_annonce"));
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/images/img/plus.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionAjouter_une_annonce->setIcon(icon2);
        actionQuitter = new QAction(MainWindow);
        actionQuitter->setObjectName(QStringLiteral("actionQuitter"));
        QIcon icon3;
        icon3.addFile(QStringLiteral(":/images/img/exit.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionQuitter->setIcon(icon3);
        actionRecherche = new QAction(MainWindow);
        actionRecherche->setObjectName(QStringLiteral("actionRecherche"));
        QIcon icon4;
        icon4.addFile(QStringLiteral(":/images/img/search.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionRecherche->setIcon(icon4);
        actionExporter = new QAction(MainWindow);
        actionExporter->setObjectName(QStringLiteral("actionExporter"));
        QIcon icon5;
        icon5.addFile(QStringLiteral(":/images/img/export.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionExporter->setIcon(icon5);
        action_propos = new QAction(MainWindow);
        action_propos->setObjectName(QStringLiteral("action_propos"));
        actionStatistiques = new QAction(MainWindow);
        actionStatistiques->setObjectName(QStringLiteral("actionStatistiques"));
        QIcon icon6;
        icon6.addFile(QStringLiteral(":/images/img/stats.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionStatistiques->setIcon(icon6);
        actionUtilisation = new QAction(MainWindow);
        actionUtilisation->setObjectName(QStringLiteral("actionUtilisation"));
        QIcon icon7;
        icon7.addFile(QStringLiteral(":/images/img/help.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionUtilisation->setIcon(icon7);
        actionSupprimerAnnonce = new QAction(MainWindow);
        actionSupprimerAnnonce->setObjectName(QStringLiteral("actionSupprimerAnnonce"));
        QIcon icon8;
        icon8.addFile(QStringLiteral(":/images/img/cross.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionSupprimerAnnonce->setIcon(icon8);
        actionToutAfficher = new QAction(MainWindow);
        actionToutAfficher->setObjectName(QStringLiteral("actionToutAfficher"));
        QIcon icon9;
        icon9.addFile(QStringLiteral(":/images/img/repeat.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionToutAfficher->setIcon(icon9);
        actionModifier = new QAction(MainWindow);
        actionModifier->setObjectName(QStringLiteral("actionModifier"));
        QIcon icon10;
        icon10.addFile(QStringLiteral(":/images/img/edit.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionModifier->setIcon(icon10);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        listWidget = new QListWidget(centralWidget);
        listWidget->setObjectName(QStringLiteral("listWidget"));
        listWidget->setGeometry(QRect(20, 10, 621, 381));
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setEnabled(true);
        menuBar->setGeometry(QRect(0, 0, 688, 25));
        menuFichier = new QMenu(menuBar);
        menuFichier->setObjectName(QStringLiteral("menuFichier"));
        menuAide = new QMenu(menuBar);
        menuAide->setObjectName(QStringLiteral("menuAide"));
        menuOutils = new QMenu(menuBar);
        menuOutils->setObjectName(QStringLiteral("menuOutils"));
        MainWindow->setMenuBar(menuBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);
        toolBar_2 = new QToolBar(MainWindow);
        toolBar_2->setObjectName(QStringLiteral("toolBar_2"));
        toolBar_2->setEnabled(true);
        toolBar_2->setMovable(false);
        MainWindow->addToolBar(Qt::TopToolBarArea, toolBar_2);

        menuBar->addAction(menuFichier->menuAction());
        menuBar->addAction(menuOutils->menuAction());
        menuBar->addAction(menuAide->menuAction());
        menuFichier->addAction(actionImporter);
        menuFichier->addAction(actionExporter);
        menuFichier->addSeparator();
        menuFichier->addAction(actionAjouter_une_annonce);
        menuFichier->addSeparator();
        menuFichier->addAction(actionQuitter);
        menuAide->addAction(action_propos);
        menuAide->addAction(actionUtilisation);
        menuOutils->addAction(actionRecherche);
        menuOutils->addAction(actionStatistiques);
        toolBar_2->addAction(actionImporter);
        toolBar_2->addAction(actionExporter);
        toolBar_2->addSeparator();
        toolBar_2->addAction(actionAjouter_une_annonce);
        toolBar_2->addAction(actionSupprimerAnnonce);
        toolBar_2->addAction(actionToutAfficher);
        toolBar_2->addAction(actionModifier);
        toolBar_2->addAction(actionRecherche);
        toolBar_2->addAction(actionStatistiques);
        toolBar_2->addSeparator();
        toolBar_2->addAction(actionUtilisation);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", 0));
        actionSauvegarder->setText(QApplication::translate("MainWindow", "Sauvegarder", 0));
        actionSauvegarder->setShortcut(QApplication::translate("MainWindow", "Shift+S", 0));
        actionImporter->setText(QApplication::translate("MainWindow", "Importer", 0));
#ifndef QT_NO_TOOLTIP
        actionImporter->setToolTip(QApplication::translate("MainWindow", "Importer", 0));
#endif // QT_NO_TOOLTIP
        actionImporter->setShortcut(QApplication::translate("MainWindow", "Shift+I", 0));
        actionAjouter_une_annonce->setText(QApplication::translate("MainWindow", "Ajouter une annonce", 0));
        actionAjouter_une_annonce->setShortcut(QApplication::translate("MainWindow", "+", 0));
        actionQuitter->setText(QApplication::translate("MainWindow", "Quitter", 0));
        actionQuitter->setShortcut(QApplication::translate("MainWindow", "F4", 0));
        actionRecherche->setText(QApplication::translate("MainWindow", "Recherche", 0));
#ifndef QT_NO_TOOLTIP
        actionRecherche->setToolTip(QApplication::translate("MainWindow", "Rechercher une annonce", 0));
#endif // QT_NO_TOOLTIP
        actionRecherche->setShortcut(QApplication::translate("MainWindow", "F5", 0));
        actionExporter->setText(QApplication::translate("MainWindow", "Exporter", 0));
#ifndef QT_NO_TOOLTIP
        actionExporter->setToolTip(QApplication::translate("MainWindow", "Exporter", 0));
#endif // QT_NO_TOOLTIP
        actionExporter->setShortcut(QApplication::translate("MainWindow", "Shift+E", 0));
        action_propos->setText(QApplication::translate("MainWindow", "\303\200 propos de AgenceImmo", 0));
        action_propos->setShortcut(QApplication::translate("MainWindow", "?", 0));
        actionStatistiques->setText(QApplication::translate("MainWindow", "Statistiques", 0));
        actionStatistiques->setShortcut(QApplication::translate("MainWindow", "Shift+S", 0));
        actionUtilisation->setText(QApplication::translate("MainWindow", "Utilisation", 0));
        actionUtilisation->setShortcut(QApplication::translate("MainWindow", "Shift+H", 0));
        actionSupprimerAnnonce->setText(QApplication::translate("MainWindow", "supprimerAnnonce", 0));
#ifndef QT_NO_TOOLTIP
        actionSupprimerAnnonce->setToolTip(QApplication::translate("MainWindow", "Supprimer une annonce", 0));
#endif // QT_NO_TOOLTIP
        actionSupprimerAnnonce->setShortcut(QApplication::translate("MainWindow", "Backspace", 0));
        actionToutAfficher->setText(QApplication::translate("MainWindow", "toutAfficher", 0));
#ifndef QT_NO_TOOLTIP
        actionToutAfficher->setToolTip(QApplication::translate("MainWindow", "Tout afficher", 0));
#endif // QT_NO_TOOLTIP
        actionToutAfficher->setShortcut(QApplication::translate("MainWindow", "Shift+A", 0));
        actionModifier->setText(QApplication::translate("MainWindow", "modifier", 0));
#ifndef QT_NO_TOOLTIP
        actionModifier->setToolTip(QApplication::translate("MainWindow", "Modifier", 0));
#endif // QT_NO_TOOLTIP
        actionModifier->setShortcut(QApplication::translate("MainWindow", "Shift+M", 0));
        menuFichier->setTitle(QApplication::translate("MainWindow", "Fichier", 0));
        menuAide->setTitle(QApplication::translate("MainWindow", "Aide", 0));
        menuOutils->setTitle(QApplication::translate("MainWindow", "Outils", 0));
        toolBar_2->setWindowTitle(QApplication::translate("MainWindow", "toolBar_2", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
