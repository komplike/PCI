/**
  * @file card.h
  * @author xsanta07
  * @author xslavk01
  * @brief Card representation.
  */
#ifndef CARDH
#define CARDH
#include <iostream>
#include <ostream>
#include <string>

enum Rank { Ace=1, Two, Three, Four, Five, Six, Seven, Eight, Nine, Ten, Jack, Queen, King, Zero };
enum Suit { Spades, Hearts, Diamonds, Clubs, Blank };

class Card {
private:
    Rank rank;
    Suit suit;
    bool face = false;
public:
    Card(Rank rank, Suit suit);
    Rank GetRank() const;
    Suit GetSuit() const;
    bool GetFace() const;
    void setFace(bool f);
    void Print();

};

int Ranking(Rank rank);
int Suiting(Suit suit);

#endif // CARDH
