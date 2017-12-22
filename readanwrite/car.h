#ifndef CAR_H
#define CAR_H
#include<QList>
#include<iostream>
#include<fstream>
#include<QString>
using namespace std;
typedef struct Car {
        QString ID;	//车牌
        int rank;	    //排队序号
        int locate;		//在停车场中的车位
        double cost;		//停车费用
        int dir;		//入口方向，（0为南，1为北）
        struct tm indeque, start, end;	//三个时间
        bool vip;		//判断用户是否为VIP贵宾
} Car;

typedef struct Node { //链表结构
        Car car;
        struct Node *next = NULL;
} Node, *Link;
#endif // CAR_H
