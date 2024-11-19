#include <iostream>
#include <cstring>
#include <vector>
#include <map>
#include "room.h"
#include "item.h"

using namespace std;

room::room(const char* name, const char* street) {
  roomName = new char[40];
  streetName = new char[40];
  strcpy(roomName, name);
  strcpy(streetName, street);
}

char* room::getName() {
  return roomName;
}

char* room::getStreet() {
  return streetName;
}

void room::setExit(char dir, room* Room, map<char, room*> &mp) {
  mp[dir] = Room;
}

room* room::getExit(char dir, map<char, room*> mp) {
  map<char, room*>::iterator iter;
  for (iter = mp.begin(); iter != mp.end(); ++iter) {
    if (iter->first == dir) {
      return mp[dir];
    }
  }
  return NULL;
}

void room::seeExits(map<char, room*> mp) {
  map<char, room*>::iterator iter;
  for (iter = mp.begin(); iter != mp.end(); ++iter) {
    cout << "- " << iter->first << ", " << iter->second->getName() << endl;
  }
}

void room::seeItems(vector<item*> items) {
  vector<item*>::iterator it;
  for (it = items.begin(); it < items.end(); it++) {
    cout << "- \e[34m" << (*it)->getName() << "\e[0m" << endl;
  }
}

void room::addItem(item* Item, vector<item*> &vect) {
  vect.push_back(Item);
}

item* room::getItem(const char* itemName, vector<item*> &vect) {
  vector<item*>::iterator iter;
  for (iter = vect.begin(); iter < vect.end(); iter++) {
    if (strcmp(itemName, (*iter)->getName()) == 0) {
      cout << "Player has acquired \e[34m" << (*iter)->getName() << "\e[0m" << endl;
      vect.erase(iter);
      return *iter;
    }
  }
  return NULL;
}
