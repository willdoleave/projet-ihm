#ifndef DETAILDIALOG_H
#define DETAILDIALOG_H

#include <QWidget>
#include <QDialog>
#include "xml_dom.h"

namespace Ui {
class detaildialog;
}

class detaildialog : public QDialog
{
    Q_OBJECT

public:
    explicit detaildialog(QWidget *parent = 0);
    explicit detaildialog(QWidget *parent = 0, Annonce *a = 0);
    ~detaildialog();

    Annonce a;

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_bouton_vendre_clicked();

    void on_actionSwitch_Image_triggered();

private:
    Ui::detaildialog *ui;
};

#endif // DETAILDIALOG_H
