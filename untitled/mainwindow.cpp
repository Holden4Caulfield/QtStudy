#include "mainwindow.h"
#include "ui_mainwindow.h"
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
    QList<Car>::iterator iter;
    iter=List.begin();
    for(;iter!=List.end();iter++)
    {
        QString s=iter->ID;
        ui->textEdit->append(s);
    }
}

void MainWindow::In(Link &L, Car bwm)
{
    Node *p=new Node;
    p->car.ID=bwm.ID;
    Link li=L;
    li=p;
   // L=p;
    p=NULL;
    delete p;
}

void MainWindow::on_pushButton_2_clicked()
{

    ui->textEdit_2->append(L->car.ID);
}
