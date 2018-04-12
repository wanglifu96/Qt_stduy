#ifndef GLOBAL_H
#define GLOBAL_H
#include <QString>
#include <QtDebug>

class message     //新建一个类存放全局变量
{
public:
     static QString display;

};
extern QString display2;
#endif // GLOBAL_H

