#include "mainwindow.h"
#include "ui_mainwindow.h"
#include"dialog.h"
MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    //QObject::connect(ui->pushButton,SIGNAL(click()),dlg,SLOT(show()));
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_clicked()
{
    dlg.show();
}
