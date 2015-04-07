#ifndef LEDS_H
#define LEDS_H

#include <QDialog>
#include <fcntl.h>    /* For O_RDWR */
#include <unistd.h>   /* For open(), creat() */
#include <sys/ioctl.h>
#include <stdio.h>
#include <QDebug>
#include "ui_leds.h"

namespace Ui {
class Leds;
}

class Leds : public QDialog
{
    Q_OBJECT

public:
    explicit Leds(QWidget *parent = 0);
    ~Leds();

private slots:
    void on_leds_1_clicked();

    void on_leds_2_clicked();

    void on_leds_3_clicked();

    void on_leds_4_clicked();

    void on_all_led_clicked();

    void on_led_start_stop_clicked();

private:
    Ui::Leds *ui;
};

#endif // LEDS_H
