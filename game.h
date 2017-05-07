/**
  * @file game.h
  * @author xsanta07
  * @author xslavk01
  * @brief Game function decleration.
  */
#ifndef GAME_H
#define GAME_H

#include "table.h"
#include "card.h"

int gameUi();
Table *newGame();
Table *loadGame();
int startMenu();
int foundationMenu();
int actionMenu();
int tableMenu(int opt);
int gameMenu(int *action, int *from, int *to, int *pos);
#endif // GAME_H
