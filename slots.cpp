#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "table.h"


/*********************************************************/
/*                   game options                        */
/*********************************************************/
void MainWindow::on_newGame_clicked(){
    tab.initGame();
    ui->deck_back->setEnabled(true);
    for (unsigned i = 1; i<=7; ++i)
        updateTable(i);
    updateFoundation();
    for (unsigned i = 0; i < 4; ++i)
        found[i]->setEnabled(true);
    updateDeck();}

void MainWindow::on_loadGame_clicked(){
std::cout << "loadGame clicked\n";
}

void MainWindow::on_hint_clicked(){
std::cout << "hint clicked\n";
}

void MainWindow::on_saveGame_clicked(){
std::cout << "saveGame clicked\n";
}
/*********************************************************/
/*                  karta z decku                        */
/*********************************************************/
void MainWindow::on_deck_face_clicked(){
    clicked.button = ui->deck_face;
    clicked.card   = tab.deckLast();
    clicked.where  = 0;
    clicked.pile   = -1;
    clicked.position = -1;
    cardClicked();}
void MainWindow::on_deck_back_clicked(){
    tab.dealCard();
    deselect();
    updateDeck();}
/*********************************************************/
/*                  foudation karty                      */
/*********************************************************/
void MainWindow::on_foundation1_clicked(){
    clicked.button = ui->foundation1;
    clicked.card   = tab.getFoundLast(0);
    clicked.where  = 1;
    clicked.pile   = -1;
    clicked.position = -1;
    cardClicked();}
void MainWindow::on_foundation2_clicked(){
    clicked.button = ui->foundation2;
    clicked.card   = tab.getFoundLast(1);
    clicked.where  = 1;
    clicked.pile   = -1;
    clicked.position = -1;
    cardClicked();}
void MainWindow::on_foundation3_clicked(){
    clicked.button = ui->foundation3;
    clicked.card   = tab.getFoundLast(2);
    clicked.where  = 1;
    clicked.pile   = -1;
    clicked.position = -1;
    cardClicked();}
void MainWindow::on_foundation4_clicked(){
    clicked.button = ui->foundation4;
    clicked.card   = tab.getFoundLast(3);
    clicked.where  = 1;
    clicked.pile   = -1;
    clicked.position = -1;
    cardClicked();}
/*********************************************************/
/*                  tableau karty                        */
/*********************************************************/
void MainWindow::on_table1_card_13_clicked(){
    clicked.button = ui->table1_card_13;
    clicked.card   = tab.getTableCard(0, 12);
    clicked.where  = 2;
    clicked.pile   = 0;
    clicked.position = 12;
    cardClicked();}
void MainWindow::on_table1_card_12_clicked(){
    clicked.button = ui->table1_card_12;
    clicked.card   = tab.getTableCard(0, 11);
    clicked.where  = 2;
    clicked.pile   = 0;
    clicked.position = 11;
    cardClicked();}
void MainWindow::on_table1_card_11_clicked(){
    clicked.button = ui->table1_card_11;
    clicked.card   = tab.getTableCard(0, 10);
    clicked.where  = 2;
    clicked.pile   = 0;
    clicked.position = 10;
    cardClicked();}
void MainWindow::on_table1_card_10_clicked(){
    clicked.button = ui->table1_card_10;
    clicked.card   = tab.getTableCard(0, 9);
    clicked.where  = 2;
    clicked.pile   = 0;
    clicked.position = 9;
    cardClicked();}
void MainWindow::on_table1_card_9_clicked(){
    clicked.button = ui->table1_card_9;
    clicked.card   = tab.getTableCard(0, 8);
    clicked.where  = 2;
    clicked.pile   = 0;
    clicked.position = 8;
    cardClicked();}
void MainWindow::on_table1_card_8_clicked(){
    clicked.button = ui->table1_card_8;
    clicked.card   = tab.getTableCard(0, 7);
    clicked.where  = 2;
    clicked.pile   = 0;
    clicked.position = 7;
    cardClicked();}
void MainWindow::on_table1_card_7_clicked(){
    clicked.button = ui->table1_card_7;
    clicked.card   = tab.getTableCard(0, 6);
    clicked.where  = 2;
    clicked.pile   = 0;
    clicked.position = 6;
    cardClicked();}
void MainWindow::on_table1_card_6_clicked(){
    clicked.button = ui->table1_card_6;
    clicked.card   = tab.getTableCard(0, 5);
    clicked.where  = 2;
    clicked.pile   = 0;
    clicked.position = 5;
    cardClicked();}
void MainWindow::on_table1_card_5_clicked(){
    clicked.button = ui->table1_card_5;
    clicked.card   = tab.getTableCard(0, 4);
    clicked.where  = 2;
    clicked.pile   = 0;
    clicked.position = 4;
    cardClicked();}
void MainWindow::on_table1_card_4_clicked(){
    clicked.button = ui->table1_card_4;
    clicked.card   = tab.getTableCard(0, 3);
    clicked.where  = 2;
    clicked.pile   = 0;
    clicked.position = 3;
    cardClicked();}
void MainWindow::on_table1_card_3_clicked(){
    clicked.button = ui->table1_card_3;
    clicked.card   = tab.getTableCard(0, 2);
    clicked.where  = 2;
    clicked.pile   = 0;
    clicked.position = 2;
    cardClicked();}
void MainWindow::on_table1_card_2_clicked(){
    clicked.button = ui->table1_card_2;
    clicked.card   = tab.getTableCard(0, 1);
    clicked.where  = 2;
    clicked.pile   = 0;
    clicked.position = 1;
    cardClicked(); }
void MainWindow::on_table1_card_1_clicked(){
    std::cout << "???????????????????????????????????\n";
    clicked.button = ui->table1_card_1;
    clicked.card   = tab.getTableCard(0, 0);
    clicked.where  = 2;
    clicked.pile   = 0;
    clicked.position = 0;
    cardClicked();}

void MainWindow::on_table2_card_13_clicked(){
    clicked.button = ui->table2_card_13;
    clicked.card   = tab.getTableCard(1, 12);
    clicked.where  = 2;
    clicked.pile   = 1;
    clicked.position = 12;
    cardClicked();}
void MainWindow::on_table2_card_12_clicked(){
    clicked.button = ui->table2_card_12;
    clicked.card   = tab.getTableCard(1, 11);
    clicked.where  = 2;
    clicked.pile   = 1;
    clicked.position = 11;
    cardClicked();}
void MainWindow::on_table2_card_11_clicked(){
    clicked.button = ui->table2_card_11;
    clicked.card   = tab.getTableCard(1, 10);
    clicked.where  = 2;
    clicked.pile   = 1;
    clicked.position = 10;
    cardClicked();}
void MainWindow::on_table2_card_10_clicked(){
    clicked.button = ui->table2_card_10;
    clicked.card   = tab.getTableCard(1, 9);
    clicked.where  = 2;
    clicked.pile   = 1;
    clicked.position = 9;
    cardClicked();}
void MainWindow::on_table2_card_9_clicked(){
    clicked.button = ui->table2_card_9;
    clicked.card   = tab.getTableCard(1, 8);
    clicked.where  = 2;
    clicked.pile   = 1;
    clicked.position = 8;
    cardClicked();}
void MainWindow::on_table2_card_8_clicked(){
    clicked.button = ui->table2_card_8;
    clicked.card   = tab.getTableCard(1, 7);
    clicked.where  = 2;
    clicked.pile   = 1;
    clicked.position = 7;
    cardClicked();}
void MainWindow::on_table2_card_7_clicked(){
    clicked.button = ui->table2_card_7;
    clicked.card   = tab.getTableCard(1, 6);
    clicked.where  = 2;
    clicked.pile   = 1;
    clicked.position = 6;
    cardClicked();}
void MainWindow::on_table2_card_6_clicked(){
    clicked.button = ui->table2_card_6;
    clicked.card   = tab.getTableCard(1, 5);
    clicked.where  = 2;
    clicked.pile   = 1;
    clicked.position = 5;
    cardClicked();}
void MainWindow::on_table2_card_5_clicked(){
    clicked.button = ui->table2_card_5;
    clicked.card   = tab.getTableCard(1, 4);
    clicked.where  = 2;
    clicked.pile   = 1;
    clicked.position = 4;
    cardClicked();}
void MainWindow::on_table2_card_4_clicked(){
    clicked.button = ui->table2_card_4;
    clicked.card   = tab.getTableCard(1, 3);
    clicked.where  = 2;
    clicked.pile   = 1;
    clicked.position = 3;
    cardClicked();}
void MainWindow::on_table2_card_3_clicked(){
    clicked.button = ui->table2_card_3;
    clicked.card   = tab.getTableCard(1, 2);
    clicked.where  = 2;
    clicked.pile   = 1;
    clicked.position = 2;
    cardClicked();}
void MainWindow::on_table2_card_2_clicked(){
    clicked.button = ui->table2_card_2;
    clicked.card   = tab.getTableCard(1, 1);
    clicked.where  = 2;
    clicked.pile   = 1;
    clicked.position = 1;
    cardClicked();}
void MainWindow::on_table2_card_1_clicked(){
    clicked.button = ui->table2_card_1;
    clicked.card   = tab.getTableCard(1, 0);
    clicked.where  = 2;
    clicked.pile   = 1;
    clicked.position = 0;
    cardClicked();}

void MainWindow::on_table3_card_13_clicked(){
    clicked.button = ui->table3_card_13;
    clicked.card   = tab.getTableCard(2, 12);
    clicked.where  = 2;
    clicked.pile   = 2;
    clicked.position = 12;
    cardClicked();}
void MainWindow::on_table3_card_12_clicked(){
    clicked.button = ui->table3_card_12;
    clicked.card   = tab.getTableCard(2, 11);
    clicked.where  = 2;
    clicked.pile   = 2;
    clicked.position = 11;
    cardClicked();}
void MainWindow::on_table3_card_11_clicked(){
    clicked.button = ui->table3_card_11;
    clicked.card   = tab.getTableCard(2, 10);
    clicked.where  = 2;
    clicked.pile   = 2;
    clicked.position = 10;
    cardClicked();}
void MainWindow::on_table3_card_10_clicked(){
    clicked.button = ui->table3_card_10;
    clicked.card   = tab.getTableCard(2, 9);
    clicked.where  = 2;
    clicked.pile   = 2;
    clicked.position = 9;
    cardClicked();}
void MainWindow::on_table3_card_9_clicked(){
    clicked.button = ui->table3_card_9;
    clicked.card   = tab.getTableCard(2, 8);
    clicked.where  = 2;
    clicked.pile   = 2;
    clicked.position = 8;
    cardClicked();}
void MainWindow::on_table3_card_8_clicked(){
    clicked.button = ui->table3_card_8;
    clicked.card   = tab.getTableCard(2, 7);
    clicked.where  = 2;
    clicked.pile   = 2;
    clicked.position = 7;
    cardClicked();}
void MainWindow::on_table3_card_7_clicked(){
    clicked.button = ui->table3_card_7;
    clicked.card   = tab.getTableCard(2, 6);
    clicked.where  = 2;
    clicked.pile   = 2;
    clicked.position = 6;
    cardClicked();}
void MainWindow::on_table3_card_6_clicked(){
    clicked.button = ui->table3_card_6;
    clicked.card   = tab.getTableCard(2, 5);
    clicked.where  = 2;
    clicked.pile   = 2;
    clicked.position = 5;
    cardClicked();}
void MainWindow::on_table3_card_5_clicked(){
    clicked.button = ui->table3_card_5;
    clicked.card   = tab.getTableCard(2, 4);
    clicked.where  = 2;
    clicked.pile   = 2;
    clicked.position = 4;
    cardClicked();}
void MainWindow::on_table3_card_4_clicked(){
    clicked.button = ui->table3_card_4;
    clicked.card   = tab.getTableCard(2, 3);
    clicked.where  = 2;
    clicked.pile   = 2;
    clicked.position = 3;
    cardClicked();}
void MainWindow::on_table3_card_3_clicked(){
    clicked.button = ui->table3_card_3;
    clicked.card   = tab.getTableCard(2, 2);
    clicked.where  = 2;
    clicked.pile   = 2;
    clicked.position = 2;
    cardClicked();}
void MainWindow::on_table3_card_2_clicked(){
    clicked.button = ui->table3_card_2;
    clicked.card   = tab.getTableCard(2, 1);
    clicked.where  = 2;
    clicked.pile   = 2;
    clicked.position = 1;
    cardClicked();}
void MainWindow::on_table3_card_1_clicked(){
    clicked.button = ui->table3_card_1;
    clicked.card   = tab.getTableCard(2, 0);
    clicked.where  = 2;
    clicked.pile   = 2;
    clicked.position = 0;
    cardClicked();}

void MainWindow::on_table4_card_13_clicked(){
    clicked.button = ui->table4_card_13;
    clicked.card   = tab.getTableCard(3, 12);
    clicked.where  = 2;
    clicked.pile   = 3;
    clicked.position = 12;
    cardClicked();}
void MainWindow::on_table4_card_12_clicked(){
    clicked.button = ui->table4_card_12;
    clicked.card   = tab.getTableCard(3, 11);
    clicked.where  = 2;
    clicked.pile   = 3;
    clicked.position = 11;
    cardClicked();}
void MainWindow::on_table4_card_11_clicked(){
    clicked.button = ui->table4_card_11;
    clicked.card   = tab.getTableCard(3, 10);
    clicked.where  = 2;
    clicked.pile   = 3;
    clicked.position = 10;
    cardClicked();}
void MainWindow::on_table4_card_10_clicked(){
    clicked.button = ui->table4_card_10;
    clicked.card   = tab.getTableCard(3, 9);
    clicked.where  = 2;
    clicked.pile   = 3;
    clicked.position = 9;
    cardClicked();}
void MainWindow::on_table4_card_9_clicked(){
    clicked.button = ui->table4_card_9;
    clicked.card   = tab.getTableCard(3, 8);
    clicked.where  = 2;
    clicked.pile   = 3;
    clicked.position = 8;
    cardClicked();}
void MainWindow::on_table4_card_8_clicked(){
    clicked.button = ui->table4_card_8;
    clicked.card   = tab.getTableCard(3, 7);
    clicked.where  = 2;
    clicked.pile   = 3;
    clicked.position = 7;
    cardClicked();}
void MainWindow::on_table4_card_7_clicked(){
    clicked.button = ui->table4_card_7;
    clicked.card   = tab.getTableCard(3, 6);
    clicked.where  = 2;
    clicked.pile   = 3;
    clicked.position = 6;
    cardClicked();}
void MainWindow::on_table4_card_6_clicked(){
    clicked.button = ui->table4_card_6;
    clicked.card   = tab.getTableCard(3, 5);
    clicked.where  = 2;
    clicked.pile   = 3;
    clicked.position = 5;
    cardClicked();}
void MainWindow::on_table4_card_5_clicked(){
    clicked.button = ui->table4_card_5;
    clicked.card   = tab.getTableCard(3, 4);
    clicked.where  = 2;
    clicked.pile   = 3;
    clicked.position = 4;
    cardClicked();}
void MainWindow::on_table4_card_4_clicked(){
    clicked.button = ui->table4_card_4;
    clicked.card   = tab.getTableCard(3, 3);
    clicked.where  = 2;
    clicked.pile   = 3;
    clicked.position = 3;
    cardClicked();}
void MainWindow::on_table4_card_3_clicked(){
    clicked.button = ui->table4_card_3;
    clicked.card   = tab.getTableCard(3, 2);
    clicked.where  = 2;
    clicked.pile   = 3;
    clicked.position = 2;
    cardClicked();}
void MainWindow::on_table4_card_2_clicked(){
    clicked.button = ui->table4_card_2;
    clicked.card   = tab.getTableCard(3, 1);
    clicked.where  = 2;
    clicked.pile   = 3;
    clicked.position = 1;
    cardClicked(); }
void MainWindow::on_table4_card_1_clicked(){
    clicked.button = ui->table4_card_1;
    clicked.card   = tab.getTableCard(3, 0);
    clicked.where  = 2;
    clicked.pile   = 3;
    clicked.position = 0;
    cardClicked();}

void MainWindow::on_table5_card_13_clicked(){
    clicked.button = ui->table5_card_13;
    clicked.card   = tab.getTableCard(4, 12);
    clicked.where  = 2;
    clicked.pile   = 4;
    clicked.position = 12;
    cardClicked();}
void MainWindow::on_table5_card_12_clicked(){
    clicked.button = ui->table5_card_12;
    clicked.card   = tab.getTableCard(4, 11);
    clicked.where  = 2;
    clicked.pile   = 4;
    clicked.position = 11;
    cardClicked();}
void MainWindow::on_table5_card_11_clicked(){
    clicked.button = ui->table5_card_11;
    clicked.card   = tab.getTableCard(4, 10);
    clicked.where  = 2;
    clicked.pile   = 4;
    clicked.position = 10;
    cardClicked();}
void MainWindow::on_table5_card_10_clicked(){
    clicked.button = ui->table5_card_10;
    clicked.card   = tab.getTableCard(4, 9);
    clicked.where  = 2;
    clicked.pile   = 4;
    clicked.position = 9;
    cardClicked();}
void MainWindow::on_table5_card_9_clicked(){
    clicked.button = ui->table5_card_9;
    clicked.card   = tab.getTableCard(4, 8);
    clicked.where  = 2;
    clicked.pile   = 4;
    clicked.position = 8;
    cardClicked();}
void MainWindow::on_table5_card_8_clicked(){
    clicked.button = ui->table5_card_8;
    clicked.card   = tab.getTableCard(4, 7);
    clicked.where  = 2;
    clicked.pile   = 4;
    clicked.position = 7;
    cardClicked();}
void MainWindow::on_table5_card_7_clicked(){
    clicked.button = ui->table5_card_7;
    clicked.card   = tab.getTableCard(4, 6);
    clicked.where  = 2;
    clicked.pile   = 4;
    clicked.position = 6;
    cardClicked();}
void MainWindow::on_table5_card_6_clicked(){
    clicked.button = ui->table5_card_6;
    clicked.card   = tab.getTableCard(4, 5);
    clicked.where  = 2;
    clicked.pile   = 4;
    clicked.position = 5;
    cardClicked();}
void MainWindow::on_table5_card_5_clicked(){
    clicked.button = ui->table5_card_5;
    clicked.card   = tab.getTableCard(4, 4);
    clicked.where  = 2;
    clicked.pile   = 4;
    clicked.position = 4;
    cardClicked();}
void MainWindow::on_table5_card_4_clicked(){
    clicked.button = ui->table5_card_4;
    clicked.card   = tab.getTableCard(4, 3);
    clicked.where  = 2;
    clicked.pile   = 4;
    clicked.position = 3;
    cardClicked();}
void MainWindow::on_table5_card_3_clicked(){
    clicked.button = ui->table5_card_3;
    clicked.card   = tab.getTableCard(4, 2);
    clicked.where  = 2;
    clicked.pile   = 4;
    clicked.position = 2;
    cardClicked();}
void MainWindow::on_table5_card_2_clicked(){
    clicked.button = ui->table5_card_2;
    clicked.card   = tab.getTableCard(4, 1);
    clicked.where  = 2;
    clicked.pile   = 4;
    clicked.position = 1;
    cardClicked();}
void MainWindow::on_table5_card_1_clicked(){
    clicked.button = ui->table5_card_1;
    clicked.card   = tab.getTableCard(4, 0);
    clicked.where  = 2;
    clicked.pile   = 4;
    clicked.position = 0;
    cardClicked();}

void MainWindow::on_table6_card_13_clicked(){
    clicked.button = ui->table6_card_13;
    clicked.card   = tab.getTableCard(5, 12);
    clicked.where  = 2;
    clicked.pile   = 5;
    clicked.position = 12;
    cardClicked();}
void MainWindow::on_table6_card_12_clicked(){
    clicked.button = ui->table6_card_12;
    clicked.card   = tab.getTableCard(5, 11);
    clicked.where  = 2;
    clicked.pile   = 5;
    clicked.position = 11;
    cardClicked();}
void MainWindow::on_table6_card_11_clicked(){
    clicked.button = ui->table6_card_11;
    clicked.card   = tab.getTableCard(5, 10);
    clicked.where  = 2;
    clicked.pile   = 5;
    clicked.position = 10;
    cardClicked();}
void MainWindow::on_table6_card_10_clicked(){
    clicked.button = ui->table6_card_10;
    clicked.card   = tab.getTableCard(5, 9);
    clicked.where  = 2;
    clicked.pile   = 5;
    clicked.position = 9;
    cardClicked();}
void MainWindow::on_table6_card_9_clicked(){
    clicked.button = ui->table6_card_9;
    clicked.card   = tab.getTableCard(5, 8);
    clicked.where  = 2;
    clicked.pile   = 5;
    clicked.position = 8;
    cardClicked();}
void MainWindow::on_table6_card_8_clicked(){
    clicked.button = ui->table6_card_8;
    clicked.card   = tab.getTableCard(5, 7);
    clicked.where  = 2;
    clicked.pile   = 5;
    clicked.position = 7;
    cardClicked();}
void MainWindow::on_table6_card_7_clicked(){
    clicked.button = ui->table6_card_7;
    clicked.card   = tab.getTableCard(5, 6);
    clicked.where  = 2;
    clicked.pile   = 5;
    clicked.position = 6;
    cardClicked();}
void MainWindow::on_table6_card_6_clicked(){
    clicked.button = ui->table6_card_6;
    clicked.card   = tab.getTableCard(5, 5);
    clicked.where  = 2;
    clicked.pile   = 5;
    clicked.position = 5;
    cardClicked();}
void MainWindow::on_table6_card_5_clicked(){
    clicked.button = ui->table6_card_5;
    clicked.card   = tab.getTableCard(5, 4);
    clicked.where  = 2;
    clicked.pile   = 5;
    clicked.position = 4;
    cardClicked();}
void MainWindow::on_table6_card_4_clicked(){
    clicked.button = ui->table6_card_4;
    clicked.card   = tab.getTableCard(5, 3);
    clicked.where  = 2;
    clicked.pile   = 5;
    clicked.position = 3;
    cardClicked();}
void MainWindow::on_table6_card_3_clicked(){
    clicked.button = ui->table6_card_3;
    clicked.card   = tab.getTableCard(5, 2);
    clicked.where  = 2;
    clicked.pile   = 5;
    clicked.position = 2;
    cardClicked();}
void MainWindow::on_table6_card_2_clicked(){
    clicked.button = ui->table6_card_2;
    clicked.card   = tab.getTableCard(5, 1);
    clicked.where  = 2;
    clicked.pile   = 5;
    clicked.position = 1;
    cardClicked();}
void MainWindow::on_table6_card_1_clicked(){
    clicked.button = ui->table6_card_1;
    clicked.card   = tab.getTableCard(5, 0);
    clicked.where  = 2;
    clicked.pile   = 5;
    clicked.position = 0;
    cardClicked();}

void MainWindow::on_table7_card_13_clicked(){
    clicked.button = ui->table7_card_13;
    clicked.card   = tab.getTableCard(6, 12);
    clicked.where  = 2;
    clicked.pile   = 6;
    clicked.position = 12;
    cardClicked();}
void MainWindow::on_table7_card_12_clicked(){
    clicked.button = ui->table7_card_12;
    clicked.card   = tab.getTableCard(6, 11);
    clicked.where  = 2;
    clicked.pile   = 6;
    clicked.position = 11;
    cardClicked();}
void MainWindow::on_table7_card_11_clicked(){
    clicked.button = ui->table7_card_11;
    clicked.card   = tab.getTableCard(6, 10);
    clicked.where  = 2;
    clicked.pile   = 6;
    clicked.position = 10;
    cardClicked();}
void MainWindow::on_table7_card_10_clicked(){
    clicked.button = ui->table7_card_10;
    clicked.card   = tab.getTableCard(6, 9);
    clicked.where  = 2;
    clicked.pile   = 6;
    clicked.position = 9;
    cardClicked();}
void MainWindow::on_table7_card_9_clicked(){
    clicked.button = ui->table7_card_9;
    clicked.card   = tab.getTableCard(6, 8);
    clicked.where  = 2;
    clicked.pile   = 6;
    clicked.position = 8;
    cardClicked();}
void MainWindow::on_table7_card_8_clicked(){
    clicked.button = ui->table7_card_8;
    clicked.card   = tab.getTableCard(6, 7);
    clicked.where  = 2;
    clicked.pile   = 6;
    clicked.position = 7;
    cardClicked();}
void MainWindow::on_table7_card_7_clicked(){
    clicked.button = ui->table7_card_7;
    clicked.card   = tab.getTableCard(6, 6);
    clicked.where  = 2;
    clicked.pile   = 6;
    clicked.position = 6;
    cardClicked();}
void MainWindow::on_table7_card_6_clicked(){
    clicked.button = ui->table7_card_6;
    clicked.card   = tab.getTableCard(6, 5);
    clicked.where  = 2;
    clicked.pile   = 6;
    clicked.position = 5;
    cardClicked();}
void MainWindow::on_table7_card_5_clicked(){
    clicked.button = ui->table7_card_5;
    clicked.card   = tab.getTableCard(6, 4);
    clicked.where  = 2;
    clicked.pile   = 6;
    clicked.position = 4;
    cardClicked();}
void MainWindow::on_table7_card_4_clicked(){
    clicked.button = ui->table7_card_4;
    clicked.card   = tab.getTableCard(6, 3);
    clicked.where  = 2;
    clicked.pile   = 6;
    clicked.position = 3;
    cardClicked();}
void MainWindow::on_table7_card_3_clicked(){
    clicked.button = ui->table7_card_3;
    clicked.card   = tab.getTableCard(6, 2);
    clicked.where  = 2;
    clicked.pile   = 6;
    clicked.position = 2;
    cardClicked();}
void MainWindow::on_table7_card_2_clicked(){
    clicked.button = ui->table7_card_2;
    clicked.card   = tab.getTableCard(6, 1);
    clicked.where  = 2;
    clicked.pile   = 6;
    clicked.position = 1;
    cardClicked();}
void MainWindow::on_table7_card_1_clicked(){
    clicked.button = ui->table7_card_1;
    clicked.card   = tab.getTableCard(6, 0);
    clicked.where  = 2;
    clicked.pile   = 6;
    clicked.position = 0;
    cardClicked();}
