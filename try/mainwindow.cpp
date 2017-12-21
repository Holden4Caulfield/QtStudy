#include "mainwindow.h"
#include "ui_mainwindow.h"
//#include"dialog.h"
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
    //dlg=new Dialog(this);
    //dlg->show();
    dlg.show();
    this->hide();
}

void MainWindow::on_it_clicked()
{
    ui->textEdit->clear();
    QList<car>::iterator i;
    i=Link.begin();
    for(;i!=Link.end();i++)
    {
       QString s=i->ID;
       // QString s=QString::number(n,10);
        ui->textEdit->append(s);
    }
}

//void MainWindow::on_increase_clicked()
//{
   // icea.show();
   // this->hide();
//}
