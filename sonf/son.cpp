#include "son.h"
#include "ui_son.h"
#include"mainwindow.h"
son::son(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::son)
{
    ui->setupUi(this);
}

son::~son()
{
    delete ui;
}

void son::on_pushButton_clicked()
{
   /*MainWindow *m=(MainWindow *)parentWidget();
    QString s;
    s=ui->lineEdit->text();
    m->input(s);*/
}

void son::on_pushButton_2_clicked()
{
    Achl *anewchil=new Achl(this);
    anewchil->show();
}

void son::input_s(QString s)
{
    MainWindow *m=(MainWindow *)parentWidget();
   // QString sd;
   // sd=ui->lineEdit->text();
    m->input(s);
}
