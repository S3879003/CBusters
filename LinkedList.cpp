
#include "LinkedList.h"
#include <iostream>
#include <limits>

LinkedList::LinkedList() {
   head = nullptr;
   tail = nullptr;
   length = 0;
}

LinkedList::~LinkedList() {
   delete head;
   delete tail;
}

// Get length
int LinkedList::getLength() {
   return length;
}

void LinkedList::removeTile(Node* t) { //remove from list, when added to playerlist
   // 1. select tile
   Node* temp = new Node(t->tile, t->next); // on the heap (to be deleted)
   // 2. set tile as temp
   temp->tile = t->tile;
   temp->next = nullptr;
   
   if (head == nullptr) {
      head = temp;
      tail = temp;
   }
   else {
      temp->next = head;
      head = temp;
   }
   length++;
   delete temp;

   // 3. remove tile from list
   // 4. return tile info.
   // return 0;
}

// Tile LinkedList::replaceTile() {
//    // create temp node
//    Node* temp = new Node(t->tile, t->next); // on the heap (to be deleted)
//    // set temp tile to input, temp next to nullptr
//    temp->tile = t->tile;
//    temp->next = nullptr;

//    // remove tile from hand 
//    // removeTile(t); 

//    // place tile back in bag
//    placeTileEnd(t);

//    // pickup new tile from bag --> put into hand, remove from list
//    // add from front of bag
//    removeTile(t); 

//    delete temp;
   
//    // return TILE
// }
// pass in the players hand (linkedList) and the tile bag, and which to remove from hand
// pass in 

void LinkedList::placeTileEnd(Tile* t) {
   Node* temp = new Node(new Tile(t->getColour(), t->getShape()), nullptr); // on the heap (to be deleted)
   // temp->tile = t->tile;
   // temp->next = nullptr;
   
   if (head == nullptr) {
      head = temp;
      tail = temp;
   }
   else {
      tail->next = temp;
      tail = temp;
   }
   length++;
   delete temp;
}

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

// void LinkedList::placeTileAtIndex(Node* t, int index) {
//    int count = 0;
//    Node* current = head;
//    // int returnValue = 0;
//    if(index >= 0 && index < getLength()) {
//       while(count < index) {
//          ++count;
//          current = current->next;
//       }
//    }
// }

Tile LinkedList::placeTile(Tile* tile){ //removes tile from list to go onto board
   int i = 0;
   Tile* placedTile = nullptr;
   //  Tile temp = new Tile(getTileAtIndex(i)->getColour(),getTileAtIndex(i)->getShape());
   Tile* temp = getTileAtIndex(i);

   //  while(tile->equals(temp) == false || i < length)
   while(tile->colour != temp->getColour() && tile->shape != temp->getShape()) {
    {
        if(tile->colour != temp->getColour() && tile->shape != temp->getShape()){
            placedTile = getTileAtIndex(i);
            for (int x = i; x < getLength() - 1; x++)
            {
                setTileAtIndex(x);
            }
        }
        i++;
        temp = getTileAtIndex(i);
    }
    return *placedTile;
}
}

// void LinkedList::setTileAtIndex(int index) {
//    int count = 0;
//    Node* current = head;
//    Tile* returnValue;
//    if(index >= 0 && index < getLength()) {
//       while(count < index) {
//          ++count;
//          current = current->next;
//       }
//       returnValue = current->tile;
//    }
   
// }

void LinkedList::setTileAtIndex(int index){
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
            }else{
                prev->next = current->next;
            }

            delete current->tile;
            delete current;
        }
    }
}
