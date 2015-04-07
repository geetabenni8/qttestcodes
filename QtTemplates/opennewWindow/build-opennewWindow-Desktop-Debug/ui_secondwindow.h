/********************************************************************************
** Form generated from reading UI file 'secondwindow.ui'
**
** Created by: Qt User Interface Compiler version 4.8.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SECONDWINDOW_H
#define UI_SECONDWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QMainWindow>
#include <QtGui/QMenuBar>
#include <QtGui/QStatusBar>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_secondWindow
{
public:
    QWidget *centralwidget;
    QLabel *label;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *secondWindow)
    {
        if (secondWindow->objectName().isEmpty())
            secondWindow->setObjectName(QString::fromUtf8("secondWindow"));
        secondWindow->resize(800, 600);
        QPalette palette;
        QBrush brush(QColor(255, 255, 255, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Base, brush);
        QBrush brush1(QColor(163, 219, 244, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Window, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Base, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Window, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Window, brush1);
        secondWindow->setPalette(palette);
        centralwidget = new QWidget(secondWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(160, 110, 561, 251));
        QFont font;
        font.setFamily(QString::fromUtf8("Umpush"));
        font.setPointSize(28);
        label->setFont(font);
        secondWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(secondWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 25));
        secondWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(secondWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        secondWindow->setStatusBar(statusbar);

        retranslateUi(secondWindow);

        QMetaObject::connectSlotsByName(secondWindow);
    } // setupUi

    void retranslateUi(QMainWindow *secondWindow)
    {
        secondWindow->setWindowTitle(QApplication::translate("secondWindow", "secondWindow", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("secondWindow", "Hi I am second window", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class secondWindow: public Ui_secondWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SECONDWINDOW_H
