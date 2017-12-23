#include "logindialog.h"
#include "ui_logindialog.h"
#include<QMessageBox>
LoginDialog::LoginDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::LoginDialog)
{
    ui->setupUi(this);
}

LoginDialog::~LoginDialog()
{
    delete ui;
}

void LoginDialog::on_loginBtn_clicked()
{
    // 判断用户名和密码是否正确，
        // 如果错误则弹出警告对话框
        if(ui->usrLineEdit->text() == tr("") &&
               ui->pwdLineEdit->text() == tr(""))
        {
           accept();
        }
        else {
           QMessageBox::warning(this,"警告","...0",QMessageBox::Yes);
        }
}

void LoginDialog::on_exitBtn_clicked()
{
    this->close();
}
