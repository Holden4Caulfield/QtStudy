#include "outputmessage.h"
#include "ui_outputmessage.h"
#include"mainwindow.h"
#include<iterator>
OutputMessage::OutputMessage(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::OutputMessage)
{
    ui->setupUi(this);
}

OutputMessage::~OutputMessage()
{
    delete ui;
}

void OutputMessage::on_pushButton_2_clicked()
{
    MainWindow *m=(MainWindow *)parentWidget();
    if(m->In_Park_Now.isEmpty()){ui->textEdit->setText("no car now");}
    else
    {
    QList<Car>::iterator iter2;
    iter2=m->In_Park_Now.begin();
    for(;iter2!=m->In_Park_Now.end();iter2++)
    {
        QString l=QString::number(iter2->locate,10);
        ui->textEdit->append(iter2->ID+"  location :"+l);
    }
    }
    if(m->In_Park_History.isEmpty()){ui->textEdit_2->setText("no car in history");}
    QList<Car>::iterator iter3;
    iter3=m->In_Park_History.begin();
    for(;iter3!=m->In_Park_History.end();iter3++)
    {
        QString l=QString::number(iter3->locate,10);
        ui->textEdit_2->append(iter3->ID+"  location :"+l);
    }
}

void OutputMessage::on_pushButton_clicked()
{
    this->close();
}
