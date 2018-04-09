#include <QCoreApplication>
#include <QSqlDatabase>
#include <QSqlQuery>
#include <QSqlError>
#include <QtDebug>
void connect_mysql()
{
    QSqlDatabase db=QSqlDatabase::addDatabase("QMYSQL");
       db.setHostName("127.0.0.1");          //连接数据库主机名
       db.setPort(3306);                            //连接数据库端口号
        db.setDatabaseName("test");           //连接数据库名
        db.setUserName("root");                //数据库用户名
        db.setPassword("88888888");      //数据库密码
        db.open();
        if(!db.open())
        {
            qDebug()<<"不能连接"<<"connect to mysql error"<<db.lastError().text();
            return ;
        }
        else
        {
             qDebug()<<"连接成功"<<"connect to mysql OK";
        }
        QSqlQuery query(db);
        query.exec("select * from student");
        while(query.next()){
            qDebug()<<query.value("name").toString();
        }
}
int main(int argc,char *argv[])
{
    QCoreApplication a(argc,argv);
    connect_mysql();
    return a.exec();
}
