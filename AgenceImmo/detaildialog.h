#ifndef DETAILDIALOG_H
#define DETAILDIALOG_H

#include <QWidget>
#include <QDialog>

namespace Ui {
class detaildialog;
}

class detaildialog : public QDialog
{
    Q_OBJECT

public:
    explicit detaildialog(QWidget *parent = 0);
    ~detaildialog();

private:
    Ui::detaildialog *ui;
};

#endif // DETAILDIALOG_H
