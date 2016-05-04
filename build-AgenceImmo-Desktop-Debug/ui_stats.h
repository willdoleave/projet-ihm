/********************************************************************************
** Form generated from reading UI file 'stats.ui'
**
** Created by: Qt User Interface Compiler version 5.4.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_STATS_H
#define UI_STATS_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>
#include "qcustomplot/qcustomplot.h"

QT_BEGIN_NAMESPACE

class Ui_Stats
{
public:
    QLabel *label;
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label_2;
    QDateEdit *datedebut;
    QLabel *label_3;
    QDateEdit *datefin;
    QWidget *horizontalLayoutWidget_2;
    QHBoxLayout *horizontalLayout_7;
    QLabel *label_4;
    QGridLayout *gridLayout_2;
    QCheckBox *chkChateau;
    QCheckBox *chkTerrain;
    QCheckBox *chkAppt;
    QCheckBox *chkAutre;
    QCheckBox *chkBureau;
    QCheckBox *chkCommerce;
    QCheckBox *chkMaison;
    QCheckBox *chkFerme;
    QCheckBox *chkTous;
    QPushButton *pushButton;
    QWidget *gridLayoutWidget_2;
    QGridLayout *gridLayout_3;
    QLabel *en_vente;
    QLabel *label_6;
    QLabel *label_5;
    QLabel *label_7;
    QLabel *vendus;
    QLabel *label_9;
    QLabel *en_location;
    QLabel *loues;
    QCustomPlot *customPlot;

    void setupUi(QWidget *Stats)
    {
        if (Stats->objectName().isEmpty())
            Stats->setObjectName(QStringLiteral("Stats"));
        Stats->resize(723, 669);
        label = new QLabel(Stats);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(0, 0, 651, 61));
        QFont font;
        font.setPointSize(16);
        font.setBold(true);
        font.setWeight(75);
        label->setFont(font);
        label->setAlignment(Qt::AlignCenter);
        horizontalLayoutWidget = new QWidget(Stats);
        horizontalLayoutWidget->setObjectName(QStringLiteral("horizontalLayoutWidget"));
        horizontalLayoutWidget->setGeometry(QRect(50, 60, 411, 80));
        horizontalLayout_6 = new QHBoxLayout(horizontalLayoutWidget);
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        horizontalLayout_6->setContentsMargins(0, 0, 0, 0);
        label_2 = new QLabel(horizontalLayoutWidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setMaximumSize(QSize(100, 16777215));

        horizontalLayout_6->addWidget(label_2);

        datedebut = new QDateEdit(horizontalLayoutWidget);
        datedebut->setObjectName(QStringLiteral("datedebut"));

        horizontalLayout_6->addWidget(datedebut);

        label_3 = new QLabel(horizontalLayoutWidget);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setMaximumSize(QSize(30, 16777215));

        horizontalLayout_6->addWidget(label_3);

        datefin = new QDateEdit(horizontalLayoutWidget);
        datefin->setObjectName(QStringLiteral("datefin"));

        horizontalLayout_6->addWidget(datefin);

        horizontalLayoutWidget_2 = new QWidget(Stats);
        horizontalLayoutWidget_2->setObjectName(QStringLiteral("horizontalLayoutWidget_2"));
        horizontalLayoutWidget_2->setGeometry(QRect(50, 140, 414, 110));
        horizontalLayout_7 = new QHBoxLayout(horizontalLayoutWidget_2);
        horizontalLayout_7->setObjectName(QStringLiteral("horizontalLayout_7"));
        horizontalLayout_7->setContentsMargins(0, 0, 0, 0);
        label_4 = new QLabel(horizontalLayoutWidget_2);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setMaximumSize(QSize(100, 16777215));

        horizontalLayout_7->addWidget(label_4);

        gridLayout_2 = new QGridLayout();
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        chkChateau = new QCheckBox(horizontalLayoutWidget_2);
        chkChateau->setObjectName(QStringLiteral("chkChateau"));

        gridLayout_2->addWidget(chkChateau, 2, 1, 1, 1);

        chkTerrain = new QCheckBox(horizontalLayoutWidget_2);
        chkTerrain->setObjectName(QStringLiteral("chkTerrain"));

        gridLayout_2->addWidget(chkTerrain, 1, 2, 1, 1);

        chkAppt = new QCheckBox(horizontalLayoutWidget_2);
        chkAppt->setObjectName(QStringLiteral("chkAppt"));

        gridLayout_2->addWidget(chkAppt, 1, 1, 1, 1);

        chkAutre = new QCheckBox(horizontalLayoutWidget_2);
        chkAutre->setObjectName(QStringLiteral("chkAutre"));

        gridLayout_2->addWidget(chkAutre, 3, 2, 1, 1);

        chkBureau = new QCheckBox(horizontalLayoutWidget_2);
        chkBureau->setObjectName(QStringLiteral("chkBureau"));

        gridLayout_2->addWidget(chkBureau, 0, 2, 1, 1);

        chkCommerce = new QCheckBox(horizontalLayoutWidget_2);
        chkCommerce->setObjectName(QStringLiteral("chkCommerce"));

        gridLayout_2->addWidget(chkCommerce, 3, 1, 1, 1);

        chkMaison = new QCheckBox(horizontalLayoutWidget_2);
        chkMaison->setObjectName(QStringLiteral("chkMaison"));

        gridLayout_2->addWidget(chkMaison, 0, 1, 1, 1);

        chkFerme = new QCheckBox(horizontalLayoutWidget_2);
        chkFerme->setObjectName(QStringLiteral("chkFerme"));

        gridLayout_2->addWidget(chkFerme, 2, 2, 1, 1);

        chkTous = new QCheckBox(horizontalLayoutWidget_2);
        chkTous->setObjectName(QStringLiteral("chkTous"));
        chkTous->setChecked(true);

        gridLayout_2->addWidget(chkTous, 0, 0, 4, 1);


        horizontalLayout_7->addLayout(gridLayout_2);

        pushButton = new QPushButton(Stats);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(580, 220, 99, 27));
        gridLayoutWidget_2 = new QWidget(Stats);
        gridLayoutWidget_2->setObjectName(QStringLiteral("gridLayoutWidget_2"));
        gridLayoutWidget_2->setGeometry(QRect(480, 110, 201, 96));
        gridLayout_3 = new QGridLayout(gridLayoutWidget_2);
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        gridLayout_3->setContentsMargins(0, 0, 0, 0);
        en_vente = new QLabel(gridLayoutWidget_2);
        en_vente->setObjectName(QStringLiteral("en_vente"));

        gridLayout_3->addWidget(en_vente, 1, 1, 1, 1);

        label_6 = new QLabel(gridLayoutWidget_2);
        label_6->setObjectName(QStringLiteral("label_6"));
        QFont font1;
        font1.setPointSize(12);
        font1.setBold(true);
        font1.setWeight(75);
        label_6->setFont(font1);

        gridLayout_3->addWidget(label_6, 1, 0, 1, 1);

        label_5 = new QLabel(gridLayoutWidget_2);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setFont(font1);

        gridLayout_3->addWidget(label_5, 0, 0, 1, 1);

        label_7 = new QLabel(gridLayoutWidget_2);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setFont(font1);

        gridLayout_3->addWidget(label_7, 2, 0, 1, 1);

        vendus = new QLabel(gridLayoutWidget_2);
        vendus->setObjectName(QStringLiteral("vendus"));

        gridLayout_3->addWidget(vendus, 0, 1, 1, 1);

        label_9 = new QLabel(gridLayoutWidget_2);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setFont(font1);

        gridLayout_3->addWidget(label_9, 3, 0, 1, 1);

        en_location = new QLabel(gridLayoutWidget_2);
        en_location->setObjectName(QStringLiteral("en_location"));

        gridLayout_3->addWidget(en_location, 3, 1, 1, 1);

        loues = new QLabel(gridLayoutWidget_2);
        loues->setObjectName(QStringLiteral("loues"));

        gridLayout_3->addWidget(loues, 2, 1, 1, 1);

        customPlot = new QCustomPlot(Stats);
        customPlot->setObjectName(QStringLiteral("customPlot"));
        customPlot->setGeometry(QRect(50, 250, 631, 391));

        retranslateUi(Stats);

        QMetaObject::connectSlotsByName(Stats);
    } // setupUi

    void retranslateUi(QWidget *Stats)
    {
        Stats->setWindowTitle(QApplication::translate("Stats", "Form", 0));
        label->setText(QApplication::translate("Stats", "Statistiques", 0));
        label_2->setText(QApplication::translate("Stats", "P\303\251riode du ", 0));
        datedebut->setDisplayFormat(QApplication::translate("Stats", "dd/MM/yyyy", 0));
        label_3->setText(QApplication::translate("Stats", "Au", 0));
        datefin->setDisplayFormat(QApplication::translate("Stats", "dd/MM/yyyy", 0));
        label_4->setText(QApplication::translate("Stats", "Type du bien :", 0));
        chkChateau->setText(QApplication::translate("Stats", "Ch\303\242teau", 0));
        chkTerrain->setText(QApplication::translate("Stats", "Terrain", 0));
        chkAppt->setText(QApplication::translate("Stats", "Appartement", 0));
        chkAutre->setText(QApplication::translate("Stats", "Autre", 0));
        chkBureau->setText(QApplication::translate("Stats", "Bureau", 0));
        chkCommerce->setText(QApplication::translate("Stats", "Commerce", 0));
        chkMaison->setText(QApplication::translate("Stats", "Maison", 0));
        chkFerme->setText(QApplication::translate("Stats", "Ferme", 0));
        chkTous->setText(QApplication::translate("Stats", "tous", 0));
        pushButton->setText(QApplication::translate("Stats", "Dessiner", 0));
        en_vente->setText(QApplication::translate("Stats", "0", 0));
        label_6->setText(QApplication::translate("Stats", "En Vente", 0));
        label_5->setText(QApplication::translate("Stats", "Vendus :", 0));
        label_7->setText(QApplication::translate("Stats", "Lou\303\251s", 0));
        vendus->setText(QApplication::translate("Stats", "0", 0));
        label_9->setText(QApplication::translate("Stats", "En Location", 0));
        en_location->setText(QApplication::translate("Stats", "0", 0));
        loues->setText(QApplication::translate("Stats", "0", 0));
    } // retranslateUi

};

namespace Ui {
    class Stats: public Ui_Stats {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_STATS_H
