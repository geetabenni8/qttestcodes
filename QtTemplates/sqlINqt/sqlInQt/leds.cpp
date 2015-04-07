    #include "leds.h"

    Leds::Leds(QWidget *parent) :
        QDialog(parent),
        ui(new Ui::Leds)
    {
        ui->setupUi(this);
    }

    Leds::~Leds()
    {
        delete ui;
    }

    void Leds::on_leds_1_clicked()
    {
         bool clk = ui->leds_1->isChecked();
         if(clk == true)
           qDebug() << "led 1 clicked";
    }

    void Leds::on_leds_2_clicked()
    {
        bool clk = ui->leds_2->isChecked();
        if(clk == true)
          qDebug() << "led 2 clicked";
    }

    void Leds::on_leds_3_clicked()
    {
        bool clk = ui->leds_3->isChecked();
        if(clk == true)
          qDebug() << "led 3 clicked";
    }

    void Leds::on_leds_4_clicked()
    {
        bool clk = ui->leds_4->isChecked();
        if(clk == true)
          qDebug() << "led 4 clicked";

    }

    void Leds::on_all_led_clicked()
    {

        bool clk = ui->all_led->isChecked();
        if(clk == true)
          qDebug() << "All leds clicked";
    }


    void Leds::on_led_start_stop_clicked()
    {
        bool clk = ui->led_start_stop->isChecked();
        if(clk == true) {
             qDebug() << clk;

    }
}
