#ifndef SEARCHTIME_H
#define SEARCHTIME_H

#include"head.h"
#include <QMainWindow>

namespace Ui {
class SearchTime;
}

class SearchTime : public QMainWindow
{
    Q_OBJECT

public:
    explicit SearchTime(QWidget *parent = 0);
    ~SearchTime();

private slots:
    void on_pushButton_clicked();

private:
    Ui::SearchTime *ui;
};

#endif // SEARCHTIME_H
