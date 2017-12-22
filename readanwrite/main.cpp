#include "mainwindow.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    Node *e,*p;
    e=new Node;p=new Node;
    e->car.ID="jiji";
    p->car.ID="kakak";
    e->next=p;
    w.park->next=e;

    w.show();

    return a.exec();
}
