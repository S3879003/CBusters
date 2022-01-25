
#ifndef ASSIGN2_LINKEDLIST_H
#define ASSIGN2_LINKEDLIST_H

#include "Node.h"

class LinkedList {
public:

   LinkedList();
   ~LinkedList();

   void removeTile(Node* t);
   Tile* remove_front();
   int getLength();
   void addTileEnd(Tile* t);
   Tile* getTileAtIndex(int index);
   // void placeTileAtIndex(Node* t, int index);
   Tile* placeTile(Tile* tile);
   void removeTileAtIndex(int index);

private:
   Node* head;
   Node* tail;
   int length;
};

#endif // ASSIGN2_LINKEDLIST_H