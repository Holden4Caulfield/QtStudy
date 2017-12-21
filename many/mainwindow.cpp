#include "mainwindow.h"
#include "ui_mainwindow.h"
#include<iterator>
MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    d1=new Dialog1(this);
    d2=new Dialog2(this);
    connect(d2, SIGNAL(sendData(car)), this, SLOT(receiveData(car)));
}

MainWindow::~MainWindow()
{
    delete ui;
}
void MainWindow::on_dia1_clicked()
{
    //d1=new Dialog1(this);
    d1->show();
    this->hide();
}
void MainWindow::on_pushButton_clicked()
{
    //d2=new Dialog2(this);
    d2->show();
    this->hide();
}

void MainWindow::on_pushButton_2_clicked()
{
    ui->textEdit->clear();
    QList<car>::iterator iter;
    iter=Link.begin();
    for(;iter!=Link.end();iter++)
    {
        QString s=iter->ID;
        ui->textEdit->append(s);
    }
}

void MainWindow::receiveData(car data)
{
    Link.append(data);
   // ui->textEdit->setText(data);
}
