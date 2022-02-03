
#include "LinkedList.h"
#include "Game.h"

#include <iostream>

#define EXIT_SUCCESS    0

int main(void) {
   std::string playerNames[] = {"greg", "john"};
   game* newGame = new game();
   // newGame->startNewGame(playerNames);

   if(newGame->loadPreviousGame("saveTest.save")){
      newGame->gamePlayLoop();
   }else{
      std::cout << "failed to load game, corrupt file" << std::endl;
   }


   return EXIT_SUCCESS;
}
