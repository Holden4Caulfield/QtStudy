#ifndef CARTODEQUE_H
#define CARTODEQUE_H

#include"head.h"
#include <QMainWindow>

//车辆排队

namespace Ui {
class CarToDeque;
}

class CarToDeque : public QMainWindow
{
    Q_OBJECT

public:
    explicit CarToDeque(QWidget *parent = 0);
    ~CarToDeque();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

private:
    Ui::CarToDeque *ui;
};

#endif // CARTODEQUE_H
