/**
  * @file table.h
  * @author xsanta07
  * @author xslavk01
  * @brief Table representation.
  */
#ifndef TABLEH
#define TABLEH

#include <vector>
#include <algorithm>    // std::random_shuffle
#include <vector>       // std::vector
#include <ctime>        // std::time
#include <cstdlib>      // std::rand, std::srand
#include <iostream>

#include "card.h"
//#include "save.h"

class Piles {
    std::vector<Card*> pile;
public:
    int getSuit();
    unsigned size();

    bool getFace(int i);
    bool empty();

    void face(bool f);
    void printCard(int i);
    void insert(Card *obj);
    void pop();
    Card *getCard(unsigned i);
    Card *getLast();
};

class Table {

//public:
private:
    void shuffle();

    std::vector<Piles> foundation;
    std::vector<Piles> tableau;
    std::vector<Card*> deck;

    std::vector<Card> all = {
        //Spades 0 - 12
        Card(Rank::Ace, Suit::Spades), Card(Rank::Two, Suit::Spades),
        Card(Rank::Three, Suit::Spades), Card(Rank::Four, Suit::Spades),
        Card(Rank::Five, Suit::Spades), Card(Rank::Six, Suit::Spades),
        Card(Rank::Seven, Suit::Spades), Card(Rank::Eight, Suit::Spades),
        Card(Rank::Nine, Suit::Spades), Card(Rank::Ten, Suit::Spades),
        Card(Rank::Jack, Suit::Spades), Card(Rank::Queen, Suit::Spades),
        Card(Rank::King, Suit::Spades),
        //Hearts 13 - 25
        Card(Rank::Ace, Suit::Hearts), Card(Rank::Two, Suit::Hearts),
        Card(Rank::Three, Suit::Hearts), Card(Rank::Four, Suit::Hearts),
        Card(Rank::Five, Suit::Hearts), Card(Rank::Six, Suit::Hearts),
        Card(Rank::Seven, Suit::Hearts), Card(Rank::Eight, Suit::Hearts),
        Card(Rank::Nine, Suit::Hearts), Card(Rank::Ten, Suit::Hearts),
        Card(Rank::Jack, Suit::Hearts), Card(Rank::Queen, Suit::Hearts),
        Card(Rank::King, Suit::Hearts),
        //Diamonds 26 - 38
        Card(Rank::Ace, Suit::Diamonds), Card(Rank::Two, Suit::Diamonds),
        Card(Rank::Three, Suit::Diamonds), Card(Rank::Four, Suit::Diamonds),
        Card(Rank::Five, Suit::Diamonds), Card(Rank::Six, Suit::Diamonds),
        Card(Rank::Seven, Suit::Diamonds), Card(Rank::Eight, Suit::Diamonds),
        Card(Rank::Nine, Suit::Diamonds), Card(Rank::Ten, Suit::Diamonds),
        Card(Rank::Jack, Suit::Diamonds), Card(Rank::Queen, Suit::Diamonds),
        Card(Rank::King, Suit::Diamonds),
        //Clubs 39 - 51
        Card(Rank::Ace, Suit::Clubs), Card(Rank::Two, Suit::Clubs),
        Card(Rank::Three, Suit::Clubs), Card(Rank::Four, Suit::Clubs),
        Card(Rank::Five, Suit::Clubs), Card(Rank::Six, Suit::Clubs),
        Card(Rank::Seven, Suit::Clubs), Card(Rank::Eight, Suit::Clubs),
        Card(Rank::Nine, Suit::Clubs), Card(Rank::Ten, Suit::Clubs),
        Card(Rank::Jack, Suit::Clubs), Card(Rank::Queen, Suit::Clubs),
        Card(Rank::King, Suit::Clubs)
    };


public:
    void initGame();
    void loadGame();
    void print();
    void printTableau();
    void printFoundation();
    void printDeck();
    //akctions
    int dealCard();
    int deck2Table(int to);
    int deck2Found();
    int table2Table(int to, int from, int position);
    int table2Found(int from);
    int found2Table(int from, int to);

//TODO
//  - vytvorit pomocny vektor v Table
//  - vytvorit nasledujuce funkcie:
//    int table2tmpPile(int from, int index); // presuva karty od konca jednej pile na stole po index do tmpPile
//    int tmpPile2table(int to);              // presuva z tmpPile do pile na stole

    //rules
    int foundRule(Card *card);
    int tableRule(Card *to, Card *from);
    int deckRule();

    unsigned deckSize();
    unsigned foundSize(int i);
    unsigned tableSize(unsigned i);
    Card *deckLast();
    Card *deckFirst();
    Card *getDeckCard(int i);
    Card *getTableCard(unsigned table, unsigned card);
    Card *getFoundCard(int found, int card);
    Card *getFoundLast(int found);
    Card* hint();
};
#endif // TABLEH
