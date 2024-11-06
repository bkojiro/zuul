#include <iostream>
#include <cstring>
#include "room.h"
#include "item.h"

using namespace std;

room::room(const char* name) {
  roomName = new char[40];
  strcpy(roomName, name);
}

char* room::getName() {
  return roomName;
}

void room::setExit(char dir, room* Room) {
  if (dir == 'n') { //set north room
    NORTH_ROOM = Room;
  } else if (dir == 'e') { //set north room
    EAST_ROOM = Room;
  } else if (dir == 's') { //set south room
    SOUTH_ROOM = Room;
  } else if (dir == 'w') { //set west room
    WEST_ROOM = Room;
  }
}

room* room::getExit(char dir) {
  if (dir == 'n') { //get north room
    return NORTH_ROOM;
  } else if (dir == 'e') { //get north room
    return EAST_ROOM;
  } else if (dir == 's') { //get south room
    return SOUTH_ROOM;
  } else if (dir == 'w') { //get west room
    return WEST_ROOM;
  }
  return NULL;
}

void room::addItem(item* Item, vector<item*> &vect) {
  vect.push_back(Item);
}

item* room::getItem(const char* itemName, vector<item*> &vect) {
  vector<item*>::iterator iter;
  for (iter = vect.begin(); iter < vect.end(); iter++) {
    if (strcmp(itemName, (*iter)->getName()) == 0) {
      cout << "Player has acquired \e[33mitem\e[0m" << endl;
      vect.erase(iter);
      return *iter;
    }
  }
  return NULL;
}
