#ifndef RECHERCHEDIALOG_H
#define RECHERCHEDIALOG_H

#include <QWidget>

namespace Ui {
class rechercheDialog;
}

class rechercheDialog : public QWidget
{
    Q_OBJECT

public:
    explicit rechercheDialog(QWidget *parent = 0);
    ~rechercheDialog();

private slots:
    void on_pushButton_2_clicked();

private:
    Ui::rechercheDialog *ui;
};

#endif // RECHERCHEDIALOG_H
