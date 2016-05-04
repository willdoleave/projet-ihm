/********************************************************************************
** Form generated from reading UI file 'detaildialog.ui'
**
** Created by: Qt User Interface Compiler version 5.4.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DETAILDIALOG_H
#define UI_DETAILDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_detaildialog
{
public:
    QAction *actionSwitch_Image;
    QGridLayout *gridLayout;
    QWidget *widget;
    QGridLayout *gridLayout_4;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QGridLayout *gridLayout_3;
    QGridLayout *gridLayout_2;
    QLabel *titre_global;
    QLabel *titre_description;
    QLabel *titre_infos_bien;
    QLabel *parution_prix;
    QLabel *label;
    QLabel *id_etat;
    QLabel *description;
    QVBoxLayout *verticalLayout;
    QLabel *titre_adresse;
    QLabel *adresse;
    QLabel *titre_superficie;
    QLabel *superficie;
    QLabel *titre_pieces;
    QLabel *pieces;
    QLabel *titre_prix;
    QLabel *prix;
    QVBoxLayout *verticalLayout_5;
    QLabel *titre_nomprenom;
    QLabel *nom_prenom;
    QLabel *titre_telephone;
    QLabel *telephone;
    QLabel *titre_email;
    QLabel *email;
    QVBoxLayout *vertial_layout_photos;
    QLabel *photo_contractuelle;
    QHBoxLayout *photos_supplementaires;
    QListWidget *listWidget;
    QSpacerItem *horizontalSpacer;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QPushButton *bouton_vendre;

    void setupUi(QWidget *detaildialog)
    {
        if (detaildialog->objectName().isEmpty())
            detaildialog->setObjectName(QStringLiteral("detaildialog"));
        detaildialog->resize(906, 789);
        actionSwitch_Image = new QAction(detaildialog);
        actionSwitch_Image->setObjectName(QStringLiteral("actionSwitch_Image"));
        gridLayout = new QGridLayout(detaildialog);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        widget = new QWidget(detaildialog);
        widget->setObjectName(QStringLiteral("widget"));
        gridLayout_4 = new QGridLayout(widget);
        gridLayout_4->setObjectName(QStringLiteral("gridLayout_4"));
        scrollArea = new QScrollArea(widget);
        scrollArea->setObjectName(QStringLiteral("scrollArea"));
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QStringLiteral("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 852, 731));
        gridLayout_3 = new QGridLayout(scrollAreaWidgetContents);
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        gridLayout_2 = new QGridLayout();
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        titre_global = new QLabel(scrollAreaWidgetContents);
        titre_global->setObjectName(QStringLiteral("titre_global"));
        titre_global->setMaximumSize(QSize(16777215, 40));
        QFont font;
        font.setPointSize(22);
        font.setBold(true);
        font.setUnderline(true);
        font.setWeight(75);
        titre_global->setFont(font);
        titre_global->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(titre_global, 0, 0, 1, 2);

        titre_description = new QLabel(scrollAreaWidgetContents);
        titre_description->setObjectName(QStringLiteral("titre_description"));
        titre_description->setMinimumSize(QSize(0, 0));
        titre_description->setMaximumSize(QSize(16777215, 30));
        QFont font1;
        font1.setPointSize(14);
        font1.setBold(true);
        font1.setWeight(75);
        titre_description->setFont(font1);

        gridLayout_2->addWidget(titre_description, 3, 1, 1, 1);

        titre_infos_bien = new QLabel(scrollAreaWidgetContents);
        titre_infos_bien->setObjectName(QStringLiteral("titre_infos_bien"));
        titre_infos_bien->setMaximumSize(QSize(16777215, 30));
        titre_infos_bien->setFont(font1);

        gridLayout_2->addWidget(titre_infos_bien, 5, 1, 1, 1);

        parution_prix = new QLabel(scrollAreaWidgetContents);
        parution_prix->setObjectName(QStringLiteral("parution_prix"));
        parution_prix->setMaximumSize(QSize(16777215, 20));
        parution_prix->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(parution_prix, 2, 0, 1, 2);

        label = new QLabel(scrollAreaWidgetContents);
        label->setObjectName(QStringLiteral("label"));
        label->setMaximumSize(QSize(16777215, 30));
        label->setFont(font1);

        gridLayout_2->addWidget(label, 7, 1, 1, 1);

        id_etat = new QLabel(scrollAreaWidgetContents);
        id_etat->setObjectName(QStringLiteral("id_etat"));
        id_etat->setMaximumSize(QSize(16777215, 20));
        id_etat->setAlignment(Qt::AlignHCenter|Qt::AlignTop);

        gridLayout_2->addWidget(id_etat, 1, 0, 1, 2);

        description = new QLabel(scrollAreaWidgetContents);
        description->setObjectName(QStringLiteral("description"));
        description->setMaximumSize(QSize(350, 100));
        description->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        description->setWordWrap(true);

        gridLayout_2->addWidget(description, 4, 1, 1, 1);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        titre_adresse = new QLabel(scrollAreaWidgetContents);
        titre_adresse->setObjectName(QStringLiteral("titre_adresse"));
        titre_adresse->setMaximumSize(QSize(16777215, 20));
        QFont font2;
        font2.setBold(true);
        font2.setItalic(true);
        font2.setUnderline(true);
        font2.setWeight(75);
        titre_adresse->setFont(font2);
        titre_adresse->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);

        verticalLayout->addWidget(titre_adresse);

        adresse = new QLabel(scrollAreaWidgetContents);
        adresse->setObjectName(QStringLiteral("adresse"));
        adresse->setMaximumSize(QSize(300, 20));
        adresse->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        adresse->setWordWrap(true);

        verticalLayout->addWidget(adresse);

        titre_superficie = new QLabel(scrollAreaWidgetContents);
        titre_superficie->setObjectName(QStringLiteral("titre_superficie"));
        titre_superficie->setMaximumSize(QSize(16777215, 20));
        titre_superficie->setFont(font2);

        verticalLayout->addWidget(titre_superficie);

        superficie = new QLabel(scrollAreaWidgetContents);
        superficie->setObjectName(QStringLiteral("superficie"));
        superficie->setMaximumSize(QSize(16777215, 20));
        superficie->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);

        verticalLayout->addWidget(superficie);

        titre_pieces = new QLabel(scrollAreaWidgetContents);
        titre_pieces->setObjectName(QStringLiteral("titre_pieces"));
        titre_pieces->setMaximumSize(QSize(16777215, 20));
        titre_pieces->setFont(font2);

        verticalLayout->addWidget(titre_pieces);

        pieces = new QLabel(scrollAreaWidgetContents);
        pieces->setObjectName(QStringLiteral("pieces"));
        pieces->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);

        verticalLayout->addWidget(pieces);

        titre_prix = new QLabel(scrollAreaWidgetContents);
        titre_prix->setObjectName(QStringLiteral("titre_prix"));
        titre_prix->setFont(font2);

        verticalLayout->addWidget(titre_prix);

        prix = new QLabel(scrollAreaWidgetContents);
        prix->setObjectName(QStringLiteral("prix"));

        verticalLayout->addWidget(prix);


        gridLayout_2->addLayout(verticalLayout, 6, 1, 1, 1);

        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setObjectName(QStringLiteral("verticalLayout_5"));
        titre_nomprenom = new QLabel(scrollAreaWidgetContents);
        titre_nomprenom->setObjectName(QStringLiteral("titre_nomprenom"));
        titre_nomprenom->setMaximumSize(QSize(16777215, 30));
        titre_nomprenom->setFont(font2);
        titre_nomprenom->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);

        verticalLayout_5->addWidget(titre_nomprenom);

        nom_prenom = new QLabel(scrollAreaWidgetContents);
        nom_prenom->setObjectName(QStringLiteral("nom_prenom"));
        nom_prenom->setMaximumSize(QSize(16777215, 30));
        nom_prenom->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);

        verticalLayout_5->addWidget(nom_prenom);

        titre_telephone = new QLabel(scrollAreaWidgetContents);
        titre_telephone->setObjectName(QStringLiteral("titre_telephone"));
        titre_telephone->setMaximumSize(QSize(16777215, 30));
        titre_telephone->setFont(font2);
        titre_telephone->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);

        verticalLayout_5->addWidget(titre_telephone);

        telephone = new QLabel(scrollAreaWidgetContents);
        telephone->setObjectName(QStringLiteral("telephone"));
        telephone->setWordWrap(true);

        verticalLayout_5->addWidget(telephone);

        titre_email = new QLabel(scrollAreaWidgetContents);
        titre_email->setObjectName(QStringLiteral("titre_email"));
        titre_email->setFont(font2);

        verticalLayout_5->addWidget(titre_email);

        email = new QLabel(scrollAreaWidgetContents);
        email->setObjectName(QStringLiteral("email"));

        verticalLayout_5->addWidget(email);


        gridLayout_2->addLayout(verticalLayout_5, 8, 1, 1, 1);

        vertial_layout_photos = new QVBoxLayout();
        vertial_layout_photos->setObjectName(QStringLiteral("vertial_layout_photos"));
        photo_contractuelle = new QLabel(scrollAreaWidgetContents);
        photo_contractuelle->setObjectName(QStringLiteral("photo_contractuelle"));
        photo_contractuelle->setEnabled(true);
        photo_contractuelle->setAlignment(Qt::AlignCenter);

        vertial_layout_photos->addWidget(photo_contractuelle);

        photos_supplementaires = new QHBoxLayout();
        photos_supplementaires->setObjectName(QStringLiteral("photos_supplementaires"));

        vertial_layout_photos->addLayout(photos_supplementaires);


        gridLayout_2->addLayout(vertial_layout_photos, 3, 0, 6, 1);


        gridLayout_3->addLayout(gridLayout_2, 1, 0, 1, 1);

        listWidget = new QListWidget(scrollAreaWidgetContents);
        listWidget->setObjectName(QStringLiteral("listWidget"));
        listWidget->setFlow(QListView::LeftToRight);

        gridLayout_3->addWidget(listWidget, 2, 0, 1, 1);

        scrollArea->setWidget(scrollAreaWidgetContents);

        gridLayout_4->addWidget(scrollArea, 0, 0, 1, 1);


        gridLayout->addWidget(widget, 0, 0, 1, 4);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 1, 0, 1, 1);

        pushButton = new QPushButton(detaildialog);
        pushButton->setObjectName(QStringLiteral("pushButton"));

        gridLayout->addWidget(pushButton, 1, 3, 1, 1);

        pushButton_2 = new QPushButton(detaildialog);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));

        gridLayout->addWidget(pushButton_2, 1, 2, 1, 1);

        bouton_vendre = new QPushButton(detaildialog);
        bouton_vendre->setObjectName(QStringLiteral("bouton_vendre"));
        bouton_vendre->setStyleSheet(QStringLiteral("background-color:orange"));

        gridLayout->addWidget(bouton_vendre, 1, 1, 1, 1);


        retranslateUi(detaildialog);

        QMetaObject::connectSlotsByName(detaildialog);
    } // setupUi

    void retranslateUi(QWidget *detaildialog)
    {
        detaildialog->setWindowTitle(QApplication::translate("detaildialog", "Form", 0));
        actionSwitch_Image->setText(QApplication::translate("detaildialog", "Switch_Image", 0));
        titre_global->setText(QApplication::translate("detaildialog", "Titre de la photo", 0));
        titre_description->setText(QApplication::translate("detaildialog", "Description", 0));
        titre_infos_bien->setText(QApplication::translate("detaildialog", "Informations du bien", 0));
        parution_prix->setText(QApplication::translate("detaildialog", "Parution : 01/01/2016 - Prix : 400 000\342\202\254", 0));
        label->setText(QApplication::translate("detaildialog", "Informations Contact", 0));
        id_etat->setText(QApplication::translate("detaildialog", "id : 1505031006- En Location", 0));
        description->setText(QApplication::translate("detaildialog", "Texte description", 0));
        titre_adresse->setText(QApplication::translate("detaildialog", "Adresse :", 0));
        adresse->setText(QApplication::translate("detaildialog", "Adresse, code Postal, ville", 0));
        titre_superficie->setText(QApplication::translate("detaildialog", "Superficie :", 0));
        superficie->setText(QApplication::translate("detaildialog", "1000m2", 0));
        titre_pieces->setText(QApplication::translate("detaildialog", "Nombre de pi\303\250ces :", 0));
        pieces->setText(QApplication::translate("detaildialog", "10 pi\303\250ces", 0));
        titre_prix->setText(QApplication::translate("detaildialog", "Prix :", 0));
        prix->setText(QApplication::translate("detaildialog", "400 000\342\202\254", 0));
        titre_nomprenom->setText(QApplication::translate("detaildialog", "Nom, Pr\303\251nom :", 0));
        nom_prenom->setText(QApplication::translate("detaildialog", "Nom pr\303\251nom", 0));
        titre_telephone->setText(QApplication::translate("detaildialog", "T\303\251l\303\251phone :", 0));
        telephone->setText(QApplication::translate("detaildialog", "telephone", 0));
        titre_email->setText(QApplication::translate("detaildialog", "Email :", 0));
        email->setText(QApplication::translate("detaildialog", "email", 0));
        photo_contractuelle->setText(QApplication::translate("detaildialog", "Photo contractuelle", 0));
        pushButton->setText(QApplication::translate("detaildialog", "Ok", 0));
        pushButton_2->setText(QApplication::translate("detaildialog", "Modifier", 0));
        bouton_vendre->setText(QApplication::translate("detaildialog", "Vendre", 0));
    } // retranslateUi

};

namespace Ui {
    class detaildialog: public Ui_detaildialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DETAILDIALOG_H
