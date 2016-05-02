/********************************************************************************
** Form generated from reading UI file 'ajoutdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_AJOUTDIALOG_H
#define UI_AJOUTDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ajoutDialog
{
public:
    QLabel *label;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents_2;
    QGridLayout *gridLayout_6;
    QLabel *label_17;
    QGridLayout *gridLayout_5;
    QLabel *label_14;
    QLabel *label_13;
    QSpinBox *nombrePieces;
    QSpinBox *superficie;
    QLabel *label_16;
    QHBoxLayout *horizontalLayout;
    QComboBox *etat;
    QComboBox *type;
    QHBoxLayout *horizontalLayout_10;
    QSpacerItem *horizontalSpacer;
    QPushButton *pushButton_2;
    QPushButton *pushButton;
    QHBoxLayout *horizontalLayout_8;
    QGridLayout *gridLayout_4;
    QLabel *label_9;
    QLabel *label_10;
    QLineEdit *nom;
    QLineEdit *prenom;
    QLineEdit *telephone;
    QLineEdit *email;
    QLabel *label_8;
    QLabel *label_11;
    QHBoxLayout *horizontalLayout_7;
    QGridLayout *gridLayout_3;
    QLabel *label_5;
    QLineEdit *ville;
    QLabel *label_6;
    QLineEdit *adresse;
    QLabel *label_7;
    QSpinBox *codePostal;
    QSpacerItem *horizontalSpacer_2;
    QHBoxLayout *horizontalLayout_9;
    QLabel *label_12;
    QGridLayout *gridLayout;
    QLabel *labelPhotos;
    QLineEdit *titre;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_4;
    QLabel *label_3;
    QTextEdit *description;
    QSpinBox *prix;
    QGridLayout *gridLayout_2;
    QLabel *image1;
    QPushButton *upload_image4;
    QLabel *image3;
    QLabel *image2;
    QLabel *image4;
    QPushButton *upload_image2;
    QPushButton *upload_image3;
    QPushButton *upload_image1;
    QLabel *label_15;
    QLabel *titreLabel;
    QLabel *label_18;
    QLabel *label_2;
    QLabel *labelDescription;
    QHBoxLayout *horizontalLayout_2;
    QRadioButton *contractuelle1;
    QRadioButton *contractuelle2;
    QRadioButton *contractuelle3;
    QRadioButton *contractuelle4;

    void setupUi(QWidget *ajoutDialog)
    {
        if (ajoutDialog->objectName().isEmpty())
            ajoutDialog->setObjectName(QStringLiteral("ajoutDialog"));
        ajoutDialog->resize(567, 709);
        ajoutDialog->setMinimumSize(QSize(567, 709));
        ajoutDialog->setMaximumSize(QSize(567, 709));
        label = new QLabel(ajoutDialog);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(80, 0, 481, 41));
        QFont font;
        font.setFamily(QStringLiteral("Arial Black"));
        font.setPointSize(30);
        font.setBold(true);
        font.setWeight(75);
        label->setFont(font);
        label->setStyleSheet(QStringLiteral("color:red;"));
        scrollArea = new QScrollArea(ajoutDialog);
        scrollArea->setObjectName(QStringLiteral("scrollArea"));
        scrollArea->setEnabled(true);
        scrollArea->setGeometry(QRect(20, 40, 531, 671));
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents_2 = new QWidget();
        scrollAreaWidgetContents_2->setObjectName(QStringLiteral("scrollAreaWidgetContents_2"));
        scrollAreaWidgetContents_2->setGeometry(QRect(0, 0, 513, 688));
        gridLayout_6 = new QGridLayout(scrollAreaWidgetContents_2);
        gridLayout_6->setObjectName(QStringLiteral("gridLayout_6"));
        label_17 = new QLabel(scrollAreaWidgetContents_2);
        label_17->setObjectName(QStringLiteral("label_17"));

        gridLayout_6->addWidget(label_17, 4, 0, 1, 2);

        gridLayout_5 = new QGridLayout();
        gridLayout_5->setObjectName(QStringLiteral("gridLayout_5"));
        label_14 = new QLabel(scrollAreaWidgetContents_2);
        label_14->setObjectName(QStringLiteral("label_14"));

        gridLayout_5->addWidget(label_14, 1, 0, 1, 1);

        label_13 = new QLabel(scrollAreaWidgetContents_2);
        label_13->setObjectName(QStringLiteral("label_13"));

        gridLayout_5->addWidget(label_13, 0, 0, 1, 1);

        nombrePieces = new QSpinBox(scrollAreaWidgetContents_2);
        nombrePieces->setObjectName(QStringLiteral("nombrePieces"));
        nombrePieces->setMinimumSize(QSize(2, 0));
        nombrePieces->setMaximum(10000);

        gridLayout_5->addWidget(nombrePieces, 2, 1, 1, 1);

        superficie = new QSpinBox(scrollAreaWidgetContents_2);
        superficie->setObjectName(QStringLiteral("superficie"));
        superficie->setMaximum(1000000);

        gridLayout_5->addWidget(superficie, 1, 1, 1, 1);

        label_16 = new QLabel(scrollAreaWidgetContents_2);
        label_16->setObjectName(QStringLiteral("label_16"));

        gridLayout_5->addWidget(label_16, 2, 0, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        etat = new QComboBox(scrollAreaWidgetContents_2);
        etat->setObjectName(QStringLiteral("etat"));
        etat->setMaximumSize(QSize(90, 16777215));

        horizontalLayout->addWidget(etat);

        type = new QComboBox(scrollAreaWidgetContents_2);
        type->setObjectName(QStringLiteral("type"));

        horizontalLayout->addWidget(type);


        gridLayout_5->addLayout(horizontalLayout, 0, 1, 1, 1);

        horizontalLayout_10 = new QHBoxLayout();
        horizontalLayout_10->setObjectName(QStringLiteral("horizontalLayout_10"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_10->addItem(horizontalSpacer);

        pushButton_2 = new QPushButton(scrollAreaWidgetContents_2);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));

        horizontalLayout_10->addWidget(pushButton_2);

        pushButton = new QPushButton(scrollAreaWidgetContents_2);
        pushButton->setObjectName(QStringLiteral("pushButton"));

        horizontalLayout_10->addWidget(pushButton);


        gridLayout_5->addLayout(horizontalLayout_10, 3, 0, 1, 2);


        gridLayout_6->addLayout(gridLayout_5, 3, 0, 1, 2);

        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setObjectName(QStringLiteral("horizontalLayout_8"));
        gridLayout_4 = new QGridLayout();
        gridLayout_4->setObjectName(QStringLiteral("gridLayout_4"));
        label_9 = new QLabel(scrollAreaWidgetContents_2);
        label_9->setObjectName(QStringLiteral("label_9"));

        gridLayout_4->addWidget(label_9, 1, 0, 1, 1);

        label_10 = new QLabel(scrollAreaWidgetContents_2);
        label_10->setObjectName(QStringLiteral("label_10"));

        gridLayout_4->addWidget(label_10, 2, 0, 1, 1);

        nom = new QLineEdit(scrollAreaWidgetContents_2);
        nom->setObjectName(QStringLiteral("nom"));

        gridLayout_4->addWidget(nom, 0, 1, 1, 1);

        prenom = new QLineEdit(scrollAreaWidgetContents_2);
        prenom->setObjectName(QStringLiteral("prenom"));

        gridLayout_4->addWidget(prenom, 1, 1, 1, 1);

        telephone = new QLineEdit(scrollAreaWidgetContents_2);
        telephone->setObjectName(QStringLiteral("telephone"));

        gridLayout_4->addWidget(telephone, 2, 1, 1, 1);

        email = new QLineEdit(scrollAreaWidgetContents_2);
        email->setObjectName(QStringLiteral("email"));

        gridLayout_4->addWidget(email, 3, 1, 1, 1);

        label_8 = new QLabel(scrollAreaWidgetContents_2);
        label_8->setObjectName(QStringLiteral("label_8"));

        gridLayout_4->addWidget(label_8, 0, 0, 1, 1);

        label_11 = new QLabel(scrollAreaWidgetContents_2);
        label_11->setObjectName(QStringLiteral("label_11"));

        gridLayout_4->addWidget(label_11, 3, 0, 1, 1);


        horizontalLayout_8->addLayout(gridLayout_4);


        gridLayout_6->addLayout(horizontalLayout_8, 1, 1, 1, 1);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName(QStringLiteral("horizontalLayout_7"));
        gridLayout_3 = new QGridLayout();
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        label_5 = new QLabel(scrollAreaWidgetContents_2);
        label_5->setObjectName(QStringLiteral("label_5"));

        gridLayout_3->addWidget(label_5, 0, 0, 1, 1);

        ville = new QLineEdit(scrollAreaWidgetContents_2);
        ville->setObjectName(QStringLiteral("ville"));

        gridLayout_3->addWidget(ville, 1, 1, 1, 1);

        label_6 = new QLabel(scrollAreaWidgetContents_2);
        label_6->setObjectName(QStringLiteral("label_6"));

        gridLayout_3->addWidget(label_6, 1, 0, 1, 1);

        adresse = new QLineEdit(scrollAreaWidgetContents_2);
        adresse->setObjectName(QStringLiteral("adresse"));

        gridLayout_3->addWidget(adresse, 0, 1, 1, 1);

        label_7 = new QLabel(scrollAreaWidgetContents_2);
        label_7->setObjectName(QStringLiteral("label_7"));

        gridLayout_3->addWidget(label_7, 2, 0, 1, 1);

        codePostal = new QSpinBox(scrollAreaWidgetContents_2);
        codePostal->setObjectName(QStringLiteral("codePostal"));
        codePostal->setMaximum(9999999);

        gridLayout_3->addWidget(codePostal, 2, 1, 1, 1);


        horizontalLayout_7->addLayout(gridLayout_3);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_7->addItem(horizontalSpacer_2);


        gridLayout_6->addLayout(horizontalLayout_7, 1, 0, 1, 1);

        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setObjectName(QStringLiteral("horizontalLayout_9"));
        label_12 = new QLabel(scrollAreaWidgetContents_2);
        label_12->setObjectName(QStringLiteral("label_12"));
        QFont font1;
        font1.setFamily(QStringLiteral("Arial Black"));
        font1.setPointSize(18);
        font1.setBold(true);
        font1.setWeight(75);
        label_12->setFont(font1);

        horizontalLayout_9->addWidget(label_12);


        gridLayout_6->addLayout(horizontalLayout_9, 2, 0, 1, 2);

        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        labelPhotos = new QLabel(scrollAreaWidgetContents_2);
        labelPhotos->setObjectName(QStringLiteral("labelPhotos"));

        gridLayout->addWidget(labelPhotos, 4, 0, 1, 1);

        titre = new QLineEdit(scrollAreaWidgetContents_2);
        titre->setObjectName(QStringLiteral("titre"));

        gridLayout->addWidget(titre, 1, 1, 1, 1);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        label_4 = new QLabel(scrollAreaWidgetContents_2);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setFont(font1);

        horizontalLayout_3->addWidget(label_4);

        label_3 = new QLabel(scrollAreaWidgetContents_2);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setFont(font1);

        horizontalLayout_3->addWidget(label_3);


        gridLayout->addLayout(horizontalLayout_3, 6, 0, 1, 2);

        description = new QTextEdit(scrollAreaWidgetContents_2);
        description->setObjectName(QStringLiteral("description"));
        description->setMaximumSize(QSize(16777215, 80));

        gridLayout->addWidget(description, 2, 1, 1, 1);

        prix = new QSpinBox(scrollAreaWidgetContents_2);
        prix->setObjectName(QStringLiteral("prix"));
        prix->setMaximum(99999999);

        gridLayout->addWidget(prix, 3, 1, 1, 1);

        gridLayout_2 = new QGridLayout();
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        image1 = new QLabel(scrollAreaWidgetContents_2);
        image1->setObjectName(QStringLiteral("image1"));
        image1->setPixmap(QPixmap(QString::fromUtf8(":/images/img/camera.png")));

        gridLayout_2->addWidget(image1, 0, 0, 1, 1);

        upload_image4 = new QPushButton(scrollAreaWidgetContents_2);
        upload_image4->setObjectName(QStringLiteral("upload_image4"));
        upload_image4->setMaximumSize(QSize(80, 16777215));

        gridLayout_2->addWidget(upload_image4, 1, 3, 1, 1);

        image3 = new QLabel(scrollAreaWidgetContents_2);
        image3->setObjectName(QStringLiteral("image3"));
        image3->setPixmap(QPixmap(QString::fromUtf8(":/images/img/camera.png")));

        gridLayout_2->addWidget(image3, 0, 2, 1, 1);

        image2 = new QLabel(scrollAreaWidgetContents_2);
        image2->setObjectName(QStringLiteral("image2"));
        image2->setPixmap(QPixmap(QString::fromUtf8(":/images/img/camera.png")));

        gridLayout_2->addWidget(image2, 0, 1, 1, 1);

        image4 = new QLabel(scrollAreaWidgetContents_2);
        image4->setObjectName(QStringLiteral("image4"));
        image4->setPixmap(QPixmap(QString::fromUtf8(":/images/img/camera.png")));

        gridLayout_2->addWidget(image4, 0, 3, 1, 1);

        upload_image2 = new QPushButton(scrollAreaWidgetContents_2);
        upload_image2->setObjectName(QStringLiteral("upload_image2"));
        upload_image2->setMaximumSize(QSize(80, 16777215));

        gridLayout_2->addWidget(upload_image2, 1, 1, 1, 1);

        upload_image3 = new QPushButton(scrollAreaWidgetContents_2);
        upload_image3->setObjectName(QStringLiteral("upload_image3"));
        upload_image3->setMaximumSize(QSize(80, 16777215));

        gridLayout_2->addWidget(upload_image3, 1, 2, 1, 1);

        upload_image1 = new QPushButton(scrollAreaWidgetContents_2);
        upload_image1->setObjectName(QStringLiteral("upload_image1"));
        upload_image1->setMaximumSize(QSize(80, 16777215));

        gridLayout_2->addWidget(upload_image1, 1, 0, 1, 1);


        gridLayout->addLayout(gridLayout_2, 4, 1, 1, 1);

        label_15 = new QLabel(scrollAreaWidgetContents_2);
        label_15->setObjectName(QStringLiteral("label_15"));

        gridLayout->addWidget(label_15, 3, 0, 1, 1);

        titreLabel = new QLabel(scrollAreaWidgetContents_2);
        titreLabel->setObjectName(QStringLiteral("titreLabel"));

        gridLayout->addWidget(titreLabel, 1, 0, 1, 1);

        label_18 = new QLabel(scrollAreaWidgetContents_2);
        label_18->setObjectName(QStringLiteral("label_18"));

        gridLayout->addWidget(label_18, 5, 0, 1, 1);

        label_2 = new QLabel(scrollAreaWidgetContents_2);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setFont(font1);

        gridLayout->addWidget(label_2, 0, 0, 1, 2);

        labelDescription = new QLabel(scrollAreaWidgetContents_2);
        labelDescription->setObjectName(QStringLiteral("labelDescription"));

        gridLayout->addWidget(labelDescription, 2, 0, 1, 1);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        contractuelle1 = new QRadioButton(scrollAreaWidgetContents_2);
        contractuelle1->setObjectName(QStringLiteral("contractuelle1"));
        contractuelle1->setChecked(true);

        horizontalLayout_2->addWidget(contractuelle1);

        contractuelle2 = new QRadioButton(scrollAreaWidgetContents_2);
        contractuelle2->setObjectName(QStringLiteral("contractuelle2"));

        horizontalLayout_2->addWidget(contractuelle2);

        contractuelle3 = new QRadioButton(scrollAreaWidgetContents_2);
        contractuelle3->setObjectName(QStringLiteral("contractuelle3"));

        horizontalLayout_2->addWidget(contractuelle3);

        contractuelle4 = new QRadioButton(scrollAreaWidgetContents_2);
        contractuelle4->setObjectName(QStringLiteral("contractuelle4"));

        horizontalLayout_2->addWidget(contractuelle4);


        gridLayout->addLayout(horizontalLayout_2, 5, 1, 1, 1);


        gridLayout_6->addLayout(gridLayout, 0, 0, 1, 2);

        scrollArea->setWidget(scrollAreaWidgetContents_2);
        label->raise();
        scrollArea->raise();
        upload_image1->raise();

        retranslateUi(ajoutDialog);

        QMetaObject::connectSlotsByName(ajoutDialog);
    } // setupUi

    void retranslateUi(QWidget *ajoutDialog)
    {
        ajoutDialog->setWindowTitle(QApplication::translate("ajoutDialog", "Form", 0));
        label->setText(QApplication::translate("ajoutDialog", "Ajout d'une annonce", 0));
#ifndef QT_NO_WHATSTHIS
        scrollArea->setWhatsThis(QApplication::translate("ajoutDialog", "<html><head/><body><p><br/></p></body></html>", 0));
#endif // QT_NO_WHATSTHIS
        label_17->setText(QApplication::translate("ajoutDialog", "* Champs obligatoires", 0));
        label_14->setText(QApplication::translate("ajoutDialog", "Superficie", 0));
        label_13->setText(QApplication::translate("ajoutDialog", "Type", 0));
        label_16->setText(QApplication::translate("ajoutDialog", "Nombre de pi\303\250ces*", 0));
        etat->clear();
        etat->insertItems(0, QStringList()
         << QApplication::translate("ajoutDialog", "Vente", 0)
         << QApplication::translate("ajoutDialog", "Location", 0)
        );
        type->clear();
        type->insertItems(0, QStringList()
         << QApplication::translate("ajoutDialog", "Maison", 0)
         << QApplication::translate("ajoutDialog", "Appartement", 0)
         << QApplication::translate("ajoutDialog", "Ch\303\242teau", 0)
         << QApplication::translate("ajoutDialog", "Commerce", 0)
         << QApplication::translate("ajoutDialog", "Bureau", 0)
         << QApplication::translate("ajoutDialog", "Terrain", 0)
         << QApplication::translate("ajoutDialog", "Ferme", 0)
         << QApplication::translate("ajoutDialog", "Autre", 0)
        );
        pushButton_2->setText(QApplication::translate("ajoutDialog", "Annuler", 0));
        pushButton->setText(QApplication::translate("ajoutDialog", "Ajouter", 0));
        label_9->setText(QApplication::translate("ajoutDialog", "Pr\303\251nom*", 0));
        label_10->setText(QApplication::translate("ajoutDialog", "T\303\251l\303\251phone*", 0));
        label_8->setText(QApplication::translate("ajoutDialog", "Nom*", 0));
        label_11->setText(QApplication::translate("ajoutDialog", "Adresse mail*", 0));
        label_5->setText(QApplication::translate("ajoutDialog", "Adresse*", 0));
        label_6->setText(QApplication::translate("ajoutDialog", "Ville*", 0));
        label_7->setText(QApplication::translate("ajoutDialog", "Code Postal", 0));
        label_12->setText(QApplication::translate("ajoutDialog", "Informations sur le bien", 0));
        labelPhotos->setText(QApplication::translate("ajoutDialog", "Photos", 0));
        label_4->setText(QApplication::translate("ajoutDialog", "Adresse du bien", 0));
        label_3->setText(QApplication::translate("ajoutDialog", "Informations contact", 0));
        image1->setText(QString());
        upload_image4->setText(QApplication::translate("ajoutDialog", "Upload", 0));
        image3->setText(QString());
        image2->setText(QString());
        image4->setText(QString());
        upload_image2->setText(QApplication::translate("ajoutDialog", "Upload", 0));
        upload_image3->setText(QApplication::translate("ajoutDialog", "Upload", 0));
        upload_image1->setText(QApplication::translate("ajoutDialog", "Upload", 0));
        label_15->setText(QApplication::translate("ajoutDialog", "Prix", 0));
        titreLabel->setText(QApplication::translate("ajoutDialog", "Titre de l'annonce*", 0));
        label_18->setText(QApplication::translate("ajoutDialog", "Contractuelle", 0));
        label_2->setText(QApplication::translate("ajoutDialog", "Informations annonce", 0));
        labelDescription->setText(QApplication::translate("ajoutDialog", "Description", 0));
        contractuelle1->setText(QString());
        contractuelle2->setText(QString());
        contractuelle3->setText(QString());
        contractuelle4->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class ajoutDialog: public Ui_ajoutDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_AJOUTDIALOG_H
