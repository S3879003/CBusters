
#include "LinkedList.h"
#include "Game.h"

#include <iostream>

#define EXIT_SUCCESS    0

int main(void) {
   std::string playerNames[] = {"greg", "john"};
   game* newGame = new game("maybe.txt");
   // newGame->loadGame();
   newGame->gamePlayLoop();

   return EXIT_SUCCESS;
}
