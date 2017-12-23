#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include"information.h"
//#include"searchtime.h"
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
    void on_InforSearch_clicked();

private:
    Ui::MainWindow *ui;
    Information *inf;
};

#endif // MAINWINDOW_H
