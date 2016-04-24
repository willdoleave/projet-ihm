#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <recherchedialog.h>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:
    void on_actionImporter_triggered();

    void on_action_propos_triggered();

    void on_actionRecherche_triggered();

private:
    Ui::MainWindow *ui;
    rechercheDialog recherche_dialog;
};

#endif // MAINWINDOW_H
