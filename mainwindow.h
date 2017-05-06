#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include "card.h"
#include "table.h"
#include "save.h"

#include <QMainWindow>
#include <QPushButton>

namespace Ui {
class MainWindow;
}

struct CardInfo{
    Card *card;
    QPushButton *button;
    unsigned where = -1;    //0 deck,   foundation 1,   tableau 2,  -1 uninitialized
    unsigned pile  = -1;    //deck ??,  foundation 0-2, table 0-6,  -1 uninitialized
    unsigned position = -1; //deck ??,  foundation ??,  table 0-12, -1 uninitialized
    bool clicked = false;
};

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private:
    void updateTable(unsigned num);
    void updateFoundation();
    void updateDeck();
    void updateAll();
    void initUi();
    void cardClicked();
    void deselect();
    void restore();
    int fromDeck();
    int fromFound();
    int fromTable();

    Table tab;
    struct CardInfo selected;
    struct CardInfo clicked;
    QString rank[14];
    QString suit[4];
//    QString format;
    QString of;

    QString back;

    QPushButton *table1[13];
    QPushButton *table2[13];
    QPushButton *table3[13];
    QPushButton *table4[13];
    QPushButton *table5[13];
    QPushButton *table6[13];
    QPushButton *table7[13];

    QPushButton *found[4];

    Ui::MainWindow *ui;

private slots:
    void on_table1_card_1_clicked();
    void on_table1_card_2_clicked();
    void on_table1_card_3_clicked();
    void on_table1_card_4_clicked();
    void on_table1_card_5_clicked();
    void on_table1_card_6_clicked();
    void on_table1_card_7_clicked();
    void on_table1_card_8_clicked();
    void on_table1_card_9_clicked();
    void on_table1_card_10_clicked();
    void on_table1_card_11_clicked();
    void on_table1_card_12_clicked();
    void on_table1_card_13_clicked();

    void on_table2_card_1_clicked();
    void on_table2_card_2_clicked();
    void on_table2_card_3_clicked();
    void on_table2_card_4_clicked();
    void on_table2_card_5_clicked();
    void on_table2_card_6_clicked();
    void on_table2_card_7_clicked();
    void on_table2_card_8_clicked();
    void on_table2_card_9_clicked();
    void on_table2_card_10_clicked();
    void on_table2_card_11_clicked();
    void on_table2_card_12_clicked();
    void on_table2_card_13_clicked();

    void on_table3_card_1_clicked();
    void on_table3_card_2_clicked();
    void on_table3_card_3_clicked();
    void on_table3_card_4_clicked();
    void on_table3_card_5_clicked();
    void on_table3_card_6_clicked();
    void on_table3_card_7_clicked();
    void on_table3_card_8_clicked();
    void on_table3_card_9_clicked();
    void on_table3_card_10_clicked();
    void on_table3_card_11_clicked();
    void on_table3_card_12_clicked();
    void on_table3_card_13_clicked();

    void on_table4_card_1_clicked();
    void on_table4_card_2_clicked();
    void on_table4_card_3_clicked();
    void on_table4_card_4_clicked();
    void on_table4_card_5_clicked();
    void on_table4_card_6_clicked();
    void on_table4_card_7_clicked();
    void on_table4_card_8_clicked();
    void on_table4_card_9_clicked();
    void on_table4_card_10_clicked();
    void on_table4_card_11_clicked();
    void on_table4_card_12_clicked();
    void on_table4_card_13_clicked();

    void on_table5_card_1_clicked();
    void on_table5_card_2_clicked();
    void on_table5_card_3_clicked();
    void on_table5_card_4_clicked();
    void on_table5_card_5_clicked();
    void on_table5_card_6_clicked();
    void on_table5_card_7_clicked();
    void on_table5_card_8_clicked();
    void on_table5_card_9_clicked();
    void on_table5_card_10_clicked();
    void on_table5_card_11_clicked();
    void on_table5_card_12_clicked();
    void on_table5_card_13_clicked();

    void on_table6_card_1_clicked();
    void on_table6_card_2_clicked();
    void on_table6_card_3_clicked();
    void on_table6_card_4_clicked();
    void on_table6_card_5_clicked();
    void on_table6_card_6_clicked();
    void on_table6_card_7_clicked();
    void on_table6_card_8_clicked();
    void on_table6_card_9_clicked();
    void on_table6_card_10_clicked();
    void on_table6_card_11_clicked();
    void on_table6_card_12_clicked();
    void on_table6_card_13_clicked();

    void on_table7_card_1_clicked();
    void on_table7_card_2_clicked();
    void on_table7_card_3_clicked();
    void on_table7_card_4_clicked();
    void on_table7_card_5_clicked();
    void on_table7_card_6_clicked();
    void on_table7_card_7_clicked();
    void on_table7_card_8_clicked();
    void on_table7_card_9_clicked();
    void on_table7_card_10_clicked();
    void on_table7_card_11_clicked();
    void on_table7_card_12_clicked();
    void on_table7_card_13_clicked();

    void on_newGame_clicked();
    void on_deck_back_clicked();
};

#endif // MAINWINDOW_H
