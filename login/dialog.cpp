#include "dialog.h"
#include "ui_dialog.h"
#include<QMessageBox>
Dialog::Dialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog)
{
    ui->setupUi(this);
}

Dialog::~Dialog()
{
    delete ui;
}

void Dialog::on_loginBtn_clicked()
{
    // 判断用户名和密码是否正确，
        // 如果错误则弹出警告对话框
        if(ui->usrLineEdit->text() == tr("feng") &&
               ui->pwdLineEdit->text() == tr("123456"))
        {
           accept();
        } else
        {
           QMessageBox::warning(this,"警告","用户名或密码错误",QMessageBox::Yes);
        }
}
