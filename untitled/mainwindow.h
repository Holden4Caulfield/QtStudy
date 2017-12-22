#ifndef MAINWINDOW_H
#define MAINWINDOW_H
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
    QList<Car>List;
    Link L;
    void In(Link &L,Car bwm);

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
