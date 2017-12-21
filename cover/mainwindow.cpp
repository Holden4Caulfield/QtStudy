#include "mainwindow.h"
#include "ui_mainwindow.h"
#include"dialog.h"
MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
       //信号槽方式下父子窗体传值的测试
       Dialog *dlg = new Dialog;
       //关联信号和槽函数
       connect(dlg,SIGNAL(sendData(QString)),this,SLOT(receiveData(QString)));
      // dlg->setModal(true); 不论是模态或者非模态都可以正常传值
       dlg->show();
}

MainWindow::~MainWindow()
{
    delete ui;
}
void MainWindow::receiveData(QString data)
{
    ui->textEdit->setText(data);
}
