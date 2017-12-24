#include "mainwindow.h"
#include "ui_mainwindow.h"
#include"car.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    cld=new child(this);
    //connect(cld, SIGNAL(sendData(Node)), this, SLOT(receiveData(Node)));
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_clicked()
{
    Link l=this->List;
    l=l->next;
    while(l)
    {
        ui->textEdit->append(l->bwm.ID);
        l=l->next;
    }

}
/*void MainWindow::receiveData(Node *e)
{
    Link l=this->List->next;
    while(l)l=l->next;
    l->next=e;
}*/

void MainWindow::on_pushButton_2_clicked()
{
    cld->show();
}
