#ifndef INCREASE_H
#define INCREASE_H

#include <QDialog>

namespace Ui {
class Increase;
}

class Increase : public QDialog
{
    Q_OBJECT

public:
    explicit Increase(QWidget *parent = 0);
    ~Increase();

private:
    Ui::Increase *ui;
};

#endif // INCREASE_H
