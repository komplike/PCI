//Table.cpp + table.h hlavicky;
//pridat include do table.cpp
#include "save.h"


// za initGame()
void Table::loadGame() {
    std::ifstream file;
    file.open("save.log");
    if(!file.is_open())
        return;
    foundation = vector<Piles>(4);
    tableau = vector<Piles>(7);

    string line;
    int n,i=0;
    while (! file.eof()) {
        getline( file, line );
        istringstream is (line);
        while (is >> n) {
            switch(i) {
                case 0: deck.push_back(&all[n]);break;
                case 1:
                case 2:
                case 3:
                case 4: foundation[i-1].insert(&all[n]);foundation[i-1].face(true);break;
            default: tableau[i-5].insert(&all[n]);is>>n;if (n==1) tableau[i-5].face(true);break;
                }
            }
        ++i;
    }
    file.close();
    deckLast()->setFace(true);
    for (unsigned i = 0; i < tableau.size(); i++){
        tableau[i].face(true);
        }
}
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
/////////////////////////////////////////////////////////
