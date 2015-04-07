/********************************************************************************
** Form generated from reading UI file 'leds.ui'
**
** Created by: Qt User Interface Compiler version 4.8.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LEDS_H
#define UI_LEDS_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCheckBox>
#include <QtGui/QDialog>
#include <QtGui/QHeaderView>

QT_BEGIN_NAMESPACE

class Ui_Leds
{
public:
    QCheckBox *leds_1;
    QCheckBox *leds_2;
    QCheckBox *leds_3;
    QCheckBox *leds_4;
    QCheckBox *all_led;
    QCheckBox *led_start_stop;

    void setupUi(QDialog *Leds)
    {
        if (Leds->objectName().isEmpty())
            Leds->setObjectName(QString::fromUtf8("Leds"));
        Leds->resize(256, 300);
        leds_1 = new QCheckBox(Leds);
        leds_1->setObjectName(QString::fromUtf8("leds_1"));
        leds_1->setGeometry(QRect(10, 20, 131, 22));
        leds_2 = new QCheckBox(Leds);
        leds_2->setObjectName(QString::fromUtf8("leds_2"));
        leds_2->setGeometry(QRect(10, 50, 131, 22));
        leds_3 = new QCheckBox(Leds);
        leds_3->setObjectName(QString::fromUtf8("leds_3"));
        leds_3->setGeometry(QRect(10, 80, 141, 22));
        leds_4 = new QCheckBox(Leds);
        leds_4->setObjectName(QString::fromUtf8("leds_4"));
        leds_4->setGeometry(QRect(10, 110, 171, 22));
        all_led = new QCheckBox(Leds);
        all_led->setObjectName(QString::fromUtf8("all_led"));
        all_led->setGeometry(QRect(10, 140, 141, 22));
        led_start_stop = new QCheckBox(Leds);
        led_start_stop->setObjectName(QString::fromUtf8("led_start_stop"));
        led_start_stop->setGeometry(QRect(10, 168, 131, 22));

        retranslateUi(Leds);

        QMetaObject::connectSlotsByName(Leds);
    } // setupUi

    void retranslateUi(QDialog *Leds)
    {
        Leds->setWindowTitle(QApplication::translate("Leds", "Dialog", 0, QApplication::UnicodeUTF8));
        leds_1->setText(QApplication::translate("Leds", "Led 1 On/Off", 0, QApplication::UnicodeUTF8));
        leds_2->setText(QApplication::translate("Leds", "Led 2 On/Off", 0, QApplication::UnicodeUTF8));
        leds_3->setText(QApplication::translate("Leds", "Led 3 On/Off", 0, QApplication::UnicodeUTF8));
        leds_4->setText(QApplication::translate("Leds", "Led 4 On/Off", 0, QApplication::UnicodeUTF8));
        all_led->setText(QApplication::translate("Leds", "All Led On/Off", 0, QApplication::UnicodeUTF8));
        led_start_stop->setText(QApplication::translate("Leds", "Led Start/Stop", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class Leds: public Ui_Leds {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LEDS_H
