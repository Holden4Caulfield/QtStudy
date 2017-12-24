#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include"child.h"
#include <QMainWindow>
#include"car.h"
namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();
    Link List;

private slots:
    void on_pushButton_clicked();
     //void receiveData(Node *e);

     void on_pushButton_2_clicked();

private:
    Ui::MainWindow *ui;
    child *cld;
};

#endif // MAINWINDOW_H
