#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include"dialog.h"
#include"increase.h"
#include <QMainWindow>
#include"car.h"
namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();
    QList<car>Link;

private slots:
    void on_pushButton_clicked();

    void on_it_clicked();

    //void on_increase_clicked();

private:
    Ui::MainWindow *ui;
    Dialog dlg;
    Increase icea;
};

#endif // MAINWINDOW_H
