#include "save.h"
#include <fstream>
#include <sstream>      // std::istringstream
using namespace std;

//nahrad int save() tymto
int save(Table *tab){
    std::ofstream file;
    file.open("save.log");
    if(!file.is_open())
        return -1;
    for (unsigned i = 0; i < tab->deckSize(); ++i){
        if (Ranking(tab->getDeckCard(i)->GetRank()) != 14) {
            file << getIndex(tab->getDeckCard(i)) << " ";
            }
    }
    file << endl;
    for (int i = 0; i < 4; ++i){
        for (unsigned j = 0; j < tab->foundSize(i); ++j){
            file << getIndex(tab->getFoundCard(i,j)) << " ";
        }
        file << endl;
    }

    for (unsigned i = 0; i < 7; ++i){
        for (unsigned j = 0; j < tab->tableSize(i); ++j){
            file << getIndex(tab->getTableCard(i,j)) << " " << tab->getTableCard(i,j)->GetFace() << " ";
        }
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
