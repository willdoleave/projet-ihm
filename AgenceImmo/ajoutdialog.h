#ifndef AJOUTDIALOG_H
#define AJOUTDIALOG_H

#include <QWidget>

namespace Ui {
class ajoutDialog;
}

class ajoutDialog : public QWidget
{
    Q_OBJECT

public:
    explicit ajoutDialog(QWidget *parent = 0);
    ~ajoutDialog();

private:
    Ui::ajoutDialog *ui;
};

#endif // AJOUTDIALOG_H
