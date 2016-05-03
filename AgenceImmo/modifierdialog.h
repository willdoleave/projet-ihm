#ifndef MODIFIERDIALOG_H
#define MODIFIERDIALOG_H

#include <QWidget>

namespace Ui {
class modifierdialog;
}

class modifierdialog : public QWidget
{
    Q_OBJECT

public:
    explicit modifierdialog(QWidget *parent = 0);
    ~modifierdialog();

private:
    Ui::modifierdialog *ui;
};

#endif // MODIFIERDIALOG_H
