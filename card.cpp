/**
  * @file card.cpp
  * @author xsanta07
  * @author xslavk01
  * @brief Card representation.
  */
#include "card.h"

Card::Card(Rank rank, Suit suit)
  : rank(rank),
    suit(suit) { }

Rank Card::GetRank() const {
  return rank;
}

Suit Card::GetSuit() const {
  return suit;
}

bool Card::GetFace() const {
    return face;
}

void Card::setFace(bool f) {
    face = f;
}

std::string StringOf(Rank rank) {
  return (std::string []) { "A", "2", "3", "4", "5", "6", "7", "8", "9", "10", "J",
      "Q", "K", "?" }[static_cast<int>(rank) - 1];
}

std::string StringOf(Suit suit) {
  return (std::string []) { "♠", "♥", "♣", "♦", "?" }[static_cast<int>(suit)];
}

void Card::Print() {
    std::cout << StringOf(rank) << StringOf(suit) << ' ';
}


int Ranking(Rank rank) {
    return static_cast<int>(rank);
}

int Suiting(Suit suit) {
    return static_cast<int>(suit);
}
