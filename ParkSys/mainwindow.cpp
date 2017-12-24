#include "mainwindow.h"
#include "ui_mainwindow.h"
#include"information.h"
#include<iterator>
#include"vehiclemanage.h"
#include"viplogin.h"
#include"time.h"
MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_InforSearch_clicked()
{
    Information *inf=new Information(this);
    inf->show();
    this->hide();
}

void MainWindow::on_VehMana_clicked()
{
    VehicleManage *vehm=new VehicleManage(this);
    vehm->show();
    this->hide();
}

void MainWindow::on_pushButton_clicked()
{
    this->close();
}

void MainWindow::on_LogVip_clicked()
{
    VipLogin *viplog=new VipLogin(this);
    viplog->show();
    this->hide();
}

void MainWindow::car_to_deque(QString s, int location)
{
    //车辆进入对列
    Car anewcar;
    anewcar.ID=s;
    time_t timep;
    time(&timep);
    localtime_s(&anewcar.indeque, &timep);
    anewcar.dir=location;
    if(location)
    {
        this->In_deque_north.append(anewcar);
    }
    else
    {
        this->In_deque_south.append(anewcar);
    }
}

void MainWindow::car_left_deque(QString s, int location)
{
    if(!location)
    {
        QList<Car>::iterator iter;
        int i=0;
        iter=In_deque_south.begin();
        for(;iter!=In_deque_south.end();iter++,i++)
        {
            if(iter->ID==s)In_deque_south.removeAt(i);
        }
    }

    else
    {
        QList<Car>::iterator iter;
        int i=0;
        iter=In_deque_north.begin();
        for(;iter!=In_deque_north.end();iter++,i++)
        {
            if(iter->ID==s)In_deque_north.removeAt(i);
        }
    }
}

void MainWindow::on_pushButton_2_clicked()
{
    QList<Car>::iterator iter;
    int i=0,l=0;
    iter=In_deque_north.begin();
    for(;iter!=In_deque_north.end();iter++,i++)
    {
    }
    QList<Car>::iterator iter2;
    iter2=In_deque_south.begin();
    for(;iter2!=In_deque_south.end();iter2++,l++)
    {
    }
    QString nor=QString::number(i,10);
    QString sou=QString::number(l,10);
    ui->label_6->setText(sou);ui->label_7->setText(nor);
}
