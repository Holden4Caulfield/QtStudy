#include "mainwindow.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    car bwm,mmp;
    Node *e=new Node;
    e->bwm.ID="lala";
    w.List->next=e;
    bwm.ID="123";bwm.l=16;
    mmp.ID="123456";mmp.l=18;
   // w.Link.append(bwm);w.Link.append(mmp);
    w.show();

    return a.exec();
}
