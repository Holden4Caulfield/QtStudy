#ifndef VEHICLEMANAGE_H
#define VEHICLEMANAGE_H

#include"head.h"
#include <QMainWindow>
#include"cartodeque.h"
#include"cartopark.h"
#include"carleftdeque.h"
#include"carleftpark.h"
namespace Ui {
class VehicleManage;
}

class VehicleManage : public QMainWindow
{
    Q_OBJECT

public:
    explicit VehicleManage(QWidget *parent = 0);
    ~VehicleManage();
    void car_to_deque_c(QString s, int location);
    void car_left_deque_c(QString s, int location);


private slots:
    void on_pushButton_clicked();

    void on_cartoD_clicked();

    void on_carleftD_clicked();

    void on_cartoP_clicked();

    void on_carleftP_clicked();

private:
    Ui::VehicleManage *ui;
};

#endif // VEHICLEMANAGE_H
