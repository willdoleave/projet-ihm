/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.4.1
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
#include <QtWidgets/QPushButton>
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
    QWidget *centralWidget;
    QListWidget *listWidget;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QPushButton *pushButton_4;
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
        MainWindow->resize(586, 417);
        MainWindow->setMinimumSize(QSize(586, 417));
        MainWindow->setMaximumSize(QSize(586, 417));
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
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        listWidget = new QListWidget(centralWidget);
        listWidget->setObjectName(QStringLiteral("listWidget"));
        listWidget->setGeometry(QRect(20, 40, 431, 271));
        pushButton = new QPushButton(centralWidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(460, 40, 113, 32));
        pushButton_2 = new QPushButton(centralWidget);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(460, 80, 113, 32));
        pushButton_3 = new QPushButton(centralWidget);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        pushButton_3->setGeometry(QRect(460, 120, 113, 32));
        pushButton_4 = new QPushButton(centralWidget);
        pushButton_4->setObjectName(QStringLiteral("pushButton_4"));
        pushButton_4->setGeometry(QRect(460, 160, 113, 32));
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setEnabled(true);
        menuBar->setGeometry(QRect(0, 0, 586, 22));
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
        menuOutils->addAction(actionRecherche);
        toolBar_2->addAction(actionImporter);
        toolBar_2->addAction(actionExporter);
        toolBar_2->addSeparator();
        toolBar_2->addAction(actionAjouter_une_annonce);
        toolBar_2->addAction(actionRecherche);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", 0));
        actionSauvegarder->setText(QApplication::translate("MainWindow", "Sauvegarder", 0));
        actionImporter->setText(QApplication::translate("MainWindow", "Importer", 0));
#ifndef QT_NO_TOOLTIP
        actionImporter->setToolTip(QApplication::translate("MainWindow", "Importer", 0));
#endif // QT_NO_TOOLTIP
        actionAjouter_une_annonce->setText(QApplication::translate("MainWindow", "Ajouter une annonce", 0));
        actionQuitter->setText(QApplication::translate("MainWindow", "Quitter", 0));
        actionRecherche->setText(QApplication::translate("MainWindow", "Recherche", 0));
#ifndef QT_NO_TOOLTIP
        actionRecherche->setToolTip(QApplication::translate("MainWindow", "Rechercher une annonce", 0));
#endif // QT_NO_TOOLTIP
        actionExporter->setText(QApplication::translate("MainWindow", "Exporter", 0));
#ifndef QT_NO_TOOLTIP
        actionExporter->setToolTip(QApplication::translate("MainWindow", "Exporter", 0));
#endif // QT_NO_TOOLTIP
        action_propos->setText(QApplication::translate("MainWindow", "\303\200 propos de AgenceImmo", 0));
        pushButton->setText(QApplication::translate("MainWindow", "PushButton", 0));
        pushButton_2->setText(QApplication::translate("MainWindow", "PushButton", 0));
        pushButton_3->setText(QApplication::translate("MainWindow", "PushButton", 0));
        pushButton_4->setText(QApplication::translate("MainWindow", "PushButton", 0));
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