#include <iostream>
#include <cstring>
#include "item.h"

using namespace std;

item::item(const char* name) {
  itemName = new char[40];
  strcpy(itemName, name);
}

char* item::getName() {
  return itemName;
}
