
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

void LinkedList::replaceTile(Node* t) {
   // create temp node
   Node* temp = new Node(t->tile, t->next); // on the heap (to be deleted)
   // set temp tile to input, temp next to nullptr
   temp->tile = t->tile;
   temp->next = nullptr;

   // remove tile from hand 
   // removeTile(t); 

   // place tile back in bag
   placeTileEnd(t);

   // pickup new tile from bag --> put into hand, remove from list

   removeTile(t); 

   delete temp;
}

void LinkedList::placeTileEnd(Node* t) {
   Node* temp = new Node(t->tile, t->next); // on the heap (to be deleted)
   temp->tile = t->tile;
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

// Node* LinkedList::removeFront() { 
//    Node* temp = new Node(t->tile, t->next); // on the heap (to be deleted)

//    if (head == NULL) {
//       std::cout << "List is empty" << std::endl;
//    }
//    else if (head == tail) {
//       x = head->data;
//       head = NULL;
//       tail = NULL;
//    }
//    else {
//       Node<T>* temp;
//       temp = head;
//       x = head->data;
//       head = head->next;
//       delete(temp);
//    }
//    return x;
// }