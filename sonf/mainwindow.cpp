#include "mainwindow.h"
#include "ui_mainwindow.h"
#include"son.h"
#include<iterator>
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
       this->List.append(bwm);
}

void MainWindow::on_pushButton_2_clicked()
{
        ui->textEdit->clear();
        QList<Car>::iterator iter;
        iter=List.begin();
        for(;iter!=List.end();iter++)
        {
            QString s=iter->ID;
            ui->textEdit->append(s);
        }
}

void MainWindow::on_pushButton_3_clicked()
{
    QList<Car>::iterator iter;
    int i=0;
    iter=List.begin();
    for(;iter!=List.end();iter++,i++)
    {
        if(iter->ID=="123")List.removeAt(i);
    }
}
