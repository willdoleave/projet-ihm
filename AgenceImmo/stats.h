#ifndef STATS_H
#define STATS_H

#include <QWidget>
#include <QDialog>

namespace Ui {
class Stats;
}

class Stats : public QDialog
{
    Q_OBJECT

public:
    explicit Stats(QWidget *parent = 0);
    ~Stats();

    void calcul();

    int en_vente, vendu, en_location, loue;

private slots:
    void on_pushButton_clicked();

private:
    Ui::Stats *ui;
};

#endif // STATS_H
