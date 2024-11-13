#include <iostream>
#include <cstring>
#include "room.h"

using namespace std;

int main() {
  //all "rooms"
  room* HOME = new room("HOME", "1st St");
  room* R1 = new room("Road", "5th St");
  room* R2 = new room("Road", "2nd & 4th St");
  room* R3 = new room("Road", "2nd and 5th St");
  room* R4 = new room("Road", "2nd and 6th St");
  room* R5 = new room("Road", "3rd and 4th St");
  room* R6 = new room("Road", "3rd and 6th St");
  room* R7 = new room("Road", "3rd and 7th St");
  room* S1 = new room("DRY BASICS", "2nd St");
  room* S2 = new room("NUTS", "7th St");
  room* S3 = new room("EGGS", "3rd St");
  room* S4 = new room("FRUITS", "3rd St");
  room* S5 = new room("MY STORE", "3rd St");
  room* S6 = new room("DAIRY", "4th St");
  room* S7 = new room("SPICES", "6th St");
  room* S8 = new room("VEGGIES", "7th St");
  
  //all exits
  HOME->setExit('w', R1, HOME->exits);
  R1->setExit('n', R3, R1->exits); R1->setExit('e', HOME, R1->exits);
  R2->setExit('n', R4, R2->exits); R2->setExit('e', R3, R2->exits); R2->setExit('w', S1, R2->exits);
  R3->setExit('e', R4, R3->exits); R3->setExit('w', R2, R3->exits);
  R4->setExit('n', R6, R4->exits); R4->setExit('w', R3, R4->exits);
  R5->setExit('n', S6, R5->exits); R5->setExit('e', S4, R5->exits); R5->setExit('s', R2, R5->exits); R5->setExit('w', S3, R5->exits);
  R6->setExit('n', S7, R6->exits); R6->setExit('e', R7, R6->exits); R6->setExit('s', R4, R6->exits); R6->setExit('w', S4, R6->exits);
  R7->setExit('n', S8, R7->exits); R7->setExit('e', S5, R7->exits); R7->setExit('s', S2, R7->exits); R7->setExit('w', R6, R7->exits);
   
  //room* Room = new room("Room");
  //Room->addItem(new item("sword"), Room->itemVect);
  //item* i = Room->getItem("sword", Room->itemVect);
}
