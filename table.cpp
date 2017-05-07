/**
  * @file table.cpp
  * @author xsanta07
  * @author xslavk01
  * @brief Table functions.
  */

#include "table.h"
#include "save.h"

using namespace std;

Card *Table::deckLast(){
    return deck[deck.size() - 1];
}

Card *Table::deckFirst(){
    return deck[0];
}

Card *Table::getDeckCard(int i){
    return deck[i];
}

Card *Table::getFoundCard(int found, int card){
    return foundation[found].getCard(card);
}

Card *Table::getTableCard(unsigned table, unsigned card){
    return tableau[table].getCard(card);
}

unsigned Table::tableSize(unsigned i){
    return tableau[i].size();
}

unsigned Table::foundSize(int i){
    int a = foundation[i].size();
    return a;
}

Card *Table::getFoundLast(int found){
    return foundation[found].getLast();
}

unsigned Table::deckSize(){
    return deck.size();
}

void Table::shuffle() {
    if (all.size() > 52){
        for (unsigned i = 0; i < all.size(); ++i){
            if (Suiting(all[i].GetSuit()) == 4)
                all.erase(all.begin() + i);
        }
    }
    srand ( unsigned ( time(0) ) );
    random_shuffle ( all.begin(), all.end() );
    all.push_back(Card(Rank::Zero, Suit::Blank));
};

void Table::initGame() {
    shuffle();
    foundation = vector<Piles>(4);
    tableau = vector<Piles>(7);

    for (unsigned i = 0; i< all.size(); ++i)
        all[i].setFace(false);

    for (unsigned i = 28; i < all.size(); ++i) {
        deck.erase(deck.begin(), deck.end());
    }

    int size = 1;
    int index = 0;
     for (unsigned i = 0; i < tableau.size(); i++){
         for(int j = 0; j < size; j++){
             tableau[i].insert(&all[index]);
             index++;
         }
         tableau[i].face(true);
         size++;
     }

    for (unsigned i = 28; i < all.size(); ++i) {
        deck.push_back(&all[i]);
    }

}

void Table::loadGame() {
    ifstream file;
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

void Table::print(){
    printDeck();
    printFoundation();
    printTableau();
}

void Table::printTableau() {
    for (int i = 0; i < 7 ; ++i){
        cout << i << "\t";
    }
    cout << endl;

    unsigned maxTabSize = 0;

    for (int i = 0; i < 7; ++i)
        if (maxTabSize < tableau[i].size())
            maxTabSize = tableau[i].size();

    for (unsigned i=0; i <  maxTabSize; ++i){
        for (unsigned j = 0; j < 7 ; ++j){
            if (i >= tableau[j].size())
                cout << "  ";
            else if (tableau[j].getFace(i) == true)
                tableau[j].printCard(i);
            else{
                cout << "--";
            }
            cout << '\t';
        }
        cout << endl;
    }
}

void Table::printFoundation(){
    for (unsigned i = 0; i < foundation.size(); ++i){
        switch(i){
            case 0: cout << "0  ♠" << " : ";
                break;
            case 1: cout << "1  ♥" << " : ";
                break;
            case 2: cout << "2  ♣" << " : ";
                break;
            case 3: cout << "3  ♦" << " : ";
        }



        if (foundation[i].size() == 0)
            cout << "--";

        for (unsigned j = 0; j < foundation[i].size(); ++j){
            foundation[i].printCard(j);
            cout << " ";
        }
        cout << endl << endl;
    }

}

void Table::printDeck(){
    cout << "deck: -- ";
    deckLast()->Print();
    cout << endl<< endl;
}




int Table::dealCard(){
    rotate(deck.begin(), deck.begin() + 1, deck.end());

    return 0;
}

int Table::deck2Table(int to){
    // deck netreba kontrolovat ci je prazdny pretoze v nom musi zostat prazdna karta
    if ( deckRule() == 1 ||
            tableRule(tableau[to].getLast(), deckLast()) == 1)
        return 1;
    tableau[to].insert(deckLast());
    tableau[to].getLast()->setFace(true);

    std::cout << "deck pred: " <<  deck.size();
    deck.pop_back();
    std::cout<< " deck po: " << deck.size() << "\n";
    return 0;
}

int Table::deck2Found(){
    if (deckRule() == 1 || foundRule(deckLast()) == 1)
        return 1;

    switch(Suiting(deckLast()->GetSuit())){
        case 0: foundation[0].insert(deckLast());
            foundation[0].getLast()->setFace(true);
            break;
        case 1: foundation[1].insert(deckLast());
            foundation[1].getLast()->setFace(true);
            break;
        case 2: foundation[2].insert(deckLast());
            foundation[2].getLast()->setFace(true);
            break;
        case 3: foundation[3].insert(deckLast());
            foundation[3].getLast()->setFace(true);
            break;
    }
    std::cout << "deck pred: " <<  deck.size();
    deck.pop_back();
    std::cout<< " deck po: " << deck.size() << "\n";
    return 0;
}

int Table::table2Table(int to, int from, int position) {
    if (tableau[from].empty())
        return 1;
    Card *toCard = tableau[to].getLast();
    Card *fromCard = getTableCard(from, position);
std::cout << position << "position\n";
    if (tableRule(toCard, fromCard) == 1){
        std::cout << "!succ\n";
        return 1;
    }
    std::cout << "----------------------------------------succ\n" << position << tableau[from].size();

    /*
        tu bude cyklus prekladat karty od konca from pile do tmp pile
        potom dalsi cyklus prelozi z tmp pile do to
    */
    Piles tmp;
    print();
    for (int i = tableau[from].size() - 1; i >= position; --i){
        std::cout <<tmp.size()<< "do tmp\n";
        tmp.insert(tableau[from].getLast());
        tableau[from].pop();
    }
    for (unsigned i = 0; 0 < tmp.size(); i++){
        std::cout << tmp.size() <<"z tmp\n";
        tableau[to].insert(tmp.getLast());
        tmp.pop();
    }

//    tableau[to].insert(tableau[from].getLast());
//    tableau[from].pop();
    if (!tableau[from].empty())
        tableau[from].getLast()->setFace(true);

    print();
    return 0;
}

int Table::table2Found(int from) {

    if (tableau[from].empty()){
       return 1;
    }

    if (foundRule(tableau[from].getLast()) == 1)
        return 1;

    switch(Suiting(tableau[from].getLast()->GetSuit())){
        case 0: foundation[0].insert(tableau[from].getLast());
            foundation[0].getLast()->setFace(true);
            break;
        case 1: foundation[1].insert(tableau[from].getLast());
            foundation[1].getLast()->setFace(true);
            break;
        case 2: foundation[2].insert(tableau[from].getLast());
            foundation[2].getLast()->setFace(true);
            break;
        case 3: foundation[3].insert(tableau[from].getLast());
            foundation[3].getLast()->setFace(true);
            break;
    }
std::cout << "tu?   4\n";
    tableau[from].pop();
    if (!tableau[from].empty())
        tableau[from].getLast()->setFace(true);

    return 0;
}

int Table::found2Table(int from, int to) {
    if (foundation[from].empty()){
        return 1;
    }

    if (tableRule(tableau[to].getLast(), foundation[from].getLast()) == 1)
        return 1;

    tableau[to].insert(foundation[from].getLast());

    foundation[from].pop();

    return 0;
}

int Table::foundRule(Card *card){
    if (card == nullptr)
        return 1;
    int i = Suiting(card->GetSuit());

    if (i > 4)
        return 1;
    //ak je foundation prazdna musi to byt eso (1)
    if (foundation[i].empty()){
        if (Ranking(card->GetRank()) == 1) {
            return 0;
        }
        else {
            return 1;
        }
    }
    // ak vo foundation rovnakej farby nie je o 1 mensia alebo ide o prazdnu kartu
    if (Ranking(foundation[i].getLast()->GetRank()) + 1 == Ranking(card->GetRank())) {
        return 0;
    }
    return 1;
}

int Table::tableRule(Card *to, Card *from){
    if (from == nullptr)
        return 1;
    //ak nieje spodna karta ide na spod kral
    if (to == nullptr && Ranking(from->GetRank()) == 13){ //13 je kral
        return 0;
    }
    if (Suiting(to->GetSuit())%2 != Suiting(from->GetSuit())%2) {     //sedi farba
        if (Ranking(to->GetRank()) == Ranking(from->GetRank()) + 1){   //je karta vysia
            return 0;
        }
    }
    return 1;
}

int Table::deckRule(){
    if (Ranking(deckLast()->GetRank()) == 14)
        return 1;
    else
        return 0;
}


Card* Table::hint() {
    unsigned int i;
    if(!deckRule()) {
        if(!foundRule(deckLast())) {
            return deckLast();
        }
    }
    for (i=0;i<7;++i) {
        if(!foundRule(tableau[i].getLast())){
            return tableau[i].getLast();
        }
    }
    for (i=0;i<7;++i) {
        for (unsigned int j=0;j<7;++j) {
            if(!tableRule(tableau[i].getLast(),tableau[j].getLast()))
                return tableau[j].getLast();
        }
    }
    for (i=0;i<4;++i) {
        for (unsigned int j=0;j<7;++j) {
            if(!tableRule(foundation[i].getLast(),tableau[j].getLast()))
                return foundation[i].getLast();
        }
    }
    return nullptr;
}

int Table::emptyDT() {
    if(deck.empty() && tableau.empty())
        return 1;
    else return 0;
}
