#include "mainwindow.h"
#include <QApplication>
#include <QVBoxLayout>
#include <QHBoxLayout>
#include <QPushButton>
#include <QScrollArea>
#include <QScrollBar>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    QWidget *w = new QWidget;

    //pre 4 hry odkomentovat zakomentovane riadky a zakomentovat oznaceny riadok
    MainWindow *w1 = new MainWindow;
    MainWindow *w2 = new MainWindow;
    MainWindow *w3 = new MainWindow;
    MainWindow *w4 = new MainWindow;


    QHBoxLayout *toplayout = new QHBoxLayout;
    toplayout->addWidget(w1);
    toplayout->addWidget(w2);

    QHBoxLayout *bottomlayout = new QHBoxLayout;
    bottomlayout->addWidget(w3);
    bottomlayout->addWidget(w4);

    QVBoxLayout *layout = new QVBoxLayout;
    layout->addLayout(toplayout);
    layout->addLayout(bottomlayout);
//      layout->addWidget(w1); // <<< tento riadok treba zakomentovatr

    w->setLayout(layout);

    w->setWindowTitle("Solitaire");

    w->show();

    return a.exec();
}
