#ifndef ROOM_H
#define ROOM_H

#include <iostream>
#include <vector>
#include "item.h"

using namespace std;

class room {
 public:
  room(const char* name);
  char* roomName;
  room* NORTH_ROOM;
  room* EAST_ROOM;
  room* SOUTH_ROOM;
  room* WEST_ROOM;
  vector<item*> itemVect;

  char* getName();
  void setExit(char dir, room* Room);
  room* getExit(char dir);
  void addItem(item* Item, vector<item*> &vect);
  item* getItem(const char* itemName, vector<item*> &vect);
};

#endif
