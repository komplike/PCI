#ifndef WINDOW_H
#define WINDOW_H
#include "mainwindow.h"
#include "QtGui"

class Window : public QWidget
{
    Q_OBJECT

public:
    Window(QWidget *parent = 0);
    QHBoxLayout *toplayout;
    QHBoxLayout *bottomlayout;
    QPushButton *button;
    MainWindow *W[4];
    QVBoxLayout *layout;
    int i;

private slots:
    void on_button_clicked();
};

#endif // WINDOW_H
