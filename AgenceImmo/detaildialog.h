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

private:
    Ui::detaildialog *ui;
};

#endif // DETAILDIALOG_H