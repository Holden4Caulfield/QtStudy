#ifndef VIPLOGIN_H
#define VIPLOGIN_H

#include <QMainWindow>

namespace Ui {
class VipLogin;
}

class VipLogin : public QMainWindow
{
    Q_OBJECT

public:
    explicit VipLogin(QWidget *parent = 0);
    ~VipLogin();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

private:
    Ui::VipLogin *ui;
};

#endif // VIPLOGIN_H
