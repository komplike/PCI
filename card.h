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

/**
 * Represent value of cards
 */
enum Rank { Ace=1, Two, Three, Four, Five, Six, Seven, Eight, Nine, Ten, Jack, Queen, King, Zero };
/**
 * Represent type of cards
 */
enum Suit { Spades, Hearts, Diamonds, Clubs, Blank };

class Card {
private:
    Rank rank;
    Suit suit;
    bool face = false;
public:
    /**
     * Creates a card of the given rank and suit.
     */
    Card(Rank rank, Suit suit);
    /**
     * Returns the rank.
     */
    Rank GetRank() const;
    /**
     * Returns the suit.
     */
    Suit GetSuit() const;
    /**
     * Returns the face.
     */
    bool GetFace() const;

    void setFace(bool f);
    /**
     * Prints the information of a card.
     */
    void Print();

};
/**
 * Returns the integer behind the rank enum.
 */
int Ranking(Rank rank);
/**
 * Returns the integer behind the suit enum.
 */
int Suiting(Suit suit);

#endif // CARDH
