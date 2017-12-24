#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include"dialog1.h"
#include"dialog2.h"
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
    //QList<car>Link;
    Link List;

private slots:
    void on_dia1_clicked();

    void on_pushButton_clicked();

    void on_pushButton_2_clicked();
    void receiveData(car data);   //接收传递过来的数据的槽

private:
    Ui::MainWindow *ui;
    Dialog1 *d1;
    Dialog2 *d2;
   // QList<car>Link;
};

#endif // MAINWINDOW_H
