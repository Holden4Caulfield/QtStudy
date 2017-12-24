#ifndef CARLEFTDEQUE_H
#define CARLEFTDEQUE_H

#include"head.h"
#include <QMainWindow>

//车辆离开排队

namespace Ui {
class CarLeftDeque;
}

class CarLeftDeque : public QMainWindow
{
    Q_OBJECT

public:
    explicit CarLeftDeque(QWidget *parent = 0);
    ~CarLeftDeque();
    void car_left_deque_s(QString s,int location);

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

private:
    Ui::CarLeftDeque *ui;
};

#endif // CARLEFTDEQUE_H
