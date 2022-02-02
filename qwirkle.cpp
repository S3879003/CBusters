
#include "LinkedList.h"
#include "Game.h"

#include <iostream>

#define EXIT_SUCCESS    0

int main(void) {
   LinkedList* list = new LinkedList();
   

   bool inGame = true;
   int menuSelection = 0;

   while (inGame != false && !std::cin.eof()) {
      std::cout << "Menu" << std::endl;
      std::cout << "----";
      std::cout << " 1. New Game" << std::endl;
      std::cout << " 2. Load Game" << std::endl;
      std::cout << " 3. Credits (Show student information)" << std::endl;
      std::cout << " 4. Quit" << std::endl;

      std::cin >> menuSelection;   

      switch (menuSelection) {
         case 1: // New Game
            // TODO
            std::string playerNames[2];
            std::cout << "Player 1 Name: " << std::endl;
            std::cin >> playerNames[0];
            std::cout << "Player 2 Name: " << std::endl;
            std::cin >> playerNames[1];

            game* game = new game(playerNames);

            std::cin.ignore();

            

            game* newGame = new game(playerNames);
         break;
         case 2: // Load Game
            // TODO
            game* newGame = new game("save1.txt")
         break;
         case 3: // Credits (Show student information)
            // TODO
            
         break;
         case 4: // Quit (also quit on EOF)
            std::cout << "Goodbye" << std::endl;
            inGame = false;
         break;
         default:
            std::cout << "Invalid Input" << std::endl;
            std::cin >> menuSelection;
         break;
   }

   delete list;

   return EXIT_SUCCESS;
}
