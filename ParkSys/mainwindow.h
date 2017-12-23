#ifndef MAINWINDOW_H
#define MAINWINDOW_H

//主菜单

#include <QMainWindow>
#include"information.h"
#include"vehiclemanage.h"
#include"viplogin.h"
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

    void on_VehMana_clicked();
    void on_pushButton_clicked();
    void on_LogVip_clicked();


private:
    Ui::MainWindow *ui;
    Information *inf;
    VehicleManage *vehm;
    VipLogin *viplog;
};

#endif // MAINWINDOW_H
