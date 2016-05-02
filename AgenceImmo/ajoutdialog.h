#ifndef AJOUTDIALOG_H
#define AJOUTDIALOG_H

#include <QWidget>
#include <QDialog>

namespace Ui {
class ajoutDialog;
}

class ajoutDialog : public QDialog
{
    Q_OBJECT

public:
    explicit ajoutDialog(QWidget *parent = 0);
    ~ajoutDialog();
    QString photo1, filephoto1;
    QString photo2, filephoto2;
    QString photo3, filephoto3;
    QString photo4, filephoto4;

private slots:
    void on_pushButton_2_clicked();

    void on_pushButton_clicked();

    void on_upload_image1_clicked();

    void on_upload_image2_clicked();

    void on_upload_image3_clicked();

    void on_upload_image4_clicked();

private:
    Ui::ajoutDialog *ui;
};

#endif // AJOUTDIALOG_H
