#ifndef HEAD_H
#define HEAD_H
#include<QList>
#include"time.h"
#include<QString>
#include<string>
//#include
using namespace std;
typedef struct Car {
       QString ID;	//车牌
        int rank;	    //排队序号
        int locate;		//在停车场中的车位
        double cost;		//停车费用
        int dir;
        struct tm indeque;
        struct tm start;
        struct tm end;
        bool vip = false;		//判断用户是否为VIP贵宾
} Car;
#endif // HEAD_H
