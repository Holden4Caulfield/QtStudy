#ifndef LAST_H
#define LAST_H

#include <QMainWindow>

namespace Ui {
class Last;
}

class Last : public QMainWindow
{
    Q_OBJECT

public:
    explicit Last(QWidget *parent = 0);
    ~Last();

private:
    Ui::Last *ui;
};

#endif // LAST_H
