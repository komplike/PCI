/**
  * @file save.cpp
  * @author xsanta07
  * @author xslavk01
  * @brief Implementation of saving game.
  */
#include "save.h"
#include <iostream>

using namespace std;
//TODO nezabudnut na face!!
int save(Table *tab){
    cout <<endl << "deck" << endl;
    for (unsigned i = 0; i < tab->deckSize(); ++i){
        cout << getIndex(tab->getDeckCard(i)) << ",";
    }
    cout << endl << "foundation:" << endl;
    for (int i = 0; i < 4; ++i){
        for (unsigned j = 0; j < tab->foundSize(i); ++j){
            cout << getIndex(tab->getFoundCard(i,j)) << ",";
        }
        cout << endl;
    }
    cout << "table:" << endl;

    for (unsigned i = 0; i < 7; ++i){
        for (unsigned j = 0; j < tab->tableSize(i); ++j){
            cout << getIndex(tab->getTableCard(i,j)) << ",";
        }
        cout << endl;
    }
    return 0;
}

int getIndex(Card *card){
    if (card == nullptr){
        return -1;
    }
    int r = Ranking(card->GetRank());
    int s = Suiting(card->GetSuit());

    if (s == 4)
        return 52;
    return r-1 + s*13;
}

