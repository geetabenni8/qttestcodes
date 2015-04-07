#include "mainwindow.h"
  #include "ui_mainwindow.h"

  MainWindow::MainWindow(QWidget *parent) :
      QMainWindow(parent),
      ui(new Ui::MainWindow)
  {
      ui->setupUi(this);
  }

  MainWindow::~MainWindow()
  {
      delete ui;
  }

  void MainWindow::on_pushButton_clicked()
  {
      QString username,password;
      username = ui->usernameEdit->text();
      password = ui->passwordEdit->text();
      if(manageDB.openDB())
      {
          qDebug()<< "Successfully connected to DB";
          manageDB.createUserTable();
          //manageDB.insertUser("Geeta","456");
          manageDB.getUserDetails(&u1);
          qDebug()<<"User:"<< u1.uid << u1.username << u1.password;


      }
      else {
          qDebug()<< "Could not connected to DB"<< manageDB.lastError();
      }

      manageDB.closeDB();
      if(username != "" && password != "")
      {
          if(u1.username == username && u1.password == password)
          {
              Leds *secondWindow = new Leds;
              secondWindow->exec();

          }


      }

  }
