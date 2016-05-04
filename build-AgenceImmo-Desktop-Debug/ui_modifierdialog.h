/********************************************************************************
** Form generated from reading UI file 'modifierdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.4.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MODIFIERDIALOG_H
#define UI_MODIFIERDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_modifierdialog
{
public:
    QGridLayout *gridLayout_2;

    void setupUi(QWidget *modifierdialog)
    {
        if (modifierdialog->objectName().isEmpty())
            modifierdialog->setObjectName(QStringLiteral("modifierdialog"));
        modifierdialog->resize(615, 502);
        gridLayout_2 = new QGridLayout(modifierdialog);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));

        retranslateUi(modifierdialog);

        QMetaObject::connectSlotsByName(modifierdialog);
    } // setupUi

    void retranslateUi(QWidget *modifierdialog)
    {
        modifierdialog->setWindowTitle(QApplication::translate("modifierdialog", "Form", 0));
    } // retranslateUi

};

namespace Ui {
    class modifierdialog: public Ui_modifierdialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MODIFIERDIALOG_H
