#include "mainwindow.h"
#include "ui_mainwindow.h"
#include"information.h"
#include<iterator>
#include"vehiclemanage.h"
#include"viplogin.h"
#include"outputmessage.h"
#include"time.h"
#include<QMessageBox>
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
    if(cin_wrong(s))
    {
        QMessageBox::about(this,"sorry","please confirm ID");
    }
    else {
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
    QMessageBox::about(this,"OK","the car has into deque");
    }
    this->show();
}

void MainWindow::car_left_deque(QString s, int location)
{
    if(!cin_wrong(s))
    {
        QMessageBox::about(this,"sorry","please confirm ID");
    }
   else
    {   if(!location)
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
        QMessageBox::about(this,"ok","car has left deque");
    }
    this->show();
}

void MainWindow::on_pushButton_2_clicked()
{
    Update_infor();
}

void MainWindow::car_to_Park(QString s, int location)
{
    Car anewcar;
    anewcar.ID=s;
    time_t timep;
    time(&timep);
    localtime_s(&anewcar.start, &timep);
    anewcar.indeque.tm_year=0;anewcar.indeque.tm_mon=0;anewcar.indeque.tm_mday=0;
    anewcar.dir=location;
    anewcar.locate=Set_distri();
    jud[Set_distri()]=true;
    if(cin_wrong(s))
    {
        QMessageBox::about(this,"sorry","please");
    }
    else{
        In_Park_Now.append(anewcar); car_now++;
        if(up_full())
         {
        In_Park_dowm.append(anewcar);
         }
         else
        {
        In_Park_up.append(anewcar);up_car++;
        }
        QMessageBox::about(this,"ok","car has into park");

    }

    this->show();
}

int MainWindow::up_full()
{
    if(up_car==4)return 1;
    else return 0;
}

void MainWindow::car_left_Park(QString s)
{
       int tap=1;
       if(In_Park_Now.isEmpty()){tap=1;}
      else
       {
         QList<Car>::iterator iter;
        int i=0;int j;
        iter=In_Park_Now.begin();
        for(;iter!=In_Park_Now.end();iter++,i++)
        {
            if(iter->ID==s)
            {
            In_Park_History.append(In_Park_Now.at(i));
            j=iter->locate;In_Park_Now.removeAt(i);
            car_now=car_now-1;
            jud[j]=false;
            tap=0;
            }
        }
       }
        /*if(j<4)
        {
            QList<Car>::iterator iter2;
            iter2=In_Park_up.begin();int i=0;
            for(;iter2!=In_Park_up.end();iter2++,i++)
            {
                if(iter2->ID==s){this->up_car--;In_Park_Now.removeAt(i);}
            }
        }
        else
        {
            QList<Car>::iterator iter2;
            iter2=In_Park_dowm.begin();int i=0;
            for(;iter2!=In_Park_dowm.end();iter2++,i++)
            {
                if(iter2->ID==s){In_Park_dowm.removeAt(i);}
            }
        }
       }*/
        if(tap)QMessageBox::about(this,"sorry","The car may not in the park");
        else{QMessageBox::about(this,"OK","The car has go out");}
        this->show();
}

bool MainWindow::cin_wrong(QString s)
{
    int tap=1;
    QList<Car>::iterator iter;iter=In_Park_Now.begin();
    for(;iter!=In_Park_Now.end();iter++)
    {
        if(iter->ID==s){
        tap=0;
        }
    }
    QList<Car>::iterator iter2;iter2=In_deque_north.begin();
    for(;iter2!=In_deque_north.end();iter2++)
    {
        if(iter2->ID==s){
        tap=0;
        }
    }
    QList<Car>::iterator iter3;iter3=In_deque_south.begin();
    for(;iter3!=In_deque_south.end();iter3++)
    {
        if(iter3->ID==s){
        tap=0;
        }
    }
    if(tap==0)return true;
    else return false;

}

void MainWindow::on_pushButton_3_clicked()
{

    if(In_deque_north.isEmpty()&&In_deque_south.isEmpty())
    {
        QMessageBox::about(this,"SOrRy","you are wrong");
        this->show();
    }
   if(In_deque_north.isEmpty()&&!In_deque_south.isEmpty())
    {
        car_now++;
        time_t timep;
        time(&timep);
        localtime_s(&In_deque_south.first().start, &timep);
        In_deque_south.first().locate=Set_distri();
        In_Park_Now.append(In_deque_south.first());       
        if(up_full()){In_Park_dowm.append(In_deque_south.first());}
        else{In_Park_up.append(In_deque_south.first());up_car++;}
        In_deque_south.removeFirst();
    }
    else if(In_deque_south.isEmpty()&&!In_deque_north.empty())
    {
        car_now++;
        time_t timep;
        time(&timep);
        localtime_s(&In_deque_north.first().start, &timep);
        In_deque_north.first().locate=Set_distri();
        In_Park_Now.append(In_deque_north.first());
        if(up_full()){In_Park_dowm.append(In_deque_north.first());}
        else{In_Park_up.append(In_deque_north.first());up_car++;}
        In_deque_north.removeFirst();
    }
    if(!(In_deque_north.isEmpty())&&(!(In_deque_south.isEmpty())))
    {
         car_now++;
        if (!difftime(mktime(&In_deque_south.first().indeque), mktime(&In_deque_north.first().indeque)))
            {

                //设置时间
                time_t timep;
                time(&timep);
                localtime_s(&In_deque_north.first().start, &timep);
                In_deque_north.first().locate=Set_distri();
                In_Park_Now.append(In_deque_north.first());
                if(up_full()){In_Park_dowm.append(In_deque_north.first());}
                else{In_Park_up.append(In_deque_north.first());up_car++;}
                In_deque_north.removeFirst();
            }
            else
            {
            time_t timep;
            time(&timep);
            localtime_s(&In_deque_south.first().start, &timep);
            In_deque_south.first().locate=Set_distri();
            In_Park_Now.append(In_deque_south.first());
            if(up_full()){In_Park_dowm.append(In_deque_south.first());}
            else{In_Park_up.append(In_deque_south.first());up_car++;}
            In_deque_south.removeFirst();
            }
    }
    Update_infor();
}

void MainWindow::Update_infor()
{
    //更新信息
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
    QString nowcar=QString::number(car_now,10);
    ui->label_2->setText(nowcar);
    QString upc=QString::number(up_car,10);
    ui->label_9->setText(upc);
}

int MainWindow::Set_distri()
{
    //设置车位
    int i=0;
    while(jud[i])
    {
        i++;
    }
    return i;
}

void MainWindow::on_pushButton_4_clicked()
{
    OutputMessage *otpmes=new OutputMessage(this);
    otpmes->show();
}
