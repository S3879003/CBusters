
#include "LinkedList.h"

#include <iostream>

#define EXIT_SUCCESS    0

int main(void) {
   LinkedList* list = new LinkedList();
   delete list;

   bool inGame = true;
   int menuSelection = 0;

   while (inGame != false) {
      std::cout << "Menu" << std::endl;
      std::cout << "----";
      std::cout << " 1. New Game" << std::endl;
      std::cout << " 2. Load Game" << std::endl;
      std::cout << " 3. Credits (Show student information)" << std::endl;
      std::cout << " 4. Quit" << std::endl;

      std::cin >> menuSelection;   

      switch (menuSelection) {
         case 1:
         // TODO
         break;
         case 2:
         // TODO
         break;
         case 3:
         // TODO
         break;
         case 4:
         inGame = false;
         break;
         default:
         std::cout << "Not a Valid Choice. Enter the corresponding menu number" << std::endl;
         std::cin >> menuSelection;
         break;
   }

   return EXIT_SUCCESS;
}
