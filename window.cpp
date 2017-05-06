#include <QtGui>

#include "window.h"

Window::Window(QWidget *parent)
    : QMainWindow(parent)
{
    w1 = new MainWindow;
    w2 = new MainWindow;

    QVBoxLayout *layout = new QVBoxLayout;
    layout->addWidget(w1);
    layout->addWidget(w1);

    setWindowTitle(tr("Solitaire"));

}
