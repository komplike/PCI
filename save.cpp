//Table.cpp + table.h hlavicky;
//pridat include do table.cpp
#include "save.h"

// za initGame()
using namespace std;
/////////////////////////////////////////////////////////////
//game.cpp
//nahrad loadgame tymto
Table *loadGame(){
    Table *tab = new Table;
    tab->loadGame();
    return tab;
}

///////////////////////////////////////////

//save.cpp

//pridat include

#include <fstream>
#include <sstream>      // std::istringstream

//nahrad int save() tymto
int save(Table *tab){
    std::ofstream file;
    file.open("save.log");
    if(!file.is_open())
        return -1;
    cout <<endl << "deck" << endl;
    for (unsigned i = 0; i < tab->deckSize(); ++i){
        cout << getIndex(tab->getDeckCard(i)) << ",";
        file << getIndex(tab->getDeckCard(i)) << " ";
    }
    file << endl;
    cout << endl << "foundation:" << endl;
    for (int i = 0; i < 4; ++i){
        for (unsigned j = 0; j < tab->foundSize(i); ++j){
            cout << getIndex(tab->getFoundCard(i,j)) << ",";
            file << getIndex(tab->getFoundCard(i,j)) << " ";
        }
        file << endl;
        cout << endl;
    }
    cout << "table:" << endl;

    for (unsigned i = 0; i < 7; ++i){
        for (unsigned j = 0; j < tab->tableSize(i); ++j){
            cout << getIndex(tab->getTableCard(i,j)) << ",";
            file << getIndex(tab->getTableCard(i,j)) << " " << tab->getTableCard(i,j)->GetFace() << " ";
        }
        cout << endl;
        file << endl;
    }
    file.close();
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
/////////////////////////////////////////////////////////
