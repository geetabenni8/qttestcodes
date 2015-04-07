#include "mywidget.h"
#include "ui_mywidget.h"
#include <QMessageBox>
#include <qdebug.h>
MyWidget::MyWidget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::MyWidget)
{
    ui->setupUi(this);
}

MyWidget::~MyWidget()
{
    delete ui;
}

void MyWidget::on_pushButton_clicked()
{
    QMessageBox::StandardButton reply;
    reply = QMessageBox::question(this, "Question", "Are you sure to Quit?", QMessageBox::Yes|QMessageBox::No);
    if (reply == QMessageBox::Yes) {
      qDebug() << "Yes was clicked";
      QApplication::quit();
    }
    else {
      qDebug() << "Yes was *not* clicked";
    }
}
