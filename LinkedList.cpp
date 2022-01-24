
#include "LinkedList.h"
#include "TileCodes.h"
#include <iostream>
#include <limits>

//constructor
LinkedList::LinkedList() {
   head = nullptr;
   tail = nullptr;
   length = 0;
}

//destructor
LinkedList::~LinkedList() {
   delete head;
   delete tail;
}

//Returns length of list
int LinkedList::getLength() {
   return length;
}

//places a tile at the end of the list
void LinkedList::addTileEnd(Tile* t) {
   Node* temp = new Node(t, nullptr); // on the heap (to be deleted)
   temp->tile = t;
   temp->next = nullptr;

   if (head == nullptr) {
      head = temp;
      tail = temp;
   }
   else {
      tail->next = temp;
      tail = temp;
   }
   length++;
}

//returns tile at index
Tile* LinkedList::getTileAtIndex(int index) {
   int count = 0;
   Node* current = head;
   // int returnValue = 0;
   Tile* returnValue;
   if(index >= 0 && index < getLength()) {
      while(count < index) {
         ++count;
         current = current->next;
      }
      returnValue = current->tile;
   }
   return current->tile;
}

//returns a tile object and deletes from the list
Tile* LinkedList::placeTile(Tile* tile){ //removes tile from list to go onto board
   int i = 0;
   Tile* placedTile = nullptr;
   Tile* temp = getTileAtIndex(0);

   //loop until tile is found or searched through the entire hand
   bool breakLoop = false;
   while(breakLoop == false){
      //if the the tile has the same colour and shape as temp
      if(tile->colour == temp->colour && tile->shape == temp->shape){
         //set placedTile object to the searched for tile
         placedTile = new Tile(getTileAtIndex(i)->colour, getTileAtIndex(i)->shape);
         removeTileAtIndex(i);
         breakLoop = true;
      }
      i++;
      temp = getTileAtIndex(i);
      
      //break the loop if tile cant be found
      if (i > this->getLength()){
         breakLoop = true;
      }
   };

   if (placedTile == nullptr){
      return nullptr;
   }
   return placedTile;
}

//removes a tile from the front of the list
Tile* LinkedList::remove_front(){
   if(head != nullptr){
      Node* toRemove = head;
      head = head->next;
      length--;
      return toRemove->tile;
      delete toRemove;
   }else{
      throw std::runtime_error("Nothing to remove");
   }
}

//removes a tile from the list at index
void LinkedList::removeTileAtIndex(int index){
   if(index >= 0 && index < getLength()){
      if(head != nullptr){
         int counter = 0;
         Node* current = head;
         //pre should point to node before current;
         Node* prev = nullptr;
         while(counter != index){
               ++counter;
               prev = current;
               current = current->next;
         }
         if(prev == nullptr){
               head = current->next;
               std::cout << "assigned new head" << std::endl;
         }else{
               prev->next = current->next;
         }
         length--;
         delete current->tile;
         delete current;
      }
   }
}

// void LinkedList::removeTile(Node* t) { //remove from list, when added to playerlist
//    // 1. select tile
//    Node* temp = new Node(t->tile, t->next); // on the heap (to be deleted)
//    // 2. set tile as temp
//    temp->tile = t->tile;
//    temp->next = nullptr;
   
//    if (head == nullptr) {
//       head = temp;
//       tail = temp;
//    }
//    else {
//       temp->next = head;
//       head = temp;
//    }
//    length++;
//    delete temp;
// }