#ifndef WINDOW_H
#define WINDOW_H

#include "mainwindow.h"

namespace Ui {
class Window;
}

class Window : public QMainWindow
{
    Q_OBJECT

private:
    MainWindow *w1;
    MainWindow *w2;
};

#endif // WINDOW_H
