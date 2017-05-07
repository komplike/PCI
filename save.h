/**
  * @file save.h
  * @author xsanta07
  * @author xslavk01
  * @brief Save game header file.
  */
#ifndef SAVE_H
#define SAVE_H

#include "card.h"
#include "table.h"
#include <fstream>
#include <sstream>
#include <iostream>
#include <vector>

//int save(Table *tab);
int load(int *n);
int getIndex(Card *card);
int save(Table *tab);
#endif // SAVE_H
