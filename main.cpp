#include <QCoreApplication>
#include"global.h"
extern QString display2;
class message;

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    qDebug()<<"diapaly="<<message::display;//初始变量
    message::display="变量已改变";
    qDebug()<<"diapaly="<<message::display;//初始变量
     qDebug()<<"diapaly2="<<display2;
     display2="extern 变量传递已改变";
     qDebug()<<"diapaly2="<<display2;
    return a.exec();

}

