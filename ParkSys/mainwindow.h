#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include"head.h"
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
    QList<Car>In_deque_north;
    QList<Car>In_deque_south;
    QList<Car>In_Park_Now;
    QList<Car>In_Park_History;
    QList<Car>In_Park_up;
    QList<Car>In_Park_dowm;
    int south_deque;
    int north_deque;
    void car_to_deque(QString s,int location);
    void car_left_deque(QString s,int location);
    void car_to_Park(QString s,int location);
    void car_left_Park(QString s);
    void Update_infor();
    int up_full();
    int up_car=0;
    int car_now=0;
    bool cin_wrong(QString s);

private slots:
    void on_InforSearch_clicked();

    void on_VehMana_clicked();
    void on_pushButton_clicked();
    void on_LogVip_clicked();


    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
