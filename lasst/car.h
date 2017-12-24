#ifndef CAR_H
#define CAR_H

#include<QString>
#include<QList>

typedef struct car
{
    QString ID;
    int l;
}car;
typedef struct Node { //链表结构
    car bwm;
    struct Node *next = NULL;
} Node, *Link;
#endif // CAR_H
