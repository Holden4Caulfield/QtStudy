#ifndef CARTODEQUE_H
#define CARTODEQUE_H

#include <QMainWindow>

namespace Ui {
class CarToDeque;
}

class CarToDeque : public QMainWindow
{
    Q_OBJECT

public:
    explicit CarToDeque(QWidget *parent = 0);
    ~CarToDeque();

private:
    Ui::CarToDeque *ui;
};

#endif // CARTODEQUE_H
