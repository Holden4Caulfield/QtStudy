#include "dialog2.h"
#include "ui_dialog2.h"
#include"car.h"
#include"mainwindow.h"
Dialog2::Dialog2(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog2)
{
    ui->setupUi(this);
}

Dialog2::~Dialog2()
{
    delete ui;
}
void Dialog2::on_pushButton_clicked()
{
    this->close();
    parentWidget()->show();
}

void Dialog2::on_ok_clicked()
{
    QString s,st;
    s=ui->idText->text();
    st=ui->lineEdit->text();
    int l;l=st.toInt();
    car bc;
    bc.ID=s;bc.l=l;
    emit sendData(bc);               //获取lineEdit的输入并且传递出去

}
