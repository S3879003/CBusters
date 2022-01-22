
#ifndef ASSIGN2_LINKEDLIST_H
#define ASSIGN2_LINKEDLIST_H

#include "Node.h"

class LinkedList {
public:

   LinkedList();
   ~LinkedList();

   void addTile(Node* t);
   void removeTile(Node* t);
   void replaceTile(Node* t); //swapping tile in hand from bag
   int getLength();
   void placeTileEnd(Node* t);
   Tile* getTileAtIndex(int index);
   Node* removeFront(); 

private:
   Node* head;
   Node* tail;
   int length;
};

#endif // ASSIGN2_LINKEDLIST_H
