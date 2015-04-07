#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include <QMainWindow>
#include <QtGui>
#include <QMenu>
#include <QDialog>
    #include <QAction>
    #include <qdebug.h>
    #include <QSettings>
    #include <QMainWindow>
    #include <QMessageBox>
    #include <QSystemTrayIcon>

    QT_BEGIN_NAMESPACE
    class QAction;
    class QLabel;
    class QMenu;

    QT_END_NAMESPACE

    namespace Ui {
    class MainWindow;
    }

    class MainWindow : public QMainWindow
    {
        Q_OBJECT

    public:
        explicit MainWindow(QWidget *parent = 0);
        ~MainWindow();

    public:
        Ui::MainWindow *ui;

    private slots:
        void closewindow();
        void about();
        void sysIcon();
        void slotAbout();

    private:
        void createActions();
        void createMenus();

        QMenu *fileMenu;
        QMenu *helpMenu;
        QMenu *trayIconMenu;
        QSystemTrayIcon* systray ;
        QActionGroup *alignmentGroup;
        QAction *aboutAct;
        QAction *quitAction;
        QAction *aboutAction;
    };

    #endif // MAINWINDOW_H
