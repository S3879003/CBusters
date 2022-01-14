#include "Game.h"
#include <iostream>
#define BOARD_SIZE 26

//constructor for game object -- In future needs to take in player names from main menu.
game::game(){
    //setup a new game empty board.
    setupGameboard();

    //display the game board
    displayBoard();

    //initilize tile bag - randomly sort the bag.
    setupTileBag();

    //setup players with their name and hand list.
    // for(int i = 0; i < numPlayers; i++){
            //~~call method to create new hand from tile bag - draw 6 tiles and remove them from tileBag LinkedList.~~
            // LinkedList* playerHand = new PlayerHand(TileBag)

            //~~initlize the player[i] with their name + hand.~~
            // playerArr[i] = new Player(playerHand, playerName)
    // }

    //start gameplay loop
    gamePlayLoop();
}

void game::setupTileBag(){
    //fill tilebag with all tiles. - 6 colours with 6 different shapes and 2 of each type (72 in total).

    //randomize the order of the tiles.

}

void game::gamePlayLoop(){
    bool winConditionMet = false;
    bool saveConditionMet = false;
    turnTracker = 1;
    //gameplay loop
    while (!winConditionMet || saveConditionMet)
    {
        //display Players hand
        
        //display player menu
        
        //take input for user
            //place tile

            //replace tile

            //save and exit
            

        //check win condition - if tile bag is empty and 1 player has no tiles left.
        winConditionMet = true;

        //change to next players turn
        if(turnTracker == 1){
            turnTracker = 2;
        }
        else {
            turnTracker = 1;
        }
    }

    // if won display win information.
    
}

void game::saveGame(){
    //ask for save name

    //save player turn tracker
    std::cout << turnTracker << std::endl;
    //save each players hand


    //save the tilebag

    //save game board state.
    for (size_t row = 0; row < map.size(); row++)
    {
        for (size_t col = 0; col < map.size(); col++)
        {
            std::cout << map[row][col];
        }
        std::cout << std::endl;
    }
}

//setup an empty game board.
void game::setupGameboard(){
    for (int row = 0; row < BOARD_SIZE; row++)
    {
        std::vector<Node*> temp;
        for (int col = 0; col < BOARD_SIZE; col++)
        {
            Node* tempNode = nullptr;
            temp.push_back(tempNode);
        }
        map.push_back(temp);
    }
}

//display game board
void game::displayBoard(){
    std::cout << " ";
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < map.size(); j++)
        {
            //display the col numbers on the first interation.
            if(i == 0){
                //ensuring the spacing is correct for the board display
                if(j <= 10){
                    std::cout<< "  " << j;
                }
                else{
                    std::cout<< " " << j;
                }
            }
            //display underlines on the 2nd iteration
            else if(j == 0){
                std::cout << "  ----";
            }
            else{
                std::cout << "---";
            }
        }
        std::cout<<std::endl;
    }
    char rowLetters = 'A';
    //loop through the map vector.
    for (size_t row = 0; row < map.size(); row++)
    {
        //display the Row letters.
        std::cout << rowLetters << " |";
        rowLetters++;
        
        //display the tile or empty space at row and col coordinates.
        for (size_t col = 0; col < map[row].size(); col++)
        {
                if(map[row][col] == nullptr){
                    std::cout << "  ";
                } else{
                    //~~~~need to implement displaying of tile color and shape.~~~~
                    std::cout << map[row][col];
                }
                std::cout << "|";            
        }
        std::cout << std::endl;
    }
}

// for in file testing only
main(){
    game* newGame = new game();
    
}