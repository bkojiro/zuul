#ifndef ITEM_H
#define ITEM_H

#include <iostream>

using namespace std;

class item {
 public:
  item(const char* name);
  char* itemName;
  char* getName();
};

#endif
