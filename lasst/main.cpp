#include "mainwindow.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    Node *p;
    p=new Node;
    p->bwm.ID="lala";
    p->next=NULL;
    w.List->next=p;
    p=NULL;
    w.show();
    delete p;
    return a.exec();
}
