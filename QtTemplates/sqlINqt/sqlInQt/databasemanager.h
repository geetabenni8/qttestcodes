#ifndef DATABASEMANAGER_H
#define DATABASEMANAGER_H

#include <QObject>

#include <QDir>
#include <QtSql/QtSql>
#include <QtSql/QSqlError>
#include <QtSql/QSqlQuery>
#include <QtSql/QtSql>
#include <QFile>
#include <qdebug.h>
class PersonData
{
public:
    int uid;
    QString username;
    QString password;

};
class DatabaseManager : public QObject
{
public:

    DatabaseManager();
    ~DatabaseManager();

public:

    bool openDB();
    bool closeDB();
    QSqlError lastError();
    bool createUserTable();
    int insertUser(QString firstname, QString password);
    bool updatePassword(int id, QString np);
    int getUserDetails(PersonData* user);

private:
 QSqlDatabase db;
private:
bool setDB();

};
#endif
