#include "child.h"
#include "ui_child.h"
#include"car.h"
child::child(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::child)
{
    ui->setupUi(this);
}

child::~child()
{
    delete ui;
}

void child::on_pushButton_clicked()
{
  /*  Node *e;
    e=new Node;
    e->bwm.ID=ui->lineEdit->text();
    //emit sendData(*e);
    e=NULL;
    delete e;*/
}
