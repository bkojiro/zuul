#include <iostream>
#include <cstring>
#include "room.h"

using namespace std;

int main() {
  room* Room = new room("Room");
  Room->addItem(new item("sword"), Room->itemVect);
  item* i = Room->getItem("sword", Room->itemVect);
}
