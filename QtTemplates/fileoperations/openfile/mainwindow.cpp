#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QFile>
#include <QTextStream>
#include <qdebug.h>
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
    QFile file("Output.txt");
    file.open(QIODevice::WriteOnly | QIODevice::Text);
    file.close();
    ui->label->setText("created Output.txt in your build dir");
}

void MainWindow::on_pushButton_2_clicked()
{
    QFile file("Output.txt");
    file.open(QIODevice::WriteOnly | QIODevice::Text);
    QTextStream out(&file);
    QString file_text = ui->lineEdit->text();
    out << file_text <<"\n";
    // optional, as QFile destructor will already do it:
    file.close();

    ui->label->setText("Wrote to Output.txt in your build dir");
}

void MainWindow::on_pushButton_3_clicked()
{
    QString filename ="Output.txt";
    QString line;
    QFile file(filename);
    file.open(QIODevice::ReadOnly);
    QTextStream s1(&file);
    QStringList file_text;
    do {
        line = s1.readLine();
        file_text.push_back(line);
    } while (!s1.atEnd());
    file.close();

    ui->lineEdit_2->setText(line);
    ui->label->setText("Read from Output.txt in your build dir");

}
