/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 4.8.7
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QFrame>
#include <QtGui/QGroupBox>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QMainWindow>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QToolBar>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QWidget *table;
    QWidget *layoutWidget;
    QHBoxLayout *top;
    QHBoxLayout *deck;
    QPushButton *deck_back;
    QPushButton *deck_face;
    QSpacerItem *horizontalSpacer;
    QHBoxLayout *foundation;
    QPushButton *foundation1;
    QPushButton *foundation2;
    QPushButton *foundation3;
    QPushButton *foundation4;
    QGroupBox *table1;
    QPushButton *table1_card_1;
    QPushButton *table1_card_6;
    QPushButton *table1_card_5;
    QPushButton *table1_card_2;
    QPushButton *table1_card_8;
    QPushButton *table1_card_3;
    QPushButton *table1_card_4;
    QPushButton *table1_card_7;
    QPushButton *table1_card_9;
    QPushButton *table1_card_10;
    QPushButton *table1_card_11;
    QPushButton *table1_card_12;
    QPushButton *table1_card_13;
    QGroupBox *table2;
    QPushButton *table2_card_1;
    QPushButton *table2_card_6;
    QPushButton *table2_card_5;
    QPushButton *table2_card_2;
    QPushButton *table2_card_8;
    QPushButton *table2_card_3;
    QPushButton *table2_card_4;
    QPushButton *table2_card_7;
    QPushButton *table2_card_9;
    QPushButton *table2_card_10;
    QPushButton *table2_card_11;
    QPushButton *table2_card_12;
    QPushButton *table2_card_13;
    QFrame *table3;
    QPushButton *table3_card_1;
    QPushButton *table3_card_6;
    QPushButton *table3_card_5;
    QPushButton *table3_card_2;
    QPushButton *table3_card_8;
    QPushButton *table3_card_3;
    QPushButton *table3_card_4;
    QPushButton *table3_card_7;
    QPushButton *table3_card_9;
    QPushButton *table3_card_10;
    QPushButton *table3_card_11;
    QPushButton *table3_card_12;
    QPushButton *table3_card_13;
    QGroupBox *table4;
    QPushButton *table4_card_1;
    QPushButton *table4_card_6;
    QPushButton *table4_card_5;
    QPushButton *table4_card_2;
    QPushButton *table4_card_8;
    QPushButton *table4_card_3;
    QPushButton *table4_card_4;
    QPushButton *table4_card_7;
    QPushButton *table4_card_9;
    QPushButton *table4_card_10;
    QPushButton *table4_card_11;
    QPushButton *table4_card_12;
    QPushButton *table4_card_13;
    QGroupBox *table5;
    QPushButton *table5_card_1;
    QPushButton *table5_card_6;
    QPushButton *table5_card_5;
    QPushButton *table5_card_2;
    QPushButton *table5_card_8;
    QPushButton *table5_card_3;
    QPushButton *table5_card_4;
    QPushButton *table5_card_7;
    QPushButton *table5_card_9;
    QPushButton *table5_card_10;
    QPushButton *table5_card_11;
    QPushButton *table5_card_12;
    QPushButton *table5_card_13;
    QGroupBox *table6;
    QPushButton *table6_card_1;
    QPushButton *table6_card_6;
    QPushButton *table6_card_5;
    QPushButton *table6_card_2;
    QPushButton *table6_card_8;
    QPushButton *table6_card_3;
    QPushButton *table6_card_4;
    QPushButton *table6_card_7;
    QPushButton *table6_card_9;
    QPushButton *table6_card_10;
    QPushButton *table6_card_11;
    QPushButton *table6_card_12;
    QPushButton *table6_card_13;
    QFrame *table7;
    QPushButton *table7_card_1;
    QPushButton *table7_card_6;
    QPushButton *table7_card_5;
    QPushButton *table7_card_2;
    QPushButton *table7_card_8;
    QPushButton *table7_card_3;
    QPushButton *table7_card_4;
    QPushButton *table7_card_7;
    QPushButton *table7_card_9;
    QPushButton *table7_card_10;
    QPushButton *table7_card_11;
    QPushButton *table7_card_12;
    QPushButton *table7_card_13;
    QPushButton *newGame;
    QPushButton *loadGame;
    QPushButton *saveGame;
    QToolBar *mainToolBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(540, 500);
        MainWindow->setMinimumSize(QSize(540, 500));
        MainWindow->setMaximumSize(QSize(540, 513));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        centralWidget->setMinimumSize(QSize(540, 500));
        centralWidget->setMaximumSize(QSize(540, 500));
        table = new QWidget(centralWidget);
        table->setObjectName(QString::fromUtf8("table"));
        table->setGeometry(QRect(0, 0, 540, 500));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(table->sizePolicy().hasHeightForWidth());
        table->setSizePolicy(sizePolicy);
        table->setMinimumSize(QSize(540, 500));
        table->setMaximumSize(QSize(540, 500));
        QPalette palette;
        QBrush brush(QColor(0, 128, 0, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Button, brush);
        palette.setBrush(QPalette::Active, QPalette::Base, brush);
        palette.setBrush(QPalette::Active, QPalette::Window, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Button, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Base, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Window, brush);
        palette.setBrush(QPalette::Disabled, QPalette::Button, brush);
        palette.setBrush(QPalette::Disabled, QPalette::Base, brush);
        palette.setBrush(QPalette::Disabled, QPalette::Window, brush);
        table->setPalette(palette);
        QFont font;
        font.setFamily(QString::fromUtf8("NanumGothic"));
        font.setBold(true);
        font.setWeight(75);
        table->setFont(font);
        table->setStyleSheet(QString::fromUtf8("background: green;"));
        layoutWidget = new QWidget(table);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(20, 10, 491, 91));
        top = new QHBoxLayout(layoutWidget);
        top->setSpacing(6);
        top->setContentsMargins(11, 11, 11, 11);
        top->setObjectName(QString::fromUtf8("top"));
        top->setContentsMargins(0, 0, 0, 0);
        deck = new QHBoxLayout();
        deck->setSpacing(20);
        deck->setObjectName(QString::fromUtf8("deck"));
        deck->setContentsMargins(-1, -1, -1, 0);
        deck_back = new QPushButton(layoutWidget);
        deck_back->setObjectName(QString::fromUtf8("deck_back"));
        sizePolicy.setHeightForWidth(deck_back->sizePolicy().hasHeightForWidth());
        deck_back->setSizePolicy(sizePolicy);
        deck_back->setMinimumSize(QSize(54, 84));
        deck_back->setMaximumSize(QSize(54, 84));
        deck_back->setStyleSheet(QString::fromUtf8("background: white;\n"
"border-width:3px;\n"
"border-color: black;\n"
""));

        deck->addWidget(deck_back);

        deck_face = new QPushButton(layoutWidget);
        deck_face->setObjectName(QString::fromUtf8("deck_face"));
        sizePolicy.setHeightForWidth(deck_face->sizePolicy().hasHeightForWidth());
        deck_face->setSizePolicy(sizePolicy);
        deck_face->setMinimumSize(QSize(54, 84));
        deck_face->setMaximumSize(QSize(54, 84));
        deck_face->setStyleSheet(QString::fromUtf8("background: white;\n"
"border-width:3px;\n"
"border-color: black;"));

        deck->addWidget(deck_face);


        top->addLayout(deck);

        horizontalSpacer = new QSpacerItem(90, 40, QSizePolicy::Expanding, QSizePolicy::Minimum);

        top->addItem(horizontalSpacer);

        foundation = new QHBoxLayout();
        foundation->setSpacing(20);
        foundation->setObjectName(QString::fromUtf8("foundation"));
        foundation->setContentsMargins(0, 0, -1, 0);
        foundation1 = new QPushButton(layoutWidget);
        foundation1->setObjectName(QString::fromUtf8("foundation1"));
        sizePolicy.setHeightForWidth(foundation1->sizePolicy().hasHeightForWidth());
        foundation1->setSizePolicy(sizePolicy);
        foundation1->setMinimumSize(QSize(54, 84));
        foundation1->setMaximumSize(QSize(54, 84));
        foundation1->setStyleSheet(QString::fromUtf8("background: white;\n"
"border-width:3px;\n"
"border-color: black;"));

        foundation->addWidget(foundation1);

        foundation2 = new QPushButton(layoutWidget);
        foundation2->setObjectName(QString::fromUtf8("foundation2"));
        sizePolicy.setHeightForWidth(foundation2->sizePolicy().hasHeightForWidth());
        foundation2->setSizePolicy(sizePolicy);
        foundation2->setMinimumSize(QSize(54, 84));
        foundation2->setMaximumSize(QSize(54, 84));
        foundation2->setStyleSheet(QString::fromUtf8("background: white;\n"
"border-width:3px;\n"
"border-color: black;"));

        foundation->addWidget(foundation2);

        foundation3 = new QPushButton(layoutWidget);
        foundation3->setObjectName(QString::fromUtf8("foundation3"));
        sizePolicy.setHeightForWidth(foundation3->sizePolicy().hasHeightForWidth());
        foundation3->setSizePolicy(sizePolicy);
        foundation3->setMinimumSize(QSize(54, 84));
        foundation3->setMaximumSize(QSize(54, 84));
        foundation3->setStyleSheet(QString::fromUtf8("background: white;\n"
"border-width:3px;\n"
"border-color: black;"));

        foundation->addWidget(foundation3);

        foundation4 = new QPushButton(layoutWidget);
        foundation4->setObjectName(QString::fromUtf8("foundation4"));
        sizePolicy.setHeightForWidth(foundation4->sizePolicy().hasHeightForWidth());
        foundation4->setSizePolicy(sizePolicy);
        foundation4->setMinimumSize(QSize(54, 84));
        foundation4->setMaximumSize(QSize(54, 84));
        foundation4->setStyleSheet(QString::fromUtf8("background: white;\n"
"border-width:3px;\n"
"border-color: black;"));

        foundation->addWidget(foundation4);


        top->addLayout(foundation);

        table1 = new QGroupBox(table);
        table1->setObjectName(QString::fromUtf8("table1"));
        table1->setEnabled(true);
        table1->setGeometry(QRect(10, 110, 81, 341));
        sizePolicy.setHeightForWidth(table1->sizePolicy().hasHeightForWidth());
        table1->setSizePolicy(sizePolicy);
        table1->setMinimumSize(QSize(72, 112));
        table1->setLayoutDirection(Qt::LeftToRight);
        table1->setAutoFillBackground(false);
        table1->setAlignment(Qt::AlignJustify|Qt::AlignTop);
        table1_card_1 = new QPushButton(table1);
        table1_card_1->setObjectName(QString::fromUtf8("table1_card_1"));
        table1_card_1->setGeometry(QRect(20, 10, 54, 84));
        sizePolicy.setHeightForWidth(table1_card_1->sizePolicy().hasHeightForWidth());
        table1_card_1->setSizePolicy(sizePolicy);
        table1_card_1->setMinimumSize(QSize(54, 84));
        table1_card_1->setMaximumSize(QSize(54, 84));
        table1_card_1->setStyleSheet(QString::fromUtf8("background: white;\n"
"border-width:3px;\n"
"border-color: black;"));
        table1_card_6 = new QPushButton(table1);
        table1_card_6->setObjectName(QString::fromUtf8("table1_card_6"));
        table1_card_6->setGeometry(QRect(20, 110, 54, 84));
        sizePolicy.setHeightForWidth(table1_card_6->sizePolicy().hasHeightForWidth());
        table1_card_6->setSizePolicy(sizePolicy);
        table1_card_6->setMinimumSize(QSize(54, 84));
        table1_card_6->setMaximumSize(QSize(54, 84));
        table1_card_6->setStyleSheet(QString::fromUtf8("background: white;\n"
"border-width:3px;\n"
"border-color: black;"));
        table1_card_5 = new QPushButton(table1);
        table1_card_5->setObjectName(QString::fromUtf8("table1_card_5"));
        table1_card_5->setGeometry(QRect(20, 90, 54, 84));
        sizePolicy.setHeightForWidth(table1_card_5->sizePolicy().hasHeightForWidth());
        table1_card_5->setSizePolicy(sizePolicy);
        table1_card_5->setMinimumSize(QSize(54, 84));
        table1_card_5->setMaximumSize(QSize(54, 84));
        table1_card_5->setStyleSheet(QString::fromUtf8("background: white;\n"
"border-width:3px;\n"
"border-color: black;"));
        table1_card_2 = new QPushButton(table1);
        table1_card_2->setObjectName(QString::fromUtf8("table1_card_2"));
        table1_card_2->setGeometry(QRect(20, 30, 54, 84));
        sizePolicy.setHeightForWidth(table1_card_2->sizePolicy().hasHeightForWidth());
        table1_card_2->setSizePolicy(sizePolicy);
        table1_card_2->setMinimumSize(QSize(54, 84));
        table1_card_2->setMaximumSize(QSize(54, 84));
        table1_card_2->setStyleSheet(QString::fromUtf8("background: white;\n"
"border-width:3px;\n"
"border-color: black;\n"
""));
        table1_card_8 = new QPushButton(table1);
        table1_card_8->setObjectName(QString::fromUtf8("table1_card_8"));
        table1_card_8->setGeometry(QRect(20, 150, 54, 84));
        sizePolicy.setHeightForWidth(table1_card_8->sizePolicy().hasHeightForWidth());
        table1_card_8->setSizePolicy(sizePolicy);
        table1_card_8->setMinimumSize(QSize(54, 84));
        table1_card_8->setMaximumSize(QSize(54, 84));
        table1_card_8->setStyleSheet(QString::fromUtf8("background: white;\n"
"border-width:3px;\n"
"border-color: black;\n"
""));
        table1_card_3 = new QPushButton(table1);
        table1_card_3->setObjectName(QString::fromUtf8("table1_card_3"));
        table1_card_3->setGeometry(QRect(20, 50, 54, 84));
        sizePolicy.setHeightForWidth(table1_card_3->sizePolicy().hasHeightForWidth());
        table1_card_3->setSizePolicy(sizePolicy);
        table1_card_3->setMinimumSize(QSize(54, 84));
        table1_card_3->setMaximumSize(QSize(54, 84));
        table1_card_3->setStyleSheet(QString::fromUtf8("background: white;\n"
"border-width:3px;\n"
"border-color: black;\n"
""));
        table1_card_4 = new QPushButton(table1);
        table1_card_4->setObjectName(QString::fromUtf8("table1_card_4"));
        table1_card_4->setGeometry(QRect(20, 70, 54, 84));
        sizePolicy.setHeightForWidth(table1_card_4->sizePolicy().hasHeightForWidth());
        table1_card_4->setSizePolicy(sizePolicy);
        table1_card_4->setMinimumSize(QSize(54, 84));
        table1_card_4->setMaximumSize(QSize(54, 84));
        table1_card_4->setStyleSheet(QString::fromUtf8("background: white;\n"
"border-width:3px;\n"
"border-color: black;\n"
""));
        table1_card_7 = new QPushButton(table1);
        table1_card_7->setObjectName(QString::fromUtf8("table1_card_7"));
        table1_card_7->setGeometry(QRect(20, 130, 54, 84));
        sizePolicy.setHeightForWidth(table1_card_7->sizePolicy().hasHeightForWidth());
        table1_card_7->setSizePolicy(sizePolicy);
        table1_card_7->setMinimumSize(QSize(54, 84));
        table1_card_7->setMaximumSize(QSize(54, 84));
        table1_card_7->setStyleSheet(QString::fromUtf8("background: white;\n"
"border-width:3px;\n"
"border-color: black;\n"
""));
        table1_card_9 = new QPushButton(table1);
        table1_card_9->setObjectName(QString::fromUtf8("table1_card_9"));
        table1_card_9->setGeometry(QRect(20, 170, 54, 84));
        sizePolicy.setHeightForWidth(table1_card_9->sizePolicy().hasHeightForWidth());
        table1_card_9->setSizePolicy(sizePolicy);
        table1_card_9->setMinimumSize(QSize(54, 84));
        table1_card_9->setMaximumSize(QSize(54, 84));
        table1_card_9->setStyleSheet(QString::fromUtf8("background: white;\n"
"border-width:3px;\n"
"border-color: black;\n"
""));
        table1_card_10 = new QPushButton(table1);
        table1_card_10->setObjectName(QString::fromUtf8("table1_card_10"));
        table1_card_10->setGeometry(QRect(20, 190, 54, 84));
        sizePolicy.setHeightForWidth(table1_card_10->sizePolicy().hasHeightForWidth());
        table1_card_10->setSizePolicy(sizePolicy);
        table1_card_10->setMinimumSize(QSize(54, 84));
        table1_card_10->setMaximumSize(QSize(54, 84));
        table1_card_10->setStyleSheet(QString::fromUtf8("background: white;\n"
"border-width:3px;\n"
"border-color: black;"));
        table1_card_11 = new QPushButton(table1);
        table1_card_11->setObjectName(QString::fromUtf8("table1_card_11"));
        table1_card_11->setGeometry(QRect(20, 210, 54, 84));
        sizePolicy.setHeightForWidth(table1_card_11->sizePolicy().hasHeightForWidth());
        table1_card_11->setSizePolicy(sizePolicy);
        table1_card_11->setMinimumSize(QSize(54, 84));
        table1_card_11->setMaximumSize(QSize(54, 84));
        table1_card_11->setStyleSheet(QString::fromUtf8("background: white;\n"
"border-width:3px;\n"
"border-color: black;"));
        table1_card_12 = new QPushButton(table1);
        table1_card_12->setObjectName(QString::fromUtf8("table1_card_12"));
        table1_card_12->setGeometry(QRect(20, 230, 54, 84));
        sizePolicy.setHeightForWidth(table1_card_12->sizePolicy().hasHeightForWidth());
        table1_card_12->setSizePolicy(sizePolicy);
        table1_card_12->setMinimumSize(QSize(54, 84));
        table1_card_12->setMaximumSize(QSize(54, 84));
        table1_card_12->setStyleSheet(QString::fromUtf8("background: white;\n"
"border-width:3px;\n"
"border-color: black;\n"
""));
        table1_card_13 = new QPushButton(table1);
        table1_card_13->setObjectName(QString::fromUtf8("table1_card_13"));
        table1_card_13->setGeometry(QRect(20, 250, 54, 84));
        sizePolicy.setHeightForWidth(table1_card_13->sizePolicy().hasHeightForWidth());
        table1_card_13->setSizePolicy(sizePolicy);
        table1_card_13->setMinimumSize(QSize(54, 84));
        table1_card_13->setMaximumSize(QSize(54, 84));
        table1_card_13->setStyleSheet(QString::fromUtf8("background: white;\n"
"border-width:3px;\n"
"border-color: black;\n"
""));
        table1_card_1->raise();
        table1_card_2->raise();
        table1_card_3->raise();
        table1_card_4->raise();
        table1_card_5->raise();
        table1_card_6->raise();
        table1_card_7->raise();
        table1_card_8->raise();
        table1_card_9->raise();
        table1_card_10->raise();
        table1_card_11->raise();
        table1_card_12->raise();
        table1_card_13->raise();
        table2 = new QGroupBox(table);
        table2->setObjectName(QString::fromUtf8("table2"));
        table2->setEnabled(true);
        table2->setGeometry(QRect(80, 110, 81, 341));
        sizePolicy.setHeightForWidth(table2->sizePolicy().hasHeightForWidth());
        table2->setSizePolicy(sizePolicy);
        table2->setMinimumSize(QSize(72, 112));
        table2->setLayoutDirection(Qt::LeftToRight);
        table2->setAutoFillBackground(false);
        table2->setAlignment(Qt::AlignJustify|Qt::AlignTop);
        table2_card_1 = new QPushButton(table2);
        table2_card_1->setObjectName(QString::fromUtf8("table2_card_1"));
        table2_card_1->setGeometry(QRect(20, 10, 54, 84));
        sizePolicy.setHeightForWidth(table2_card_1->sizePolicy().hasHeightForWidth());
        table2_card_1->setSizePolicy(sizePolicy);
        table2_card_1->setMinimumSize(QSize(54, 84));
        table2_card_1->setMaximumSize(QSize(54, 84));
        table2_card_1->setStyleSheet(QString::fromUtf8("background: white;\n"
"border-width:3px;\n"
"border-color: black;\n"
""));
        table2_card_6 = new QPushButton(table2);
        table2_card_6->setObjectName(QString::fromUtf8("table2_card_6"));
        table2_card_6->setGeometry(QRect(20, 110, 54, 84));
        sizePolicy.setHeightForWidth(table2_card_6->sizePolicy().hasHeightForWidth());
        table2_card_6->setSizePolicy(sizePolicy);
        table2_card_6->setMinimumSize(QSize(54, 84));
        table2_card_6->setMaximumSize(QSize(54, 84));
        table2_card_6->setStyleSheet(QString::fromUtf8("background: white;\n"
"border-width:3px;\n"
"border-color: black;\n"
""));
        table2_card_5 = new QPushButton(table2);
        table2_card_5->setObjectName(QString::fromUtf8("table2_card_5"));
        table2_card_5->setGeometry(QRect(20, 90, 54, 84));
        sizePolicy.setHeightForWidth(table2_card_5->sizePolicy().hasHeightForWidth());
        table2_card_5->setSizePolicy(sizePolicy);
        table2_card_5->setMinimumSize(QSize(54, 84));
        table2_card_5->setMaximumSize(QSize(54, 84));
        table2_card_5->setStyleSheet(QString::fromUtf8("background: white;\n"
"border-width:3px;\n"
"border-color: black;\n"
""));
        table2_card_2 = new QPushButton(table2);
        table2_card_2->setObjectName(QString::fromUtf8("table2_card_2"));
        table2_card_2->setGeometry(QRect(20, 30, 54, 84));
        sizePolicy.setHeightForWidth(table2_card_2->sizePolicy().hasHeightForWidth());
        table2_card_2->setSizePolicy(sizePolicy);
        table2_card_2->setMinimumSize(QSize(54, 84));
        table2_card_2->setMaximumSize(QSize(54, 84));
        table2_card_2->setStyleSheet(QString::fromUtf8("background: white;\n"
"border-width:3px;\n"
"border-color: black;\n"
""));
        table2_card_8 = new QPushButton(table2);
        table2_card_8->setObjectName(QString::fromUtf8("table2_card_8"));
        table2_card_8->setGeometry(QRect(20, 150, 54, 84));
        sizePolicy.setHeightForWidth(table2_card_8->sizePolicy().hasHeightForWidth());
        table2_card_8->setSizePolicy(sizePolicy);
        table2_card_8->setMinimumSize(QSize(54, 84));
        table2_card_8->setMaximumSize(QSize(54, 84));
        table2_card_8->setStyleSheet(QString::fromUtf8("background: white;\n"
"border-width:3px;\n"
"border-color: black;\n"
""));
        table2_card_3 = new QPushButton(table2);
        table2_card_3->setObjectName(QString::fromUtf8("table2_card_3"));
        table2_card_3->setGeometry(QRect(20, 50, 54, 84));
        sizePolicy.setHeightForWidth(table2_card_3->sizePolicy().hasHeightForWidth());
        table2_card_3->setSizePolicy(sizePolicy);
        table2_card_3->setMinimumSize(QSize(54, 84));
        table2_card_3->setMaximumSize(QSize(54, 84));
        table2_card_3->setStyleSheet(QString::fromUtf8("background: white;\n"
"border-width:3px;\n"
"border-color: black;\n"
""));
        table2_card_4 = new QPushButton(table2);
        table2_card_4->setObjectName(QString::fromUtf8("table2_card_4"));
        table2_card_4->setGeometry(QRect(20, 70, 54, 84));
        sizePolicy.setHeightForWidth(table2_card_4->sizePolicy().hasHeightForWidth());
        table2_card_4->setSizePolicy(sizePolicy);
        table2_card_4->setMinimumSize(QSize(54, 84));
        table2_card_4->setMaximumSize(QSize(54, 84));
        table2_card_4->setStyleSheet(QString::fromUtf8("background: white;\n"
"border-width:3px;\n"
"border-color: black;\n"
""));
        table2_card_7 = new QPushButton(table2);
        table2_card_7->setObjectName(QString::fromUtf8("table2_card_7"));
        table2_card_7->setGeometry(QRect(20, 130, 54, 84));
        sizePolicy.setHeightForWidth(table2_card_7->sizePolicy().hasHeightForWidth());
        table2_card_7->setSizePolicy(sizePolicy);
        table2_card_7->setMinimumSize(QSize(54, 84));
        table2_card_7->setMaximumSize(QSize(54, 84));
        table2_card_7->setStyleSheet(QString::fromUtf8("background: white;\n"
"border-width:3px;\n"
"border-color: black;\n"
""));
        table2_card_9 = new QPushButton(table2);
        table2_card_9->setObjectName(QString::fromUtf8("table2_card_9"));
        table2_card_9->setGeometry(QRect(20, 170, 54, 84));
        sizePolicy.setHeightForWidth(table2_card_9->sizePolicy().hasHeightForWidth());
        table2_card_9->setSizePolicy(sizePolicy);
        table2_card_9->setMinimumSize(QSize(54, 84));
        table2_card_9->setMaximumSize(QSize(54, 84));
        table2_card_9->setStyleSheet(QString::fromUtf8("background: white;\n"
"border-width:3px;\n"
"border-color: black;\n"
""));
        table2_card_10 = new QPushButton(table2);
        table2_card_10->setObjectName(QString::fromUtf8("table2_card_10"));
        table2_card_10->setGeometry(QRect(20, 190, 54, 84));
        sizePolicy.setHeightForWidth(table2_card_10->sizePolicy().hasHeightForWidth());
        table2_card_10->setSizePolicy(sizePolicy);
        table2_card_10->setMinimumSize(QSize(54, 84));
        table2_card_10->setMaximumSize(QSize(54, 84));
        table2_card_10->setStyleSheet(QString::fromUtf8("background: white;\n"
"border-width:3px;\n"
"border-color: black;\n"
""));
        table2_card_11 = new QPushButton(table2);
        table2_card_11->setObjectName(QString::fromUtf8("table2_card_11"));
        table2_card_11->setGeometry(QRect(20, 210, 54, 84));
        sizePolicy.setHeightForWidth(table2_card_11->sizePolicy().hasHeightForWidth());
        table2_card_11->setSizePolicy(sizePolicy);
        table2_card_11->setMinimumSize(QSize(54, 84));
        table2_card_11->setMaximumSize(QSize(54, 84));
        table2_card_11->setStyleSheet(QString::fromUtf8("background: white;\n"
"border-width:3px;\n"
"border-color: black;\n"
""));
        table2_card_12 = new QPushButton(table2);
        table2_card_12->setObjectName(QString::fromUtf8("table2_card_12"));
        table2_card_12->setGeometry(QRect(20, 230, 54, 84));
        sizePolicy.setHeightForWidth(table2_card_12->sizePolicy().hasHeightForWidth());
        table2_card_12->setSizePolicy(sizePolicy);
        table2_card_12->setMinimumSize(QSize(54, 84));
        table2_card_12->setMaximumSize(QSize(54, 84));
        table2_card_12->setStyleSheet(QString::fromUtf8("background: white;\n"
"border-width:3px;\n"
"border-color: black;\n"
""));
        table2_card_13 = new QPushButton(table2);
        table2_card_13->setObjectName(QString::fromUtf8("table2_card_13"));
        table2_card_13->setGeometry(QRect(20, 250, 54, 84));
        sizePolicy.setHeightForWidth(table2_card_13->sizePolicy().hasHeightForWidth());
        table2_card_13->setSizePolicy(sizePolicy);
        table2_card_13->setMinimumSize(QSize(54, 84));
        table2_card_13->setMaximumSize(QSize(54, 84));
        table2_card_13->setStyleSheet(QString::fromUtf8("background: white;\n"
"border-width:3px;\n"
"border-color: black;\n"
""));
        table2_card_1->raise();
        table2_card_2->raise();
        table2_card_3->raise();
        table2_card_4->raise();
        table2_card_5->raise();
        table2_card_6->raise();
        table2_card_7->raise();
        table2_card_8->raise();
        table2_card_9->raise();
        table2_card_10->raise();
        table2_card_11->raise();
        table2_card_12->raise();
        table2_card_13->raise();
        table3 = new QFrame(table);
        table3->setObjectName(QString::fromUtf8("table3"));
        table3->setEnabled(true);
        table3->setGeometry(QRect(150, 110, 81, 341));
        sizePolicy.setHeightForWidth(table3->sizePolicy().hasHeightForWidth());
        table3->setSizePolicy(sizePolicy);
        table3->setMinimumSize(QSize(72, 112));
        table3->setLayoutDirection(Qt::LeftToRight);
        table3->setAutoFillBackground(false);
        table3_card_1 = new QPushButton(table3);
        table3_card_1->setObjectName(QString::fromUtf8("table3_card_1"));
        table3_card_1->setGeometry(QRect(20, 10, 54, 84));
        sizePolicy.setHeightForWidth(table3_card_1->sizePolicy().hasHeightForWidth());
        table3_card_1->setSizePolicy(sizePolicy);
        table3_card_1->setMinimumSize(QSize(54, 84));
        table3_card_1->setMaximumSize(QSize(54, 84));
        table3_card_1->setStyleSheet(QString::fromUtf8("background: white;\n"
"border-width:3px;\n"
"border-color: black;\n"
""));
        table3_card_6 = new QPushButton(table3);
        table3_card_6->setObjectName(QString::fromUtf8("table3_card_6"));
        table3_card_6->setGeometry(QRect(20, 110, 54, 84));
        sizePolicy.setHeightForWidth(table3_card_6->sizePolicy().hasHeightForWidth());
        table3_card_6->setSizePolicy(sizePolicy);
        table3_card_6->setMinimumSize(QSize(54, 84));
        table3_card_6->setMaximumSize(QSize(54, 84));
        table3_card_6->setStyleSheet(QString::fromUtf8("background: white;\n"
"border-width:3px;\n"
"border-color: black;\n"
""));
        table3_card_5 = new QPushButton(table3);
        table3_card_5->setObjectName(QString::fromUtf8("table3_card_5"));
        table3_card_5->setGeometry(QRect(20, 90, 54, 84));
        sizePolicy.setHeightForWidth(table3_card_5->sizePolicy().hasHeightForWidth());
        table3_card_5->setSizePolicy(sizePolicy);
        table3_card_5->setMinimumSize(QSize(54, 84));
        table3_card_5->setMaximumSize(QSize(54, 84));
        table3_card_5->setStyleSheet(QString::fromUtf8("background: white;\n"
"border-width:3px;\n"
"border-color: black;\n"
""));
        table3_card_2 = new QPushButton(table3);
        table3_card_2->setObjectName(QString::fromUtf8("table3_card_2"));
        table3_card_2->setGeometry(QRect(20, 30, 54, 84));
        sizePolicy.setHeightForWidth(table3_card_2->sizePolicy().hasHeightForWidth());
        table3_card_2->setSizePolicy(sizePolicy);
        table3_card_2->setMinimumSize(QSize(54, 84));
        table3_card_2->setMaximumSize(QSize(54, 84));
        table3_card_2->setStyleSheet(QString::fromUtf8("background: white;\n"
"border-width:3px;\n"
"border-color: black;\n"
""));
        table3_card_8 = new QPushButton(table3);
        table3_card_8->setObjectName(QString::fromUtf8("table3_card_8"));
        table3_card_8->setGeometry(QRect(20, 150, 54, 84));
        sizePolicy.setHeightForWidth(table3_card_8->sizePolicy().hasHeightForWidth());
        table3_card_8->setSizePolicy(sizePolicy);
        table3_card_8->setMinimumSize(QSize(54, 84));
        table3_card_8->setMaximumSize(QSize(54, 84));
        table3_card_8->setStyleSheet(QString::fromUtf8("background: white;\n"
"border-width:3px;\n"
"border-color: black;\n"
""));
        table3_card_3 = new QPushButton(table3);
        table3_card_3->setObjectName(QString::fromUtf8("table3_card_3"));
        table3_card_3->setGeometry(QRect(20, 50, 54, 84));
        sizePolicy.setHeightForWidth(table3_card_3->sizePolicy().hasHeightForWidth());
        table3_card_3->setSizePolicy(sizePolicy);
        table3_card_3->setMinimumSize(QSize(54, 84));
        table3_card_3->setMaximumSize(QSize(54, 84));
        table3_card_3->setStyleSheet(QString::fromUtf8("background: white;\n"
"border-width:3px;\n"
"border-color: black;\n"
""));
        table3_card_4 = new QPushButton(table3);
        table3_card_4->setObjectName(QString::fromUtf8("table3_card_4"));
        table3_card_4->setGeometry(QRect(20, 70, 54, 84));
        sizePolicy.setHeightForWidth(table3_card_4->sizePolicy().hasHeightForWidth());
        table3_card_4->setSizePolicy(sizePolicy);
        table3_card_4->setMinimumSize(QSize(54, 84));
        table3_card_4->setMaximumSize(QSize(54, 84));
        table3_card_4->setStyleSheet(QString::fromUtf8("background: white;\n"
"border-width:3px;\n"
"border-color: black;\n"
""));
        table3_card_7 = new QPushButton(table3);
        table3_card_7->setObjectName(QString::fromUtf8("table3_card_7"));
        table3_card_7->setGeometry(QRect(20, 130, 54, 84));
        sizePolicy.setHeightForWidth(table3_card_7->sizePolicy().hasHeightForWidth());
        table3_card_7->setSizePolicy(sizePolicy);
        table3_card_7->setMinimumSize(QSize(54, 84));
        table3_card_7->setMaximumSize(QSize(54, 84));
        table3_card_7->setStyleSheet(QString::fromUtf8("background: white;\n"
"border-width:3px;\n"
"border-color: black;\n"
""));
        table3_card_9 = new QPushButton(table3);
        table3_card_9->setObjectName(QString::fromUtf8("table3_card_9"));
        table3_card_9->setGeometry(QRect(20, 170, 54, 84));
        sizePolicy.setHeightForWidth(table3_card_9->sizePolicy().hasHeightForWidth());
        table3_card_9->setSizePolicy(sizePolicy);
        table3_card_9->setMinimumSize(QSize(54, 84));
        table3_card_9->setMaximumSize(QSize(54, 84));
        table3_card_9->setStyleSheet(QString::fromUtf8("background: white;\n"
"border-width:3px;\n"
"border-color: black;\n"
""));
        table3_card_10 = new QPushButton(table3);
        table3_card_10->setObjectName(QString::fromUtf8("table3_card_10"));
        table3_card_10->setGeometry(QRect(20, 190, 54, 84));
        sizePolicy.setHeightForWidth(table3_card_10->sizePolicy().hasHeightForWidth());
        table3_card_10->setSizePolicy(sizePolicy);
        table3_card_10->setMinimumSize(QSize(54, 84));
        table3_card_10->setMaximumSize(QSize(54, 84));
        table3_card_10->setStyleSheet(QString::fromUtf8("background: white;\n"
"border-width:3px;\n"
"border-color: black;\n"
""));
        table3_card_11 = new QPushButton(table3);
        table3_card_11->setObjectName(QString::fromUtf8("table3_card_11"));
        table3_card_11->setGeometry(QRect(20, 210, 54, 84));
        sizePolicy.setHeightForWidth(table3_card_11->sizePolicy().hasHeightForWidth());
        table3_card_11->setSizePolicy(sizePolicy);
        table3_card_11->setMinimumSize(QSize(54, 84));
        table3_card_11->setMaximumSize(QSize(54, 84));
        table3_card_11->setStyleSheet(QString::fromUtf8("background: white;\n"
"border-width:3px;\n"
"border-color: black;\n"
""));
        table3_card_12 = new QPushButton(table3);
        table3_card_12->setObjectName(QString::fromUtf8("table3_card_12"));
        table3_card_12->setGeometry(QRect(20, 230, 54, 84));
        sizePolicy.setHeightForWidth(table3_card_12->sizePolicy().hasHeightForWidth());
        table3_card_12->setSizePolicy(sizePolicy);
        table3_card_12->setMinimumSize(QSize(54, 84));
        table3_card_12->setMaximumSize(QSize(54, 84));
        table3_card_12->setStyleSheet(QString::fromUtf8("background: white;\n"
"border-width:3px;\n"
"border-color: black;\n"
""));
        table3_card_13 = new QPushButton(table3);
        table3_card_13->setObjectName(QString::fromUtf8("table3_card_13"));
        table3_card_13->setGeometry(QRect(20, 250, 54, 84));
        sizePolicy.setHeightForWidth(table3_card_13->sizePolicy().hasHeightForWidth());
        table3_card_13->setSizePolicy(sizePolicy);
        table3_card_13->setMinimumSize(QSize(54, 84));
        table3_card_13->setMaximumSize(QSize(54, 84));
        table3_card_13->setStyleSheet(QString::fromUtf8("background: white;\n"
"border-width:3px;\n"
"border-color: black;\n"
""));
        table3_card_1->raise();
        table3_card_2->raise();
        table3_card_3->raise();
        table3_card_4->raise();
        table3_card_5->raise();
        table3_card_6->raise();
        table3_card_7->raise();
        table3_card_8->raise();
        table3_card_9->raise();
        table3_card_10->raise();
        table3_card_11->raise();
        table3_card_12->raise();
        table3_card_13->raise();
        table4 = new QGroupBox(table);
        table4->setObjectName(QString::fromUtf8("table4"));
        table4->setEnabled(true);
        table4->setGeometry(QRect(220, 110, 81, 341));
        sizePolicy.setHeightForWidth(table4->sizePolicy().hasHeightForWidth());
        table4->setSizePolicy(sizePolicy);
        table4->setMinimumSize(QSize(72, 112));
        table4->setLayoutDirection(Qt::LeftToRight);
        table4->setAutoFillBackground(false);
        table4->setAlignment(Qt::AlignJustify|Qt::AlignTop);
        table4_card_1 = new QPushButton(table4);
        table4_card_1->setObjectName(QString::fromUtf8("table4_card_1"));
        table4_card_1->setGeometry(QRect(20, 10, 54, 84));
        sizePolicy.setHeightForWidth(table4_card_1->sizePolicy().hasHeightForWidth());
        table4_card_1->setSizePolicy(sizePolicy);
        table4_card_1->setMinimumSize(QSize(54, 84));
        table4_card_1->setMaximumSize(QSize(54, 84));
        table4_card_1->setStyleSheet(QString::fromUtf8("background: white;\n"
"border-width:3px;\n"
"border-color: black;\n"
""));
        table4_card_6 = new QPushButton(table4);
        table4_card_6->setObjectName(QString::fromUtf8("table4_card_6"));
        table4_card_6->setGeometry(QRect(20, 110, 54, 84));
        sizePolicy.setHeightForWidth(table4_card_6->sizePolicy().hasHeightForWidth());
        table4_card_6->setSizePolicy(sizePolicy);
        table4_card_6->setMinimumSize(QSize(54, 84));
        table4_card_6->setMaximumSize(QSize(54, 84));
        table4_card_6->setStyleSheet(QString::fromUtf8("background: white;\n"
"border-width:3px;\n"
"border-color: black;\n"
""));
        table4_card_5 = new QPushButton(table4);
        table4_card_5->setObjectName(QString::fromUtf8("table4_card_5"));
        table4_card_5->setGeometry(QRect(20, 90, 54, 84));
        sizePolicy.setHeightForWidth(table4_card_5->sizePolicy().hasHeightForWidth());
        table4_card_5->setSizePolicy(sizePolicy);
        table4_card_5->setMinimumSize(QSize(54, 84));
        table4_card_5->setMaximumSize(QSize(54, 84));
        table4_card_5->setStyleSheet(QString::fromUtf8("background: white;\n"
"border-width:3px;\n"
"border-color: black;\n"
""));
        table4_card_2 = new QPushButton(table4);
        table4_card_2->setObjectName(QString::fromUtf8("table4_card_2"));
        table4_card_2->setGeometry(QRect(20, 30, 54, 84));
        sizePolicy.setHeightForWidth(table4_card_2->sizePolicy().hasHeightForWidth());
        table4_card_2->setSizePolicy(sizePolicy);
        table4_card_2->setMinimumSize(QSize(54, 84));
        table4_card_2->setMaximumSize(QSize(54, 84));
        table4_card_2->setStyleSheet(QString::fromUtf8("background: white;\n"
"border-width:3px;\n"
"border-color: black;\n"
""));
        table4_card_8 = new QPushButton(table4);
        table4_card_8->setObjectName(QString::fromUtf8("table4_card_8"));
        table4_card_8->setGeometry(QRect(20, 150, 54, 84));
        sizePolicy.setHeightForWidth(table4_card_8->sizePolicy().hasHeightForWidth());
        table4_card_8->setSizePolicy(sizePolicy);
        table4_card_8->setMinimumSize(QSize(54, 84));
        table4_card_8->setMaximumSize(QSize(54, 84));
        table4_card_8->setStyleSheet(QString::fromUtf8("background: white;\n"
"border-width:3px;\n"
"border-color: black;\n"
""));
        table4_card_3 = new QPushButton(table4);
        table4_card_3->setObjectName(QString::fromUtf8("table4_card_3"));
        table4_card_3->setGeometry(QRect(20, 50, 54, 84));
        sizePolicy.setHeightForWidth(table4_card_3->sizePolicy().hasHeightForWidth());
        table4_card_3->setSizePolicy(sizePolicy);
        table4_card_3->setMinimumSize(QSize(54, 84));
        table4_card_3->setMaximumSize(QSize(54, 84));
        table4_card_3->setStyleSheet(QString::fromUtf8("background: white;\n"
"border-width:3px;\n"
"border-color: black;\n"
""));
        table4_card_4 = new QPushButton(table4);
        table4_card_4->setObjectName(QString::fromUtf8("table4_card_4"));
        table4_card_4->setGeometry(QRect(20, 70, 54, 84));
        sizePolicy.setHeightForWidth(table4_card_4->sizePolicy().hasHeightForWidth());
        table4_card_4->setSizePolicy(sizePolicy);
        table4_card_4->setMinimumSize(QSize(54, 84));
        table4_card_4->setMaximumSize(QSize(54, 84));
        table4_card_4->setStyleSheet(QString::fromUtf8("background: white;\n"
"border-width:3px;\n"
"border-color: black;\n"
""));
        table4_card_7 = new QPushButton(table4);
        table4_card_7->setObjectName(QString::fromUtf8("table4_card_7"));
        table4_card_7->setGeometry(QRect(20, 130, 54, 84));
        sizePolicy.setHeightForWidth(table4_card_7->sizePolicy().hasHeightForWidth());
        table4_card_7->setSizePolicy(sizePolicy);
        table4_card_7->setMinimumSize(QSize(54, 84));
        table4_card_7->setMaximumSize(QSize(54, 84));
        table4_card_7->setStyleSheet(QString::fromUtf8("background: white;\n"
"border-width:3px;\n"
"border-color: black;\n"
""));
        table4_card_9 = new QPushButton(table4);
        table4_card_9->setObjectName(QString::fromUtf8("table4_card_9"));
        table4_card_9->setGeometry(QRect(20, 170, 54, 84));
        sizePolicy.setHeightForWidth(table4_card_9->sizePolicy().hasHeightForWidth());
        table4_card_9->setSizePolicy(sizePolicy);
        table4_card_9->setMinimumSize(QSize(54, 84));
        table4_card_9->setMaximumSize(QSize(54, 84));
        table4_card_9->setStyleSheet(QString::fromUtf8("background: white;\n"
"border-width:3px;\n"
"border-color: black;\n"
""));
        table4_card_10 = new QPushButton(table4);
        table4_card_10->setObjectName(QString::fromUtf8("table4_card_10"));
        table4_card_10->setGeometry(QRect(20, 190, 54, 84));
        sizePolicy.setHeightForWidth(table4_card_10->sizePolicy().hasHeightForWidth());
        table4_card_10->setSizePolicy(sizePolicy);
        table4_card_10->setMinimumSize(QSize(54, 84));
        table4_card_10->setMaximumSize(QSize(54, 84));
        table4_card_10->setStyleSheet(QString::fromUtf8("background: white;\n"
"border-width:3px;\n"
"border-color: black;\n"
""));
        table4_card_11 = new QPushButton(table4);
        table4_card_11->setObjectName(QString::fromUtf8("table4_card_11"));
        table4_card_11->setGeometry(QRect(20, 210, 54, 84));
        sizePolicy.setHeightForWidth(table4_card_11->sizePolicy().hasHeightForWidth());
        table4_card_11->setSizePolicy(sizePolicy);
        table4_card_11->setMinimumSize(QSize(54, 84));
        table4_card_11->setMaximumSize(QSize(54, 84));
        table4_card_11->setStyleSheet(QString::fromUtf8("background: white;\n"
"border-width:3px;\n"
"border-color: black;\n"
""));
        table4_card_12 = new QPushButton(table4);
        table4_card_12->setObjectName(QString::fromUtf8("table4_card_12"));
        table4_card_12->setGeometry(QRect(20, 230, 54, 84));
        sizePolicy.setHeightForWidth(table4_card_12->sizePolicy().hasHeightForWidth());
        table4_card_12->setSizePolicy(sizePolicy);
        table4_card_12->setMinimumSize(QSize(54, 84));
        table4_card_12->setMaximumSize(QSize(54, 84));
        table4_card_12->setStyleSheet(QString::fromUtf8("background: white;\n"
"border-width:3px;\n"
"border-color: black;\n"
""));
        table4_card_13 = new QPushButton(table4);
        table4_card_13->setObjectName(QString::fromUtf8("table4_card_13"));
        table4_card_13->setGeometry(QRect(20, 250, 54, 84));
        sizePolicy.setHeightForWidth(table4_card_13->sizePolicy().hasHeightForWidth());
        table4_card_13->setSizePolicy(sizePolicy);
        table4_card_13->setMinimumSize(QSize(54, 84));
        table4_card_13->setMaximumSize(QSize(54, 84));
        table4_card_13->setStyleSheet(QString::fromUtf8("background: white;\n"
"border-width:3px;\n"
"border-color: black;\n"
""));
        table4_card_1->raise();
        table4_card_2->raise();
        table4_card_3->raise();
        table4_card_4->raise();
        table4_card_5->raise();
        table4_card_6->raise();
        table4_card_7->raise();
        table4_card_8->raise();
        table4_card_9->raise();
        table4_card_10->raise();
        table4_card_11->raise();
        table4_card_12->raise();
        table4_card_13->raise();
        table5 = new QGroupBox(table);
        table5->setObjectName(QString::fromUtf8("table5"));
        table5->setEnabled(true);
        table5->setGeometry(QRect(290, 110, 81, 341));
        sizePolicy.setHeightForWidth(table5->sizePolicy().hasHeightForWidth());
        table5->setSizePolicy(sizePolicy);
        table5->setMinimumSize(QSize(72, 112));
        table5->setLayoutDirection(Qt::LeftToRight);
        table5->setAutoFillBackground(false);
        table5->setAlignment(Qt::AlignJustify|Qt::AlignTop);
        table5_card_1 = new QPushButton(table5);
        table5_card_1->setObjectName(QString::fromUtf8("table5_card_1"));
        table5_card_1->setGeometry(QRect(20, 10, 54, 84));
        sizePolicy.setHeightForWidth(table5_card_1->sizePolicy().hasHeightForWidth());
        table5_card_1->setSizePolicy(sizePolicy);
        table5_card_1->setMinimumSize(QSize(54, 84));
        table5_card_1->setMaximumSize(QSize(54, 84));
        table5_card_1->setStyleSheet(QString::fromUtf8("background: white;\n"
"border-width:3px;\n"
"border-color: black;\n"
""));
        table5_card_6 = new QPushButton(table5);
        table5_card_6->setObjectName(QString::fromUtf8("table5_card_6"));
        table5_card_6->setGeometry(QRect(20, 110, 54, 84));
        sizePolicy.setHeightForWidth(table5_card_6->sizePolicy().hasHeightForWidth());
        table5_card_6->setSizePolicy(sizePolicy);
        table5_card_6->setMinimumSize(QSize(54, 84));
        table5_card_6->setMaximumSize(QSize(54, 84));
        table5_card_6->setStyleSheet(QString::fromUtf8("background: white;\n"
"border-width:3px;\n"
"border-color: black;\n"
""));
        table5_card_5 = new QPushButton(table5);
        table5_card_5->setObjectName(QString::fromUtf8("table5_card_5"));
        table5_card_5->setGeometry(QRect(20, 90, 54, 84));
        sizePolicy.setHeightForWidth(table5_card_5->sizePolicy().hasHeightForWidth());
        table5_card_5->setSizePolicy(sizePolicy);
        table5_card_5->setMinimumSize(QSize(54, 84));
        table5_card_5->setMaximumSize(QSize(54, 84));
        table5_card_5->setStyleSheet(QString::fromUtf8("background: white;\n"
"border-width:3px;\n"
"border-color: black;\n"
""));
        table5_card_2 = new QPushButton(table5);
        table5_card_2->setObjectName(QString::fromUtf8("table5_card_2"));
        table5_card_2->setGeometry(QRect(20, 30, 54, 84));
        sizePolicy.setHeightForWidth(table5_card_2->sizePolicy().hasHeightForWidth());
        table5_card_2->setSizePolicy(sizePolicy);
        table5_card_2->setMinimumSize(QSize(54, 84));
        table5_card_2->setMaximumSize(QSize(54, 84));
        table5_card_2->setStyleSheet(QString::fromUtf8("background: white;\n"
"border-width:3px;\n"
"border-color: black;\n"
""));
        table5_card_8 = new QPushButton(table5);
        table5_card_8->setObjectName(QString::fromUtf8("table5_card_8"));
        table5_card_8->setGeometry(QRect(20, 150, 54, 84));
        sizePolicy.setHeightForWidth(table5_card_8->sizePolicy().hasHeightForWidth());
        table5_card_8->setSizePolicy(sizePolicy);
        table5_card_8->setMinimumSize(QSize(54, 84));
        table5_card_8->setMaximumSize(QSize(54, 84));
        table5_card_8->setStyleSheet(QString::fromUtf8("background: white;\n"
"border-width:3px;\n"
"border-color: black;\n"
""));
        table5_card_3 = new QPushButton(table5);
        table5_card_3->setObjectName(QString::fromUtf8("table5_card_3"));
        table5_card_3->setGeometry(QRect(20, 50, 54, 84));
        sizePolicy.setHeightForWidth(table5_card_3->sizePolicy().hasHeightForWidth());
        table5_card_3->setSizePolicy(sizePolicy);
        table5_card_3->setMinimumSize(QSize(54, 84));
        table5_card_3->setMaximumSize(QSize(54, 84));
        table5_card_3->setStyleSheet(QString::fromUtf8("background: white;\n"
"border-width:3px;\n"
"border-color: black;\n"
""));
        table5_card_4 = new QPushButton(table5);
        table5_card_4->setObjectName(QString::fromUtf8("table5_card_4"));
        table5_card_4->setGeometry(QRect(20, 70, 54, 84));
        sizePolicy.setHeightForWidth(table5_card_4->sizePolicy().hasHeightForWidth());
        table5_card_4->setSizePolicy(sizePolicy);
        table5_card_4->setMinimumSize(QSize(54, 84));
        table5_card_4->setMaximumSize(QSize(54, 84));
        table5_card_4->setStyleSheet(QString::fromUtf8("background: white;\n"
"border-width:3px;\n"
"border-color: black;\n"
""));
        table5_card_7 = new QPushButton(table5);
        table5_card_7->setObjectName(QString::fromUtf8("table5_card_7"));
        table5_card_7->setGeometry(QRect(20, 130, 54, 84));
        sizePolicy.setHeightForWidth(table5_card_7->sizePolicy().hasHeightForWidth());
        table5_card_7->setSizePolicy(sizePolicy);
        table5_card_7->setMinimumSize(QSize(54, 84));
        table5_card_7->setMaximumSize(QSize(54, 84));
        table5_card_7->setStyleSheet(QString::fromUtf8("background: white;\n"
"border-width:3px;\n"
"border-color: black;\n"
""));
        table5_card_9 = new QPushButton(table5);
        table5_card_9->setObjectName(QString::fromUtf8("table5_card_9"));
        table5_card_9->setGeometry(QRect(20, 170, 54, 84));
        sizePolicy.setHeightForWidth(table5_card_9->sizePolicy().hasHeightForWidth());
        table5_card_9->setSizePolicy(sizePolicy);
        table5_card_9->setMinimumSize(QSize(54, 84));
        table5_card_9->setMaximumSize(QSize(54, 84));
        table5_card_9->setStyleSheet(QString::fromUtf8("background: white;\n"
"border-width:3px;\n"
"border-color: black;\n"
""));
        table5_card_10 = new QPushButton(table5);
        table5_card_10->setObjectName(QString::fromUtf8("table5_card_10"));
        table5_card_10->setGeometry(QRect(20, 190, 54, 84));
        sizePolicy.setHeightForWidth(table5_card_10->sizePolicy().hasHeightForWidth());
        table5_card_10->setSizePolicy(sizePolicy);
        table5_card_10->setMinimumSize(QSize(54, 84));
        table5_card_10->setMaximumSize(QSize(54, 84));
        table5_card_10->setStyleSheet(QString::fromUtf8("background: white;\n"
"border-width:3px;\n"
"border-color: black;\n"
""));
        table5_card_11 = new QPushButton(table5);
        table5_card_11->setObjectName(QString::fromUtf8("table5_card_11"));
        table5_card_11->setGeometry(QRect(20, 210, 54, 84));
        sizePolicy.setHeightForWidth(table5_card_11->sizePolicy().hasHeightForWidth());
        table5_card_11->setSizePolicy(sizePolicy);
        table5_card_11->setMinimumSize(QSize(54, 84));
        table5_card_11->setMaximumSize(QSize(54, 84));
        table5_card_11->setStyleSheet(QString::fromUtf8("background: white;\n"
"border-width:3px;\n"
"border-color: black;\n"
""));
        table5_card_12 = new QPushButton(table5);
        table5_card_12->setObjectName(QString::fromUtf8("table5_card_12"));
        table5_card_12->setGeometry(QRect(20, 230, 54, 84));
        sizePolicy.setHeightForWidth(table5_card_12->sizePolicy().hasHeightForWidth());
        table5_card_12->setSizePolicy(sizePolicy);
        table5_card_12->setMinimumSize(QSize(54, 84));
        table5_card_12->setMaximumSize(QSize(54, 84));
        table5_card_12->setStyleSheet(QString::fromUtf8("background: white;\n"
"border-width:3px;\n"
"border-color: black;\n"
""));
        table5_card_13 = new QPushButton(table5);
        table5_card_13->setObjectName(QString::fromUtf8("table5_card_13"));
        table5_card_13->setGeometry(QRect(20, 250, 54, 84));
        sizePolicy.setHeightForWidth(table5_card_13->sizePolicy().hasHeightForWidth());
        table5_card_13->setSizePolicy(sizePolicy);
        table5_card_13->setMinimumSize(QSize(54, 84));
        table5_card_13->setMaximumSize(QSize(54, 84));
        table5_card_13->setStyleSheet(QString::fromUtf8("background: white;\n"
"border-width:3px;\n"
"border-color: black;\n"
""));
        table5_card_1->raise();
        table5_card_2->raise();
        table5_card_3->raise();
        table5_card_4->raise();
        table5_card_5->raise();
        table5_card_6->raise();
        table5_card_7->raise();
        table5_card_8->raise();
        table5_card_9->raise();
        table5_card_10->raise();
        table5_card_11->raise();
        table5_card_12->raise();
        table5_card_13->raise();
        table6 = new QGroupBox(table);
        table6->setObjectName(QString::fromUtf8("table6"));
        table6->setEnabled(true);
        table6->setGeometry(QRect(360, 110, 81, 341));
        sizePolicy.setHeightForWidth(table6->sizePolicy().hasHeightForWidth());
        table6->setSizePolicy(sizePolicy);
        table6->setMinimumSize(QSize(72, 112));
        table6->setLayoutDirection(Qt::LeftToRight);
        table6->setAutoFillBackground(false);
        table6->setAlignment(Qt::AlignJustify|Qt::AlignTop);
        table6_card_1 = new QPushButton(table6);
        table6_card_1->setObjectName(QString::fromUtf8("table6_card_1"));
        table6_card_1->setGeometry(QRect(20, 10, 54, 84));
        sizePolicy.setHeightForWidth(table6_card_1->sizePolicy().hasHeightForWidth());
        table6_card_1->setSizePolicy(sizePolicy);
        table6_card_1->setMinimumSize(QSize(54, 84));
        table6_card_1->setMaximumSize(QSize(54, 84));
        table6_card_1->setStyleSheet(QString::fromUtf8("background: white;\n"
"border-width:3px;\n"
"border-color: black;\n"
""));
        table6_card_6 = new QPushButton(table6);
        table6_card_6->setObjectName(QString::fromUtf8("table6_card_6"));
        table6_card_6->setGeometry(QRect(20, 110, 54, 84));
        sizePolicy.setHeightForWidth(table6_card_6->sizePolicy().hasHeightForWidth());
        table6_card_6->setSizePolicy(sizePolicy);
        table6_card_6->setMinimumSize(QSize(54, 84));
        table6_card_6->setMaximumSize(QSize(54, 84));
        table6_card_6->setStyleSheet(QString::fromUtf8("background: white;\n"
"border-width:3px;\n"
"border-color: black;\n"
""));
        table6_card_5 = new QPushButton(table6);
        table6_card_5->setObjectName(QString::fromUtf8("table6_card_5"));
        table6_card_5->setGeometry(QRect(20, 90, 54, 84));
        sizePolicy.setHeightForWidth(table6_card_5->sizePolicy().hasHeightForWidth());
        table6_card_5->setSizePolicy(sizePolicy);
        table6_card_5->setMinimumSize(QSize(54, 84));
        table6_card_5->setMaximumSize(QSize(54, 84));
        table6_card_5->setStyleSheet(QString::fromUtf8("background: white;\n"
"border-width:3px;\n"
"border-color: black;\n"
""));
        table6_card_2 = new QPushButton(table6);
        table6_card_2->setObjectName(QString::fromUtf8("table6_card_2"));
        table6_card_2->setGeometry(QRect(20, 30, 54, 84));
        sizePolicy.setHeightForWidth(table6_card_2->sizePolicy().hasHeightForWidth());
        table6_card_2->setSizePolicy(sizePolicy);
        table6_card_2->setMinimumSize(QSize(54, 84));
        table6_card_2->setMaximumSize(QSize(54, 84));
        table6_card_2->setStyleSheet(QString::fromUtf8("background: white;\n"
"border-width:3px;\n"
"border-color: black;\n"
""));
        table6_card_8 = new QPushButton(table6);
        table6_card_8->setObjectName(QString::fromUtf8("table6_card_8"));
        table6_card_8->setGeometry(QRect(20, 150, 54, 84));
        sizePolicy.setHeightForWidth(table6_card_8->sizePolicy().hasHeightForWidth());
        table6_card_8->setSizePolicy(sizePolicy);
        table6_card_8->setMinimumSize(QSize(54, 84));
        table6_card_8->setMaximumSize(QSize(54, 84));
        table6_card_8->setStyleSheet(QString::fromUtf8("background: white;\n"
"border-width:3px;\n"
"border-color: black;\n"
""));
        table6_card_3 = new QPushButton(table6);
        table6_card_3->setObjectName(QString::fromUtf8("table6_card_3"));
        table6_card_3->setGeometry(QRect(20, 50, 54, 84));
        sizePolicy.setHeightForWidth(table6_card_3->sizePolicy().hasHeightForWidth());
        table6_card_3->setSizePolicy(sizePolicy);
        table6_card_3->setMinimumSize(QSize(54, 84));
        table6_card_3->setMaximumSize(QSize(54, 84));
        table6_card_3->setStyleSheet(QString::fromUtf8("background: white;\n"
"border-width:3px;\n"
"border-color: black;\n"
""));
        table6_card_4 = new QPushButton(table6);
        table6_card_4->setObjectName(QString::fromUtf8("table6_card_4"));
        table6_card_4->setGeometry(QRect(20, 70, 54, 84));
        sizePolicy.setHeightForWidth(table6_card_4->sizePolicy().hasHeightForWidth());
        table6_card_4->setSizePolicy(sizePolicy);
        table6_card_4->setMinimumSize(QSize(54, 84));
        table6_card_4->setMaximumSize(QSize(54, 84));
        table6_card_4->setStyleSheet(QString::fromUtf8("background: white;\n"
"border-width:3px;\n"
"border-color: black;\n"
""));
        table6_card_7 = new QPushButton(table6);
        table6_card_7->setObjectName(QString::fromUtf8("table6_card_7"));
        table6_card_7->setGeometry(QRect(20, 130, 54, 84));
        sizePolicy.setHeightForWidth(table6_card_7->sizePolicy().hasHeightForWidth());
        table6_card_7->setSizePolicy(sizePolicy);
        table6_card_7->setMinimumSize(QSize(54, 84));
        table6_card_7->setMaximumSize(QSize(54, 84));
        table6_card_7->setStyleSheet(QString::fromUtf8("background: white;\n"
"border-width:3px;\n"
"border-color: black;\n"
""));
        table6_card_9 = new QPushButton(table6);
        table6_card_9->setObjectName(QString::fromUtf8("table6_card_9"));
        table6_card_9->setGeometry(QRect(20, 170, 54, 84));
        sizePolicy.setHeightForWidth(table6_card_9->sizePolicy().hasHeightForWidth());
        table6_card_9->setSizePolicy(sizePolicy);
        table6_card_9->setMinimumSize(QSize(54, 84));
        table6_card_9->setMaximumSize(QSize(54, 84));
        table6_card_9->setStyleSheet(QString::fromUtf8("background: white;\n"
"border-width:3px;\n"
"border-color: black;\n"
""));
        table6_card_10 = new QPushButton(table6);
        table6_card_10->setObjectName(QString::fromUtf8("table6_card_10"));
        table6_card_10->setGeometry(QRect(20, 190, 54, 84));
        sizePolicy.setHeightForWidth(table6_card_10->sizePolicy().hasHeightForWidth());
        table6_card_10->setSizePolicy(sizePolicy);
        table6_card_10->setMinimumSize(QSize(54, 84));
        table6_card_10->setMaximumSize(QSize(54, 84));
        table6_card_10->setStyleSheet(QString::fromUtf8("background: white;\n"
"border-width:3px;\n"
"border-color: black;\n"
""));
        table6_card_11 = new QPushButton(table6);
        table6_card_11->setObjectName(QString::fromUtf8("table6_card_11"));
        table6_card_11->setGeometry(QRect(20, 210, 54, 84));
        sizePolicy.setHeightForWidth(table6_card_11->sizePolicy().hasHeightForWidth());
        table6_card_11->setSizePolicy(sizePolicy);
        table6_card_11->setMinimumSize(QSize(54, 84));
        table6_card_11->setMaximumSize(QSize(54, 84));
        table6_card_11->setStyleSheet(QString::fromUtf8("background: white;\n"
"border-width:3px;\n"
"border-color: black;\n"
""));
        table6_card_12 = new QPushButton(table6);
        table6_card_12->setObjectName(QString::fromUtf8("table6_card_12"));
        table6_card_12->setGeometry(QRect(20, 230, 54, 84));
        sizePolicy.setHeightForWidth(table6_card_12->sizePolicy().hasHeightForWidth());
        table6_card_12->setSizePolicy(sizePolicy);
        table6_card_12->setMinimumSize(QSize(54, 84));
        table6_card_12->setMaximumSize(QSize(54, 84));
        table6_card_12->setStyleSheet(QString::fromUtf8("background: white;\n"
"border-width:3px;\n"
"border-color: black;\n"
""));
        table6_card_13 = new QPushButton(table6);
        table6_card_13->setObjectName(QString::fromUtf8("table6_card_13"));
        table6_card_13->setGeometry(QRect(20, 250, 54, 84));
        sizePolicy.setHeightForWidth(table6_card_13->sizePolicy().hasHeightForWidth());
        table6_card_13->setSizePolicy(sizePolicy);
        table6_card_13->setMinimumSize(QSize(54, 84));
        table6_card_13->setMaximumSize(QSize(54, 84));
        table6_card_13->setStyleSheet(QString::fromUtf8("background: white;\n"
"border-width:3px;\n"
"border-color: black;\n"
""));
        table6_card_1->raise();
        table6_card_2->raise();
        table6_card_3->raise();
        table6_card_4->raise();
        table6_card_5->raise();
        table6_card_6->raise();
        table6_card_7->raise();
        table6_card_8->raise();
        table6_card_9->raise();
        table6_card_10->raise();
        table6_card_11->raise();
        table6_card_12->raise();
        table6_card_13->raise();
        table7 = new QFrame(table);
        table7->setObjectName(QString::fromUtf8("table7"));
        table7->setEnabled(true);
        table7->setGeometry(QRect(430, 110, 81, 341));
        sizePolicy.setHeightForWidth(table7->sizePolicy().hasHeightForWidth());
        table7->setSizePolicy(sizePolicy);
        table7->setMinimumSize(QSize(72, 112));
        table7->setLayoutDirection(Qt::LeftToRight);
        table7->setAutoFillBackground(false);
        table7->setFrameShape(QFrame::NoFrame);
        table7->setFrameShadow(QFrame::Raised);
        table7->setLineWidth(1);
        table7->setMidLineWidth(0);
        table7_card_1 = new QPushButton(table7);
        table7_card_1->setObjectName(QString::fromUtf8("table7_card_1"));
        table7_card_1->setGeometry(QRect(20, 10, 54, 84));
        sizePolicy.setHeightForWidth(table7_card_1->sizePolicy().hasHeightForWidth());
        table7_card_1->setSizePolicy(sizePolicy);
        table7_card_1->setMinimumSize(QSize(54, 84));
        table7_card_1->setMaximumSize(QSize(54, 84));
        table7_card_1->setStyleSheet(QString::fromUtf8("background: white;\n"
"border-width:3px;\n"
"border-color: black;\n"
""));
        table7_card_6 = new QPushButton(table7);
        table7_card_6->setObjectName(QString::fromUtf8("table7_card_6"));
        table7_card_6->setGeometry(QRect(20, 110, 54, 84));
        sizePolicy.setHeightForWidth(table7_card_6->sizePolicy().hasHeightForWidth());
        table7_card_6->setSizePolicy(sizePolicy);
        table7_card_6->setMinimumSize(QSize(54, 84));
        table7_card_6->setMaximumSize(QSize(54, 84));
        table7_card_6->setStyleSheet(QString::fromUtf8("background: white;\n"
"border-width:3px;\n"
"border-color: black;\n"
""));
        table7_card_5 = new QPushButton(table7);
        table7_card_5->setObjectName(QString::fromUtf8("table7_card_5"));
        table7_card_5->setGeometry(QRect(20, 90, 54, 84));
        sizePolicy.setHeightForWidth(table7_card_5->sizePolicy().hasHeightForWidth());
        table7_card_5->setSizePolicy(sizePolicy);
        table7_card_5->setMinimumSize(QSize(54, 84));
        table7_card_5->setMaximumSize(QSize(54, 84));
        table7_card_5->setStyleSheet(QString::fromUtf8("background: white;\n"
"border-width:3px;\n"
"border-color: black;\n"
""));
        table7_card_2 = new QPushButton(table7);
        table7_card_2->setObjectName(QString::fromUtf8("table7_card_2"));
        table7_card_2->setGeometry(QRect(20, 30, 54, 84));
        sizePolicy.setHeightForWidth(table7_card_2->sizePolicy().hasHeightForWidth());
        table7_card_2->setSizePolicy(sizePolicy);
        table7_card_2->setMinimumSize(QSize(54, 84));
        table7_card_2->setMaximumSize(QSize(54, 84));
        table7_card_2->setStyleSheet(QString::fromUtf8("background: white;\n"
"border-width:3px;\n"
"border-color: black;\n"
""));
        table7_card_8 = new QPushButton(table7);
        table7_card_8->setObjectName(QString::fromUtf8("table7_card_8"));
        table7_card_8->setGeometry(QRect(20, 150, 54, 84));
        sizePolicy.setHeightForWidth(table7_card_8->sizePolicy().hasHeightForWidth());
        table7_card_8->setSizePolicy(sizePolicy);
        table7_card_8->setMinimumSize(QSize(54, 84));
        table7_card_8->setMaximumSize(QSize(54, 84));
        table7_card_8->setStyleSheet(QString::fromUtf8("background: white;\n"
"border-width:3px;\n"
"border-color: black;\n"
""));
        table7_card_3 = new QPushButton(table7);
        table7_card_3->setObjectName(QString::fromUtf8("table7_card_3"));
        table7_card_3->setGeometry(QRect(20, 50, 54, 84));
        sizePolicy.setHeightForWidth(table7_card_3->sizePolicy().hasHeightForWidth());
        table7_card_3->setSizePolicy(sizePolicy);
        table7_card_3->setMinimumSize(QSize(54, 84));
        table7_card_3->setMaximumSize(QSize(54, 84));
        table7_card_3->setStyleSheet(QString::fromUtf8("background: white;\n"
"border-width:3px;\n"
"border-color: black;\n"
""));
        table7_card_4 = new QPushButton(table7);
        table7_card_4->setObjectName(QString::fromUtf8("table7_card_4"));
        table7_card_4->setGeometry(QRect(20, 70, 54, 84));
        sizePolicy.setHeightForWidth(table7_card_4->sizePolicy().hasHeightForWidth());
        table7_card_4->setSizePolicy(sizePolicy);
        table7_card_4->setMinimumSize(QSize(54, 84));
        table7_card_4->setMaximumSize(QSize(54, 84));
        table7_card_4->setStyleSheet(QString::fromUtf8("background: white;\n"
"border-width:3px;\n"
"border-color: black;\n"
""));
        table7_card_7 = new QPushButton(table7);
        table7_card_7->setObjectName(QString::fromUtf8("table7_card_7"));
        table7_card_7->setGeometry(QRect(20, 130, 54, 84));
        sizePolicy.setHeightForWidth(table7_card_7->sizePolicy().hasHeightForWidth());
        table7_card_7->setSizePolicy(sizePolicy);
        table7_card_7->setMinimumSize(QSize(54, 84));
        table7_card_7->setMaximumSize(QSize(54, 84));
        table7_card_7->setStyleSheet(QString::fromUtf8("background: white;\n"
"border-width:3px;\n"
"border-color: black;\n"
""));
        table7_card_9 = new QPushButton(table7);
        table7_card_9->setObjectName(QString::fromUtf8("table7_card_9"));
        table7_card_9->setGeometry(QRect(20, 170, 54, 84));
        sizePolicy.setHeightForWidth(table7_card_9->sizePolicy().hasHeightForWidth());
        table7_card_9->setSizePolicy(sizePolicy);
        table7_card_9->setMinimumSize(QSize(54, 84));
        table7_card_9->setMaximumSize(QSize(54, 84));
        table7_card_9->setStyleSheet(QString::fromUtf8("background: white;\n"
"border-width:3px;\n"
"border-color: black;\n"
""));
        table7_card_10 = new QPushButton(table7);
        table7_card_10->setObjectName(QString::fromUtf8("table7_card_10"));
        table7_card_10->setGeometry(QRect(20, 190, 54, 84));
        sizePolicy.setHeightForWidth(table7_card_10->sizePolicy().hasHeightForWidth());
        table7_card_10->setSizePolicy(sizePolicy);
        table7_card_10->setMinimumSize(QSize(54, 84));
        table7_card_10->setMaximumSize(QSize(54, 84));
        table7_card_10->setStyleSheet(QString::fromUtf8("background: white;\n"
"border-width:3px;\n"
"border-color: black;\n"
""));
        table7_card_11 = new QPushButton(table7);
        table7_card_11->setObjectName(QString::fromUtf8("table7_card_11"));
        table7_card_11->setGeometry(QRect(20, 210, 54, 84));
        sizePolicy.setHeightForWidth(table7_card_11->sizePolicy().hasHeightForWidth());
        table7_card_11->setSizePolicy(sizePolicy);
        table7_card_11->setMinimumSize(QSize(54, 84));
        table7_card_11->setMaximumSize(QSize(54, 84));
        table7_card_11->setStyleSheet(QString::fromUtf8("background: white;\n"
"border-width:3px;\n"
"border-color: black;\n"
""));
        table7_card_12 = new QPushButton(table7);
        table7_card_12->setObjectName(QString::fromUtf8("table7_card_12"));
        table7_card_12->setGeometry(QRect(20, 230, 54, 84));
        sizePolicy.setHeightForWidth(table7_card_12->sizePolicy().hasHeightForWidth());
        table7_card_12->setSizePolicy(sizePolicy);
        table7_card_12->setMinimumSize(QSize(54, 84));
        table7_card_12->setMaximumSize(QSize(54, 84));
        table7_card_12->setStyleSheet(QString::fromUtf8("background: white;\n"
"border-width:3px;\n"
"border-color: black;\n"
""));
        table7_card_13 = new QPushButton(table7);
        table7_card_13->setObjectName(QString::fromUtf8("table7_card_13"));
        table7_card_13->setGeometry(QRect(20, 250, 54, 84));
        sizePolicy.setHeightForWidth(table7_card_13->sizePolicy().hasHeightForWidth());
        table7_card_13->setSizePolicy(sizePolicy);
        table7_card_13->setMinimumSize(QSize(54, 84));
        table7_card_13->setMaximumSize(QSize(54, 84));
        table7_card_13->setStyleSheet(QString::fromUtf8("background: white;\n"
"border-width:3px;\n"
"border-color: black;\n"
""));
        table7_card_1->raise();
        table7_card_2->raise();
        table7_card_3->raise();
        table7_card_4->raise();
        table7_card_5->raise();
        table7_card_6->raise();
        table7_card_7->raise();
        table7_card_8->raise();
        table7_card_9->raise();
        table7_card_10->raise();
        table7_card_11->raise();
        table7_card_12->raise();
        table7_card_13->raise();
        newGame = new QPushButton(table);
        newGame->setObjectName(QString::fromUtf8("newGame"));
        newGame->setGeometry(QRect(30, 450, 87, 29));
        newGame->setStyleSheet(QString::fromUtf8(""));
        loadGame = new QPushButton(table);
        loadGame->setObjectName(QString::fromUtf8("loadGame"));
        loadGame->setGeometry(QRect(130, 450, 87, 29));
        saveGame = new QPushButton(table);
        saveGame->setObjectName(QString::fromUtf8("saveGame"));
        saveGame->setGeometry(QRect(230, 450, 87, 29));
        layoutWidget->raise();
        newGame->raise();
        table7->raise();
        table6->raise();
        table5->raise();
        table4->raise();
        table3->raise();
        table2->raise();
        table1->raise();
        loadGame->raise();
        saveGame->raise();
        MainWindow->setCentralWidget(centralWidget);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", 0, QApplication::UnicodeUTF8));
        deck_back->setText(QString());
        deck_face->setText(QString());
        foundation1->setText(QString());
        foundation2->setText(QString());
        foundation3->setText(QString());
        foundation4->setText(QString());
        table1->setTitle(QString());
        table1_card_1->setText(QString());
        table1_card_6->setText(QString());
        table1_card_5->setText(QString());
        table1_card_2->setText(QString());
        table1_card_8->setText(QString());
        table1_card_3->setText(QString());
        table1_card_4->setText(QString());
        table1_card_7->setText(QString());
        table1_card_9->setText(QString());
        table1_card_10->setText(QString());
        table1_card_11->setText(QString());
        table1_card_12->setText(QString());
        table1_card_13->setText(QString());
        table2->setTitle(QString());
        table2_card_1->setText(QString());
        table2_card_6->setText(QString());
        table2_card_5->setText(QString());
        table2_card_2->setText(QString());
        table2_card_8->setText(QString());
        table2_card_3->setText(QString());
        table2_card_4->setText(QString());
        table2_card_7->setText(QString());
        table2_card_9->setText(QString());
        table2_card_10->setText(QString());
        table2_card_11->setText(QString());
        table2_card_12->setText(QString());
        table2_card_13->setText(QString());
        table3_card_1->setText(QString());
        table3_card_6->setText(QString());
        table3_card_5->setText(QString());
        table3_card_2->setText(QString());
        table3_card_8->setText(QString());
        table3_card_3->setText(QString());
        table3_card_4->setText(QString());
        table3_card_7->setText(QString());
        table3_card_9->setText(QString());
        table3_card_10->setText(QString());
        table3_card_11->setText(QString());
        table3_card_12->setText(QString());
        table3_card_13->setText(QString());
        table4->setTitle(QString());
        table4_card_1->setText(QString());
        table4_card_6->setText(QString());
        table4_card_5->setText(QString());
        table4_card_2->setText(QString());
        table4_card_8->setText(QString());
        table4_card_3->setText(QString());
        table4_card_4->setText(QString());
        table4_card_7->setText(QString());
        table4_card_9->setText(QString());
        table4_card_10->setText(QString());
        table4_card_11->setText(QString());
        table4_card_12->setText(QString());
        table4_card_13->setText(QString());
        table5->setTitle(QString());
        table5_card_1->setText(QString());
        table5_card_6->setText(QString());
        table5_card_5->setText(QString());
        table5_card_2->setText(QString());
        table5_card_8->setText(QString());
        table5_card_3->setText(QString());
        table5_card_4->setText(QString());
        table5_card_7->setText(QString());
        table5_card_9->setText(QString());
        table5_card_10->setText(QString());
        table5_card_11->setText(QString());
        table5_card_12->setText(QString());
        table5_card_13->setText(QString());
        table6->setTitle(QString());
        table6_card_1->setText(QString());
        table6_card_6->setText(QString());
        table6_card_5->setText(QString());
        table6_card_2->setText(QString());
        table6_card_8->setText(QString());
        table6_card_3->setText(QString());
        table6_card_4->setText(QString());
        table6_card_7->setText(QString());
        table6_card_9->setText(QString());
        table6_card_10->setText(QString());
        table6_card_11->setText(QString());
        table6_card_12->setText(QString());
        table6_card_13->setText(QString());
        table7_card_1->setText(QString());
        table7_card_6->setText(QString());
        table7_card_5->setText(QString());
        table7_card_2->setText(QString());
        table7_card_8->setText(QString());
        table7_card_3->setText(QString());
        table7_card_4->setText(QString());
        table7_card_7->setText(QString());
        table7_card_9->setText(QString());
        table7_card_10->setText(QString());
        table7_card_11->setText(QString());
        table7_card_12->setText(QString());
        table7_card_13->setText(QString());
        newGame->setText(QApplication::translate("MainWindow", "New Game", 0, QApplication::UnicodeUTF8));
        loadGame->setText(QApplication::translate("MainWindow", "Load Game", 0, QApplication::UnicodeUTF8));
        saveGame->setText(QApplication::translate("MainWindow", "Save Game", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
