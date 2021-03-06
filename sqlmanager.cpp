#include "sqlmanager.h"
#include <QTextCodec>
#include <QMessageBox>
#include <QSqlDatabase>

/*数据库管理类*/
SQLManager::SQLManager(const QString &h,const QString &u,const QString &p,const QString &d):
hostName(h),userName(u),password(p),databaseName(d)
{}
void SQLManager::Connect()
{
    db=QSqlDatabase::addDatabase("QMYSQL");

    db.setHostName(hostName);
    db.setUserName(userName);
    db.setPassword(password);
    db.setDatabaseName(databaseName);

    if(!db.open()){
        QMessageBox::information(NULL,"提示","数据库连接失败",QMessageBox::Ok);
    }
}
