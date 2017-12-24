#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include"son.h"
#include"head.h"
#include <QMainWindow>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();
    QList<Car>List;

private slots:
    void on_pushButton_clicked();
    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();
    void jia();

    void on_pushButton_4_clicked();

public:
    void input(QString s);

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
