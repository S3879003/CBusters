
#ifndef ASSIGN2_LINKEDLIST_H
#define ASSIGN2_LINKEDLIST_H

#include "Node.h"

class LinkedList {
public:

   LinkedList();
   ~LinkedList();

   void placeTileFront(int t);
   void replaceTile(Tile t);
   int getLength();
   void placeTileEnd(int t);
   void removeEnd();

private:
   Node* head;
   Node* tail;
   int length;
};

#endif // ASSIGN2_LINKEDLIST_H
