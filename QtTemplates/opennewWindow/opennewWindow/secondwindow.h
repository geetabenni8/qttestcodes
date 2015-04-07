#ifndef SECONDWINDOW_H
#define SECONDWINDOW_H

#include <QMainWindow>

namespace Ui {
class secondWindow;
}

class secondWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit secondWindow(QWidget *parent = 0);
    ~secondWindow();

private:
    Ui::secondWindow *ui;
};

#endif // SECONDWINDOW_H
