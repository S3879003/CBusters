
// #include "LinkedList.h"
#include "Game.h"

#include <iostream>

#define EXIT_SUCCESS    0

int main(void) {
   bool inGame = true;
   int menuSelection = 0;


   while (inGame != false && !std::cin.eof()) {
      std::cout << "Menu" << std::endl;
      std::cout << "----" << std::endl;
      std::cout << " 1. New Game" << std::endl;
      std::cout << " 2. Load Game" << std::endl;
      std::cout << " 3. Credits (Show student information)" << std::endl;
      std::cout << " 4. Quit" << std::endl;

      std::cin >> menuSelection;

      switch (menuSelection) {
         case 1: {// New Game 
            // TODO
            std::string playerNames[2];
            std::cout << "Player 1 Name: " << std::endl;
            std::cin >> playerNames[0];
            std::cout << "Player 2 Name: " << std::endl;
            std::cin >> playerNames[1];

            std::cin.ignore();

            game* newGame = new game(playerNames);
            newGame->gamePlayLoop();
         break;}
         case 2: { // Load Game
            std::string inputTmp;
            std::string loadGameFile;
            std::cout << "Enter the filename from which load a game" << std::endl;
            // user to enter "save1" (not save1.save)
            std::cin >> inputTmp;

            

            // TODO         
            // 1. Check that the file exists.
            /*
            if loadGame != a file by the same name {
               ERROR
            }
            2. Check that the format of the file is correct. The format for saved games is described in Section 2.3.7.
            If the filename passes both checks, the program should print a message, then load the game as described in
            (check that the extension is .save)
            if file extension != ".save" {
               ERROR
            }
            else {
               // loadGameFile = inputTmp + ".save"
            }
            */

            game* newGame = new game(loadGameFile);
            newGame->gamePlayLoop();
         break; 
         }
         case 3: // Credits (Show student information)
            // TODO
            //CALL CREDITS FUNCTION FROM HERE
            
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

   return EXIT_SUCCESS;
   }

   
}

//CREATE CREDITS FUNCTION HERE