/********************************************************************************
** Form generated from reading UI file 'recherchedialog.ui'
**
** Created by: Qt User Interface Compiler version 5.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_RECHERCHEDIALOG_H
#define UI_RECHERCHEDIALOG_H

#include <QtCore/QDate>
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
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_rechercheDialog
{
public:
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout_2;
    QSpinBox *superficieMax;
    QLabel *labelSuperficie;
    QCheckBox *chkPhoto;
    QSpinBox *piecesMin;
    QSpinBox *codePostal;
    QLabel *labelPrix;
    QSpinBox *prixMin;
    QLabel *labelPieces;
    QLabel *labelDate;
    QSpacerItem *verticalSpacer;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer;
    QPushButton *annuler;
    QPushButton *rechercher;
    QLabel *labelType;
    QSpinBox *superficieMin;
    QGridLayout *gridLayout_4;
    QCheckBox *chkTerrain;
    QCheckBox *chkFerme;
    QCheckBox *chkBureau;
    QCheckBox *chkAutre;
    QSpinBox *prixMax;
    QSpinBox *piecesMax;
    QLabel *labelCodePostal;
    QGridLayout *gridLayout_5;
    QRadioButton *radioDateApres;
    QRadioButton *radioDateAvant;
    QDateEdit *dateAnnonce;
    QGridLayout *gridLayout_3;
    QCheckBox *chkMaison;
    QCheckBox *chkChateau;
    QCheckBox *chkAppt;
    QCheckBox *ckCommerce;
    QLabel *titreGlobal;

    void setupUi(QWidget *rechercheDialog)
    {
        if (rechercheDialog->objectName().isEmpty())
            rechercheDialog->setObjectName(QStringLiteral("rechercheDialog"));
        rechercheDialog->resize(558, 500);
        rechercheDialog->setMinimumSize(QSize(558, 500));
        rechercheDialog->setMaximumSize(QSize(558, 500));
        gridLayoutWidget = new QWidget(rechercheDialog);
        gridLayoutWidget->setObjectName(QStringLiteral("gridLayoutWidget"));
        gridLayoutWidget->setGeometry(QRect(20, 100, 517, 401));
        gridLayout_2 = new QGridLayout(gridLayoutWidget);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        superficieMax = new QSpinBox(gridLayoutWidget);
        superficieMax->setObjectName(QStringLiteral("superficieMax"));
        superficieMax->setMaximum(99999999);

        gridLayout_2->addWidget(superficieMax, 1, 2, 1, 1);

        labelSuperficie = new QLabel(gridLayoutWidget);
        labelSuperficie->setObjectName(QStringLiteral("labelSuperficie"));

        gridLayout_2->addWidget(labelSuperficie, 1, 0, 1, 1);

        chkPhoto = new QCheckBox(gridLayoutWidget);
        chkPhoto->setObjectName(QStringLiteral("chkPhoto"));

        gridLayout_2->addWidget(chkPhoto, 5, 0, 1, 2);

        piecesMin = new QSpinBox(gridLayoutWidget);
        piecesMin->setObjectName(QStringLiteral("piecesMin"));
        piecesMin->setMaximum(1000000);

        gridLayout_2->addWidget(piecesMin, 2, 1, 1, 1);

        codePostal = new QSpinBox(gridLayoutWidget);
        codePostal->setObjectName(QStringLiteral("codePostal"));
        codePostal->setMaximum(10000);

        gridLayout_2->addWidget(codePostal, 6, 1, 1, 1);

        labelPrix = new QLabel(gridLayoutWidget);
        labelPrix->setObjectName(QStringLiteral("labelPrix"));

        gridLayout_2->addWidget(labelPrix, 0, 0, 1, 1);

        prixMin = new QSpinBox(gridLayoutWidget);
        prixMin->setObjectName(QStringLiteral("prixMin"));
        prixMin->setMaximum(10000);

        gridLayout_2->addWidget(prixMin, 0, 1, 1, 1);

        labelPieces = new QLabel(gridLayoutWidget);
        labelPieces->setObjectName(QStringLiteral("labelPieces"));

        gridLayout_2->addWidget(labelPieces, 2, 0, 1, 1);

        labelDate = new QLabel(gridLayoutWidget);
        labelDate->setObjectName(QStringLiteral("labelDate"));

        gridLayout_2->addWidget(labelDate, 3, 0, 1, 1);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_2->addItem(verticalSpacer, 7, 0, 1, 1);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);

        annuler = new QPushButton(gridLayoutWidget);
        annuler->setObjectName(QStringLiteral("annuler"));

        horizontalLayout_2->addWidget(annuler);

        rechercher = new QPushButton(gridLayoutWidget);
        rechercher->setObjectName(QStringLiteral("rechercher"));

        horizontalLayout_2->addWidget(rechercher);


        gridLayout_2->addLayout(horizontalLayout_2, 7, 1, 1, 2);

        labelType = new QLabel(gridLayoutWidget);
        labelType->setObjectName(QStringLiteral("labelType"));

        gridLayout_2->addWidget(labelType, 4, 0, 1, 1);

        superficieMin = new QSpinBox(gridLayoutWidget);
        superficieMin->setObjectName(QStringLiteral("superficieMin"));
        superficieMin->setMaximum(1000000);

        gridLayout_2->addWidget(superficieMin, 1, 1, 1, 1);

        gridLayout_4 = new QGridLayout();
        gridLayout_4->setObjectName(QStringLiteral("gridLayout_4"));
        chkTerrain = new QCheckBox(gridLayoutWidget);
        chkTerrain->setObjectName(QStringLiteral("chkTerrain"));

        gridLayout_4->addWidget(chkTerrain, 1, 0, 1, 1);

        chkFerme = new QCheckBox(gridLayoutWidget);
        chkFerme->setObjectName(QStringLiteral("chkFerme"));

        gridLayout_4->addWidget(chkFerme, 2, 0, 1, 1);

        chkBureau = new QCheckBox(gridLayoutWidget);
        chkBureau->setObjectName(QStringLiteral("chkBureau"));

        gridLayout_4->addWidget(chkBureau, 0, 0, 1, 1);

        chkAutre = new QCheckBox(gridLayoutWidget);
        chkAutre->setObjectName(QStringLiteral("chkAutre"));

        gridLayout_4->addWidget(chkAutre, 3, 0, 1, 1);


        gridLayout_2->addLayout(gridLayout_4, 4, 2, 1, 1);

        prixMax = new QSpinBox(gridLayoutWidget);
        prixMax->setObjectName(QStringLiteral("prixMax"));
        prixMax->setMaximum(99999999);

        gridLayout_2->addWidget(prixMax, 0, 2, 1, 1);

        piecesMax = new QSpinBox(gridLayoutWidget);
        piecesMax->setObjectName(QStringLiteral("piecesMax"));
        piecesMax->setMaximum(99999999);

        gridLayout_2->addWidget(piecesMax, 2, 2, 1, 1);

        labelCodePostal = new QLabel(gridLayoutWidget);
        labelCodePostal->setObjectName(QStringLiteral("labelCodePostal"));

        gridLayout_2->addWidget(labelCodePostal, 6, 0, 1, 1);

        gridLayout_5 = new QGridLayout();
        gridLayout_5->setObjectName(QStringLiteral("gridLayout_5"));
        radioDateApres = new QRadioButton(gridLayoutWidget);
        radioDateApres->setObjectName(QStringLiteral("radioDateApres"));

        gridLayout_5->addWidget(radioDateApres, 1, 1, 1, 1);

        radioDateAvant = new QRadioButton(gridLayoutWidget);
        radioDateAvant->setObjectName(QStringLiteral("radioDateAvant"));

        gridLayout_5->addWidget(radioDateAvant, 1, 0, 1, 1);

        dateAnnonce = new QDateEdit(gridLayoutWidget);
        dateAnnonce->setObjectName(QStringLiteral("dateAnnonce"));
        dateAnnonce->setMaximumDate(QDate(2099, 12, 31));
        dateAnnonce->setMinimumDate(QDate(2014, 1, 1));

        gridLayout_5->addWidget(dateAnnonce, 2, 0, 1, 1);


        gridLayout_2->addLayout(gridLayout_5, 3, 1, 1, 2);

        gridLayout_3 = new QGridLayout();
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        chkMaison = new QCheckBox(gridLayoutWidget);
        chkMaison->setObjectName(QStringLiteral("chkMaison"));

        gridLayout_3->addWidget(chkMaison, 0, 0, 1, 1);

        chkChateau = new QCheckBox(gridLayoutWidget);
        chkChateau->setObjectName(QStringLiteral("chkChateau"));

        gridLayout_3->addWidget(chkChateau, 2, 0, 1, 1);

        chkAppt = new QCheckBox(gridLayoutWidget);
        chkAppt->setObjectName(QStringLiteral("chkAppt"));

        gridLayout_3->addWidget(chkAppt, 1, 0, 1, 1);

        ckCommerce = new QCheckBox(gridLayoutWidget);
        ckCommerce->setObjectName(QStringLiteral("ckCommerce"));

        gridLayout_3->addWidget(ckCommerce, 3, 0, 1, 1);


        gridLayout_2->addLayout(gridLayout_3, 4, 1, 1, 1);

        titreGlobal = new QLabel(rechercheDialog);
        titreGlobal->setObjectName(QStringLiteral("titreGlobal"));
        titreGlobal->setGeometry(QRect(20, 20, 531, 51));
        QFont font;
        font.setFamily(QStringLiteral("Arial Black"));
        font.setPointSize(30);
        font.setBold(true);
        font.setWeight(75);
        titreGlobal->setFont(font);
        titreGlobal->setStyleSheet(QStringLiteral("color:red;"));

        retranslateUi(rechercheDialog);

        QMetaObject::connectSlotsByName(rechercheDialog);
    } // setupUi

    void retranslateUi(QWidget *rechercheDialog)
    {
        rechercheDialog->setWindowTitle(QApplication::translate("rechercheDialog", "Form", 0));
        labelSuperficie->setText(QApplication::translate("rechercheDialog", "Superficie entre (min/max)", 0));
        chkPhoto->setText(QApplication::translate("rechercheDialog", "Annonces contenant photo", 0));
        labelPrix->setText(QApplication::translate("rechercheDialog", "Prix entre (min/max)", 0));
        labelPieces->setText(QApplication::translate("rechercheDialog", "Pi\303\250ces entre (min/max)", 0));
        labelDate->setText(QApplication::translate("rechercheDialog", "Date de l'annonce", 0));
        annuler->setText(QApplication::translate("rechercheDialog", "Annuler", 0));
        rechercher->setText(QApplication::translate("rechercheDialog", "Rechercher", 0));
        labelType->setText(QApplication::translate("rechercheDialog", "Type du bien", 0));
        chkTerrain->setText(QApplication::translate("rechercheDialog", "Terrain", 0));
        chkFerme->setText(QApplication::translate("rechercheDialog", "Ferme", 0));
        chkBureau->setText(QApplication::translate("rechercheDialog", "Bureau", 0));
        chkAutre->setText(QApplication::translate("rechercheDialog", "Autre", 0));
        labelCodePostal->setText(QApplication::translate("rechercheDialog", "Code Postal", 0));
        radioDateApres->setText(QApplication::translate("rechercheDialog", "\303\200 partir", 0));
        radioDateAvant->setText(QApplication::translate("rechercheDialog", "Avant", 0));
        dateAnnonce->setDisplayFormat(QApplication::translate("rechercheDialog", "dd/MM/yyyy", 0));
        chkMaison->setText(QApplication::translate("rechercheDialog", "Maison", 0));
        chkChateau->setText(QApplication::translate("rechercheDialog", "Ch\303\242teau", 0));
        chkAppt->setText(QApplication::translate("rechercheDialog", "Appartement", 0));
        ckCommerce->setText(QApplication::translate("rechercheDialog", "Commerce", 0));
        titreGlobal->setText(QApplication::translate("rechercheDialog", "Recherche d'une annonce", 0));
    } // retranslateUi

};

namespace Ui {
    class rechercheDialog: public Ui_rechercheDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_RECHERCHEDIALOG_H
