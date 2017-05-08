#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QTextStream>

MainWindow::MainWindow(QWidget *parent) :  QMainWindow(parent), ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    tab = Table();
    // toto inicializuje pociatocny stav hry
    initUi();
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::selectLastfromTable(unsigned int i) {
    unsigned int j = tab.tableSize(i)-1;
    switch (i) {
        case 0:
            switch (j) {
                case 0: on_table1_card_1_clicked();break;
                case 1: on_table1_card_2_clicked();break;
                case 2: on_table1_card_3_clicked();break;
                case 3: on_table1_card_4_clicked();break;
                case 4: on_table1_card_5_clicked();break;
                case 5: on_table1_card_6_clicked();break;
                case 6: on_table1_card_7_clicked();break;
                case 7: on_table1_card_8_clicked();break;
                case 8: on_table1_card_9_clicked();break;
                case 9: on_table1_card_10_clicked();break;
                case 10: on_table1_card_11_clicked();break;
                case 11: on_table1_card_12_clicked();break;
                case 12: on_table1_card_13_clicked();break;
            } break;
        case 1:
            switch (j) {
                case 0: on_table2_card_1_clicked();break;
                case 1: on_table2_card_2_clicked();break;
                case 2: on_table2_card_3_clicked();break;
                case 3: on_table2_card_4_clicked();break;
                case 4: on_table2_card_5_clicked();break;
                case 5: on_table2_card_6_clicked();break;
                case 6: on_table2_card_7_clicked();break;
                case 7: on_table2_card_8_clicked();break;
                case 8: on_table2_card_9_clicked();break;
                case 9: on_table2_card_10_clicked();break;
                case 10: on_table2_card_11_clicked();break;
                case 11: on_table2_card_12_clicked();break;
                case 12: on_table2_card_13_clicked();break;
            } break;
        case 2:
            switch (j) {
                case 0: on_table3_card_1_clicked();break;
                case 1: on_table3_card_2_clicked();break;
                case 2: on_table3_card_3_clicked();break;
                case 3: on_table3_card_4_clicked();break;
                case 4: on_table3_card_5_clicked();break;
                case 5: on_table3_card_6_clicked();break;
                case 6: on_table3_card_7_clicked();break;
                case 7: on_table3_card_8_clicked();break;
                case 8: on_table3_card_9_clicked();break;
                case 9: on_table3_card_10_clicked();break;
                case 10: on_table3_card_11_clicked();break;
                case 11: on_table3_card_12_clicked();break;
                case 12: on_table3_card_13_clicked();break;
            } break;
        case 3:
            switch (j) {
                case 0: on_table4_card_1_clicked();break;
                case 1: on_table4_card_2_clicked();break;
                case 2: on_table4_card_3_clicked();break;
                case 3: on_table4_card_4_clicked();break;
                case 4: on_table4_card_5_clicked();break;
                case 5: on_table4_card_6_clicked();break;
                case 6: on_table4_card_7_clicked();break;
                case 7: on_table4_card_8_clicked();break;
                case 8: on_table4_card_9_clicked();break;
                case 9: on_table4_card_10_clicked();break;
                case 10: on_table4_card_11_clicked();break;
                case 11: on_table4_card_12_clicked();break;
                case 12: on_table4_card_13_clicked();break;
            } break;
        case 4:
            switch (j) {
                case 0: on_table5_card_1_clicked();break;
                case 1: on_table5_card_2_clicked();break;
                case 2: on_table5_card_3_clicked();break;
                case 3: on_table5_card_4_clicked();break;
                case 4: on_table5_card_5_clicked();break;
                case 5: on_table5_card_6_clicked();break;
                case 6: on_table5_card_7_clicked();break;
                case 7: on_table5_card_8_clicked();break;
                case 8: on_table5_card_9_clicked();break;
                case 9: on_table5_card_10_clicked();break;
                case 10: on_table5_card_11_clicked();break;
                case 11: on_table5_card_12_clicked();break;
                case 12: on_table5_card_13_clicked();break;
            } break;
        case 5:
            switch (j) {
                case 0: on_table6_card_1_clicked();break;
                case 1: on_table6_card_2_clicked();break;
                case 2: on_table6_card_3_clicked();break;
                case 3: on_table6_card_4_clicked();break;
                case 4: on_table6_card_5_clicked();break;
                case 5: on_table6_card_6_clicked();break;
                case 6: on_table6_card_7_clicked();break;
                case 7: on_table6_card_8_clicked();break;
                case 8: on_table6_card_9_clicked();break;
                case 9: on_table6_card_10_clicked();break;
                case 10: on_table6_card_11_clicked();break;
                case 11: on_table6_card_12_clicked();break;
                case 12: on_table6_card_13_clicked();break;
            } break;
        case 6:
            switch (j) {
                case 0: on_table7_card_1_clicked();break;
                case 1: on_table7_card_2_clicked();break;
                case 2: on_table7_card_3_clicked();break;
                case 3: on_table7_card_4_clicked();break;
                case 4: on_table7_card_5_clicked();break;
                case 5: on_table7_card_6_clicked();break;
                case 6: on_table7_card_7_clicked();break;
                case 7: on_table7_card_8_clicked();break;
                case 8: on_table7_card_9_clicked();break;
                case 9: on_table7_card_10_clicked();break;
                case 10: on_table7_card_11_clicked();break;
                case 11: on_table7_card_12_clicked();break;
                case 12: on_table7_card_13_clicked();break;
            } break;
    }
}

void MainWindow ::cardClicked(){
    std::cout << "cardClicked\n";

    if (selected.clicked) {
        //presuvame kartu z decku
        if (selected.where == 0){
            fromDeck();
        }
        //presuvame kartu z foundation
        else if (selected.where == 1){
            fromFound();
        }
        //presuvame kartu z table
        else if (selected.where == 2){
            fromTable();
        }
        else {
            std::cout << "ERR: nie je spravne inicializovana vybrana karta\n";
        }
        deselect();
        updateAll();
    }
    else {
        selected.button = clicked.button;
        selected.card = clicked.card;
        selected.where = clicked.where;
        selected.pile = clicked.pile;
        selected.position = clicked.position;
        selected.clicked = true;
        selected.button->setStyleSheet(
                    "border-image: url(:"+
                    rank[Ranking(clicked.card->GetRank())]+of+
                    suit[Suiting(clicked.card->GetSuit())]+");"
                    "background: pink;"
                    "border-style: inset;"
                    "border-width: 2px;"
                    "border-color: red;"
                );
    }

    if (!tab.movesEmpty())
        ui->back->setEnabled(true);
}

int MainWindow::fromDeck(){
    std::cout << "fromDeck\n";
    if (clicked.where == 1){
        if (tab.deck2Found() != 0){
            std::cout << "karta sa neda polozit do foundation\n"; // TODO vytvorit funkciu deselect
            return 1;
        }

        return 0;
    }
    if (clicked.where == 2){
        if (tab.deck2Table(clicked.pile) != 0){
           std::cout<<"neda sa presunut\n";
           return 1;
        }
        return 0;
    }
// k inym konfiguraciam by nemalo nastat
    return 1;
}
//TODO
int MainWindow::fromFound(){
    std::cout << "fromFound\n";
    if (clicked.where != 2){
        std::cout << "z found sa da karta vlozit iba na found\n";
        return 1;
    }

    if (tab.found2Table(clicked.pile, selected.pile) != 0){
        std::cout << "sem sa to vlozit neda\n";
        return 1;
    }

    return 0;
}
//TODO
int MainWindow::fromTable(){
    std::cout << "fromTable\n";
    if (clicked.where == 1){
        if (tab.foundRule(selected.card) != 0){
            std::cout << "karta sa neda presunut do foundation\n";
            return 1;
        }
        tab.table2Found(selected.pile);
        return 0;
    }
    if (clicked.where == 2){
        if (tab.table2Table(clicked.pile,selected.pile, selected.position) != 0) {
            std::cout << "karta sa neda vlozit na kopu";
            return 1;
        }
        return 0;
    }
    return 1;
}

// kliknutie na "New Game"
// vyhodi prazdnu kartu z balicka, balicek zamiesa a prida ju na koniec
// karty rozda na stol a zobrazi

void MainWindow::deselect(){
    selected.button     = nullptr;
    selected.card       = nullptr;
    selected.clicked    = false;
    selected.position   = -1;
    selected.pile       = -1;
    selected.where      = -1;
}


// zobrazi karty na tableau
void MainWindow::updateTable(unsigned num){
    auto table = table1;
    switch (num) {
    case 1:
        break;
    case 2:
        table = table2;
        break;
    case 3:
        table = table3;
        break;
    case 4:
        table = table4;
        break;
    case 5:
        table = table5;
        break;
    case 6:
        table = table6;
        break;
    case 7:
        table = table7;
        break;
    default:
        break;
    }
    --num;
    Card *card = nullptr;
    QTextStream out(stdout);
    unsigned start = 0;

    if (tab.tableSize(num) > 13)
        start = tab.tableSize(num) - 13;

    for (unsigned i = 0; i < 13; i++){ // i je iterator pre karty v tableau pile
        //std::cout << std::endl;
        if (i < tab.tableSize(num)){
            card = tab.getTableCard(num,i + start);
            if (card == nullptr){
                return;
            }
            if (card->GetFace()){
                table[i]->setStyleSheet(
                    "border-image: url(:"+
                    rank[Ranking(card->GetRank())]+of+
                    suit[Suiting(card->GetSuit())]+");"
                    "background: white;"
                    "border-style: inset;"
                    "border-width: 2px;"
                    "border-color: red;"
                );
                table[i]->setEnabled(true);
            }
            else {
                table[i]->setStyleSheet(
                            "border-image: url(:"+back+");"
                            "background: white;"
                            "border-style: inset;"
                            "border-width: 2px;"
                            "border-color: red;"
                );
                table[i]->setEnabled(false);
            }
            table[i]->show();
        }
        else {
            if (i == 0) {
                table[i]->setStyleSheet(
    //                "background: white;"
                    "border-style: inset;"
                    "border-width: 2px;"
                    "border-color: red;"
                    );
                table[i]->setEnabled(true);
                table[i]->show();
            }
            else
                table[i]->hide();
        }
    }
    return;
    std::cout << num << "updated table\n";
}

// zobrazi deck podla stavu hry
void MainWindow::updateDeck(){
    if (tab.deckSize() == 1){
        ui->deck_face->setStyleSheet(
                                    "border-style: inset;"
                                    "border-width: 2px;"
                                    "border-color: white;"
                                    );
        ui->deck_back->setStyleSheet(
                                    "border-style: inset;"
                                    "border-width: 2px;"
                                    "border-color: white;"
                                    );
    }
   if (Suiting(tab.deckLast()->GetSuit()) == 4){
       ui->deck_face->setStyleSheet(
                                   "border-style: inset;"
                                   "border-width: 2px;"
                                   "border-color: white;"
                                   );
       ui->deck_back->setStyleSheet(
                   "border-image: url(:"+back+");"
                   "background: white;"
                   "border-style: inset;"
                   "border-width: 2px;"
                   "border-color: red;"
       );
       ui->deck_face->setEnabled(false);
       return;
   }
   ui->deck_face->setEnabled(true);
   if (Suiting(tab.deckFirst()->GetSuit()) == 4){
       ui->deck_back->setStyleSheet(
                   "border-style: inset;"
                   "border-width: 2px;"
                   "border-color: white;"
                   );
   }

   ui->deck_face->setStyleSheet(
               "border-image: url(:"+
               rank[Ranking(tab.deckLast()->GetRank())]+of+
               suit[Suiting(tab.deckLast()->GetSuit())]+");"
               "background: white;"
               "border-style: inset;"
               "border-width: 2px;"
               "border-color: red;"
           );
}

// zobrazi karty vo foundation podla stavu hry
void MainWindow::updateFoundation(){
    Card *card = nullptr;
    for (unsigned i = 0; i < 4; i++){
        card = tab.getFoundLast(i);
        if (card == nullptr){
            found[i]->setStyleSheet(
                "border-style: inset;"
                "border-width: 2px;"
                "border-color: red;"
                );
        }
        else {
            if (!card->GetFace())
                card->setFace(true);

            found[i]->setStyleSheet(
                "border-image: url(:"+
                rank[Ranking(card->GetRank())]+of+
                suit[Suiting(card->GetSuit())]+");"
                "background: white;"
                "border-style: inset;"
                "border-width: 2px;"
                "border-color: red;"
                );
        }
        found[i]->show();
    }
}

void MainWindow::updateAll(){
    updateDeck();
    updateFoundation();
    for (unsigned i = 1; i <= 7; ++i){
        updateTable(i);
    }
    std::cout << "allupdated\n";
}

// nejake inicializacne zalezitost
// uvodne rozlozenie hry
void MainWindow::initUi(){

    selected.card = nullptr;
    selected.button = nullptr;

    ui->newGame->setStyleSheet( "background: white;");
    ui->loadGame->setStyleSheet( "background: white;");
    ui->saveGame->setStyleSheet( "background: white;");
    ui->hint->setStyleSheet( "background: white;");
    ui->back->setStyleSheet( "background: white;");
    ui->loadGame->setEnabled(false);
    ui->saveGame->setEnabled(false);
    ui->hint->setEnabled(false);
    ui->back->setEnabled(false);

    suit[0] = "spades.png";
    suit[1] = "hearts.png";
    suit[2] = "clubs.png";
    suit[3] = "diamonds.png";

    of = "_of_";
    back = "back";

    rank[1] = "ace";
    rank[2] = "2";
    rank[3] = "3";
    rank[4] = "4";
    rank[5] = "5";
    rank[6] = "6";
    rank[7] = "7";
    rank[8] = "8";
    rank[9] = "9";
    rank[10] = "10";
    rank[11] = "jack";
    rank[12] = "queen";
    rank[13] = "king";

    found[0] = ui->foundation1;
    found[1] = ui->foundation2;
    found[2] = ui->foundation3;
    found[3] = ui->foundation4;

    table1[0] = ui->table1_card_1;
    table1[1] = ui->table1_card_2;
    table1[2] = ui->table1_card_3;
    table1[3] = ui->table1_card_4;
    table1[4] = ui->table1_card_5;
    table1[5] = ui->table1_card_6;
    table1[6] = ui->table1_card_7;
    table1[7] = ui->table1_card_8;
    table1[8] = ui->table1_card_9;
    table1[9] = ui->table1_card_10;
    table1[10] = ui->table1_card_11;
    table1[11] = ui->table1_card_12;
    table1[12] = ui->table1_card_13;


    table2[0] = ui->table2_card_1;
    table2[1] = ui->table2_card_2;
    table2[2] = ui->table2_card_3;
    table2[3] = ui->table2_card_4;
    table2[4] = ui->table2_card_5;
    table2[5] = ui->table2_card_6;
    table2[6] = ui->table2_card_7;
    table2[7] = ui->table2_card_8;
    table2[8] = ui->table2_card_9;
    table2[9] = ui->table2_card_10;
    table2[10] = ui->table2_card_11;
    table2[11] = ui->table2_card_12;
    table2[12] = ui->table2_card_13;

    table3[0] = ui->table3_card_1;
    table3[1] = ui->table3_card_2;
    table3[2] = ui->table3_card_3;
    table3[3] = ui->table3_card_4;
    table3[4] = ui->table3_card_5;
    table3[5] = ui->table3_card_6;
    table3[6] = ui->table3_card_7;
    table3[7] = ui->table3_card_8;
    table3[8] = ui->table3_card_9;
    table3[9] = ui->table3_card_10;
    table3[10] = ui->table3_card_11;
    table3[11] = ui->table3_card_12;
    table3[12] = ui->table3_card_13;

    table4[0] = ui->table4_card_1;
    table4[1] = ui->table4_card_2;
    table4[2] = ui->table4_card_3;
    table4[3] = ui->table4_card_4;
    table4[4] = ui->table4_card_5;
    table4[5] = ui->table4_card_6;
    table4[6] = ui->table4_card_7;
    table4[7] = ui->table4_card_8;
    table4[8] = ui->table4_card_9;
    table4[9] = ui->table4_card_10;
    table4[10] = ui->table4_card_11;
    table4[11] = ui->table4_card_12;
    table4[12] = ui->table4_card_13;

    table5[0] = ui->table5_card_1;
    table5[1] = ui->table5_card_2;
    table5[2] = ui->table5_card_3;
    table5[3] = ui->table5_card_4;
    table5[4] = ui->table5_card_5;
    table5[5] = ui->table5_card_6;
    table5[6] = ui->table5_card_7;
    table5[7] = ui->table5_card_8;
    table5[8] = ui->table5_card_9;
    table5[9] = ui->table5_card_10;
    table5[10] = ui->table5_card_11;
    table5[11] = ui->table5_card_12;
    table5[12] = ui->table5_card_13;

    table6[0] = ui->table6_card_1;
    table6[1] = ui->table6_card_2;
    table6[2] = ui->table6_card_3;
    table6[3] = ui->table6_card_4;
    table6[4] = ui->table6_card_5;
    table6[5] = ui->table6_card_6;
    table6[6] = ui->table6_card_7;
    table6[7] = ui->table6_card_8;
    table6[8] = ui->table6_card_9;
    table6[9] = ui->table6_card_10;
    table6[10] = ui->table6_card_11;
    table6[11] = ui->table6_card_12;
    table6[12] = ui->table6_card_13;


    table7[0] = ui->table7_card_1;
    table7[1] = ui->table7_card_2;
    table7[2] = ui->table7_card_3;
    table7[3] = ui->table7_card_4;
    table7[4] = ui->table7_card_5;
    table7[5] = ui->table7_card_6;
    table7[6] = ui->table7_card_7;
    table7[7] = ui->table7_card_8;
    table7[8] = ui->table7_card_9;
    table7[9] = ui->table7_card_10;
    table7[10] = ui->table7_card_11;
    table7[11] = ui->table7_card_12;
    table7[12] = ui->table7_card_13;

    table1[0]->setEnabled(false);
    table1[0]->setStyleSheet(
                                "border-style: inset;"
                                "border-width: 2px;"
                                "border-color: red;"
    );
    table2[0]->setEnabled(false);
    table2[0]->setStyleSheet(
                                "border-style: inset;"
                                "border-width: 2px;"
                                "border-color: red;"
    );
    table3[0]->setEnabled(false);
    table3[0]->setStyleSheet(
                                "border-style: inset;"
                                "border-width: 2px;"
                                "border-color: red;"
    );
    table4[0]->setEnabled(false);
    table4[0]->setStyleSheet(
                                "border-style: inset;"
                                "border-width: 2px;"
                                "border-color: red;"
    );
    table5[0]->setEnabled(false);
    table5[0]->setStyleSheet(
                                "border-style: inset;"
                                "border-width: 2px;"
                                "border-color: red;"
    );
    table6[0]->setEnabled(false);
    table6[0]->setStyleSheet(
                                "border-style: inset;"
                                "border-width: 2px;"
                                "border-color: red;"
    );
    table7[0]->setEnabled(false);
    table7[0]->setStyleSheet(
                                "border-style: inset;"
                                "border-width: 2px;"
                                "border-color: red;"
    );

    ui->deck_back->setEnabled(false);
    ui->deck_back->setStyleSheet(
                "border-image: url(:"+back+");"
                "background: white;"
                "border-style: inset;"
                "border-width: 2px;"
                "border-color: red;"
    );

    ui->deck_face->setEnabled(false);
    ui->deck_face->setStyleSheet(
                "border-style: inset;"
                "border-width: 2px;"
                "border-color: red;");

    for (unsigned i = 0; i < 4; ++i){
        found[i]->setStyleSheet(
                    "border-style: inset;"
                    "border-width: 2px;"
                    "border-color: red;");
        found[i]->setEnabled(false);
    }
    for (unsigned i = 1; i < 13; ++i){
        table1[i]->hide();
        table2[i]->hide();
        table3[i]->hide();
        table4[i]->hide();
        table5[i]->hide();
        table6[i]->hide();
        table7[i]->hide();
    }
}
