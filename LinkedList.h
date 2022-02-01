
#ifndef ASSIGN2_LINKEDLIST_H
#define ASSIGN2_LINKEDLIST_H

#include "Node.h"

class LinkedList {
public:

   LinkedList();
   ~LinkedList();

   int getLength();
   void addTileEnd(Tile* t);
   Tile* getTileAtIndex(int index);
   Tile* placeTile(Tile* tile);
   Tile* remove_front();
   void remove_back();
   void removeTileAtIndex(int index);

private:
   Node* head;
   Node* tail;
   int length;
};

#endif // ASSIGN2_LINKEDLIST_H