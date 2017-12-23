#ifndef VEHICLEMANAGE_H
#define VEHICLEMANAGE_H

#include <QMainWindow>

namespace Ui {
class VehicleManage;
}

class VehicleManage : public QMainWindow
{
    Q_OBJECT

public:
    explicit VehicleManage(QWidget *parent = 0);
    ~VehicleManage();

private slots:
    void on_pushButton_clicked();

private:
    Ui::VehicleManage *ui;
};

#endif // VEHICLEMANAGE_H
