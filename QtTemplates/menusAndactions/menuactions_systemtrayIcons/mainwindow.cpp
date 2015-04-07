    #include "mainwindow.h"
    #include "ui_mainwindow.h"
    #include <QMessageBox>
   MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
    {

        ui->setupUi(this);
        this->setWindowTitle("QMenu and QAction Example");
        createActions();
        sysIcon();

        if(!systray->isVisible())
            systray->setVisible(true);
    }

    MainWindow::~MainWindow()
    {}

    void MainWindow::slotAbout()
    {
      QMessageBox::about(this,"About","This is an about box \n shown with QAction of QMenu.");
    }

    void MainWindow::about()
    {
        QMessageBox::about(this, tr("About Menu"),tr("<b>This </b> application shows how to create menu bar with actions and also shows how to set up system tray Icon"));
    }

    void MainWindow::closewindow()
    {
        QMessageBox::StandardButton reply;
        reply = QMessageBox::question(this, "Test", "Are you sure you want to Quit?",
                                      QMessageBox::Yes|QMessageBox::No);
        if (reply == QMessageBox::Yes) {
            qDebug() << "Sure to close window";
            QApplication::quit();
        } else {
            qDebug() << "Not sure to close window";
        }
    }

    void MainWindow::createActions()
    {
        quitAction = new QAction("Quit", this);
        connect (quitAction, SIGNAL(triggered()), this, SLOT(closewindow()));

        aboutAction = new QAction("About",this);
        aboutAction->setStatusTip(tr("Show the application's About box"));
        connect(aboutAction,SIGNAL(triggered()),this,SLOT(about()));

    }
    void MainWindow::sysIcon()
    {
        trayIconMenu = new QMenu(this);
        trayIconMenu->addAction (aboutAction);
        trayIconMenu->addAction (quitAction);
        QIcon icon(":/icon.png");
        systray = new QSystemTrayIcon(this);
        systray->setIcon(icon);
        systray->setContextMenu (trayIconMenu);
        systray->show();
    }
