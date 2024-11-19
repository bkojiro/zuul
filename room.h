#ifndef ROOM_H
#define ROOM_H

#include <iostream>
#include <vector>
#include <map>
#include "item.h"

using namespace std;

class room {
 public:
  room(const char* name, const char* street);
  char* roomName;
  char* streetName;
  map<char, room*> exits;
  vector<item*> items;

  char* getName();
  char* getStreet();
  void setExit(char dir, room* Room, map<char, room*> &mp);
  room* getExit(char dir, map<char, room*> mp);
  void seeExits(map<char, room*> mp);
  void seeItems(vector<item*> items);
  void addItem(item* Item, vector<item*> &vect);
  item* getItem(const char* itemName, vector<item*> &vect);
};

#endif
