#include"goble.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    //s="hahah";
    ui->label->setText(s);
}

MainWindow::~MainWindow()
{
    delete ui;
}
