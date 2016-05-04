#ifndef AJOUTDIALOG_H
#define AJOUTDIALOG_H

#include <QWidget>
#include <QDialog>
#include "xml_dom.h"

namespace Ui {
class ajoutDialog;
}

class ajoutDialog : public QDialog
{
    Q_OBJECT

public:
    explicit ajoutDialog(QWidget *parent = 0);
    ajoutDialog(QWidget *parent, Annonce *a);
    ~ajoutDialog();
    QString filephoto1, photo1;
    QList<QString> cheminPhoto;
    QList<QString> filePhoto;
    Annonce a;
    bool ajout;
    QString id_new;

private slots:
    void on_pushButton_2_clicked();

    void on_pushButton_clicked();

    void on_upload_image1_clicked();

    void on_upload_image2_clicked();


private:
    Ui::ajoutDialog *ui;
};

#endif // AJOUTDIALOG_H
