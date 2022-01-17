
#include "LinkedList.h"

LinkedList::LinkedList() {
   head = nullptr;
   
   // TODO
   tail = nullptr;
   length = 0;
}

LinkedList::~LinkedList() {
   delete head;
   delete tail;
}

void LinkedList::addFront(Tile* t) {
   Node* temp = new Node(); // on the heap (to be deleted) DECONSTRUCTOR
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

void LinkedList::removeFront() {

}

void LinkedList::addEnd(int n) {

}

void LinkedList::removeEnd() {

}
