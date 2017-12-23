#include "cartodeque.h"
#include "ui_cartodeque.h"

CarToDeque::CarToDeque(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::CarToDeque)
{
    ui->setupUi(this);
}

CarToDeque::~CarToDeque()
{
    delete ui;
}
