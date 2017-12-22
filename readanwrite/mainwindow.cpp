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
    ui->textEdit->clear();
    /*QList<Car>::iterator iter;
    iter=List.begin();
    for(;iter!=List.end();iter++)
    {
        ui->textEdit->append(iter->ID);
    }*/
    Link l=this->park->next;
    while(l)
    {
        ui->textEdit->append(l->car.ID);
        l=l->next;
    }
}
