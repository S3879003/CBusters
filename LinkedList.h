
#ifndef ASSIGN2_LINKEDLIST_H
#define ASSIGN2_LINKEDLIST_H

#include "Node.h"

class LinkedList {
public:

   LinkedList();
   ~LinkedList();

   void removeTile(Node* t);
   // void replaceTile(Node* t); //swapping tile in hand from bag
   int getLength();
   void placeTileEnd(Node* t);
   Tile* getTileAtIndex(int index);
   // void placeTileAtIndex(Node* t, int index);
   Tile placeTile(Tile* tile);
   void setTileAtIndex(int index);

private:
   Node* head;
   Node* tail;
   int length;
};

#endif // ASSIGN2_LINKEDLIST_H
