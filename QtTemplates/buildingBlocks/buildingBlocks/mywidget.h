    #ifndef MYWIDGET_H
    #define MYWIDGET_H
    #include <QFont>
    #include <QLCDNumber>
    #include <QPushButton>
    #include <QSlider>
    #include <QVBoxLayout>
    #include <QWidget>
    class MyWidget : public QWidget
    {
    public:
        MyWidget(QWidget *parent = 0);
    ~MyWidget();
    private slots:
        void close();

    };
    #endif // MYWIDGET_H
