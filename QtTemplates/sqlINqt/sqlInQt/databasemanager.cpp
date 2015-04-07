    #include "databasemanager.h"

    DatabaseManager :: DatabaseManager()
    {
        // Find QSLite driver
        //setDB();
    }

    DatabaseManager ::~DatabaseManager()
    {

        closeDB();
    }

    bool  DatabaseManager::setDB()
    {
        db = QSqlDatabase::addDatabase("QSQLITE");
        if(db.isValid()){
         return true;

        }
        else {
            return false ;
        }
    }

    bool DatabaseManager::openDB()
    {
        setDB();

        db.setDatabaseName("/home/gbenni/database/pl.db");
        // Open databasee
        return db.open();
    }

    QSqlError DatabaseManager::lastError()
    {
        // If opening database has failed user can ask
        // error description by QSqlError::text()
        return db.lastError();
    }

    bool DatabaseManager::closeDB()
    {
        // Close database
        if(db.open()) {
            db.close();
            return true;
        }
        else {

            return false;
        }
       // db.removeDatabase(QSqlDatabase::defaultConnection);
    }

    int DatabaseManager::insertUser(QString firstname, QString password)
    {
        int newId = -1;
        bool ret = false;

        if (db.isOpen())
        {

            // NULL = is the keyword for the autoincrement to generate next value

            QSqlQuery query;
            ret = query.exec(QString("insert into user values(NULL,'%1','%2')").arg(firstname).arg(password));

            // Get database given autoincrement value
            if (ret)
            {
                newId = query.lastInsertId().toInt();
            }

        }
        closeDB();
        return newId;
    }

    bool DatabaseManager::createUserTable()
    {
        // Create table "user"
        bool ret = false;
        if (db.isOpen())
        {
            QSqlQuery query;
            ret = query.exec("create table user "
                             "(id integer primary key, "
                             "firstname varchar(20), "
                             "password varchar(30))");

        }
        return ret;
    }

    int DatabaseManager::getUserDetails(PersonData* user)
    {

        QSqlQuery query(QString("select * from user"));
        if (query.next())
        {
            user->uid = query.value(0).toInt();
            user->username = query.value(1).toString();
            user->password = query.value(2).toString();
            closeDB();
            return 0;
        }

        else {
            qDebug()<<"Unable to get user details";
            closeDB();
            return -1;
        }
    }


    bool DatabaseManager::updatePassword(int id,QString np)
    {
        bool ret = false;
        openDB();
        // QSqlQuery qry;
        QSqlQuery query;
        ret = query.exec(QString("UPDATE user SET password='%1' WHERE id='%2'").arg(np).arg(id));

        if(ret)
        {
            qDebug()<<"Updated password";
            closeDB();
            return true;
        }
        else {
            qDebug()<<"Unable to update password";
            closeDB();
            return false;
        }
    }
