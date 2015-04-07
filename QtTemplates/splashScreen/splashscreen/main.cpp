#include "mainwindow.h"
#include <QApplication>
#include <QApplication>
#include <QSplashScreen>

#include <QTimer>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    QSplashScreen *splash = new QSplashScreen;
    QImage pix(":/images/logo.jpeg");
    splash->setPixmap(QPixmap::fromImage(pix));
    //splash->setWindowFlags( Qt::WindowStaysOnTopHint | Qt::SplashScreen | Qt::FramelessWindowHint );
    splash->show();
    MainWindow w;
    QTimer::singleShot(1000,splash,SLOT(close()));
    QTimer::singleShot(1000,&w,SLOT(show()));
    return a.exec();
}
