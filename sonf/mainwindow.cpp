#include "mainwindow.h"
#include "ui_mainwindow.h"
#include"son.h"
#include<iterator>
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

void MainWindow::on_pushButton_clicked()
{
    son *s=new son(this);
    s->show();

}
void MainWindow::input(QString s)
{
       Car bwm;
       bwm.ID=s;
       time_t timep;
       time(&timep);
       localtime_s(&bwm.indeque, &timep);
       this->List.append(bwm);
}

void MainWindow::on_pushButton_2_clicked()
{
        ui->textEdit->clear();
        QList<Car>::iterator iter;
        iter=List.begin();
        for(;iter!=List.end();iter++)
        {
            //QString s=iter->ID;
            int i=iter->indeque.tm_hour;
            QString s=QString::number(i,10);
            ui->textEdit->append(iter->ID+" "+iter->locate);
        }
}

void MainWindow::on_pushButton_3_clicked()
{
    QList<Car>::iterator iter;
    int i=0;
    iter=List.begin();
    for(;iter!=List.end();iter++,i++)
    {
        if(iter->ID=="456")List.removeAt(i);
    }
}

void MainWindow::jia()
{
    Car ak;
    ak.ID="lik";
    List.append(ak);
}

void MainWindow::on_pushButton_4_clicked()
{
    jia();
}
