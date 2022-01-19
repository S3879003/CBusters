
#include "LinkedList.h"
#include <iostream>

class Node {
    public:
    int tile;
    Node* next;
    // node* previous;

    Node() {
        tile = 0;
        next = NULL;
    };
};

LinkedList::LinkedList() {
   head = NULL;
   tail = NULL;
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

void LinkedList::placeTileFront(int t) {
   Node* temp = new Node(); // on the heap (to be deleted)
   temp->tile = t;
   temp->next = NULL;
   
   if (head == NULL) {
      head = temp;
      tail = temp;
   }
   else {
      temp->next = head;
      head = temp;
   }
   length++;
   delete temp;
}

void LinkedList::replaceTile(Tile t) {
   
}

void LinkedList::placeTileEnd(int t) {
   Node* temp = new Node(); // on the heap (to be deleted)
   temp->tile = t;
   temp->next = NULL;
   
   if (head == NULL) {
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