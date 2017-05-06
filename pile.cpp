/**
  * @file pile.cpp
  * @author xsanta07
  * @author xslavk01
  * @brief Includes functions operating with pile.
  */
#include "table.h"


using namespace std;

void Piles::insert(Card *obj){
    if (obj == nullptr)
        return;
    pile.push_back(obj);
}

unsigned Piles::size(){
    return pile.size();
}

void Piles::face(bool f) {
    if (!pile.empty())
        pile[pile.size()-1]->setFace(f);
}

bool Piles::getFace(int i){
    if (pile.empty())
        return false;
    return pile[i]->GetFace();
}

void Piles::printCard(int i) {
    pile[i]->Print();
}

void Piles::pop() {
    if (pile.empty())
        return;
    pile.pop_back();
}

Card *Piles::getLast(){
    if(pile.empty())
        return nullptr;
    return pile[pile.size()-1];
}

bool Piles::empty(){
    return pile.empty();
}


int Piles::getSuit(){
    return Suiting(pile[pile.size()-1]->GetSuit());
}

Card *Piles::getCard(unsigned i){
    if (i < pile.size())
        return pile[i];
    return nullptr;
}
