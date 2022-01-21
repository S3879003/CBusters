#include "Game.h"
#include "Node.h"
#include "TileCodes.h"
#include <iostream>
#include <fstream>
#include <string>
#include <random>
#include <algorithm>

//constructor for game object -- In future needs to take in player names from main menu.
game::game(){
    //setup a new game empty board.
    setupGameboard();

    //display the game board
    displayBoard();

    //initilize tile bag - randomly sort the bag.
    setupTileBag();

    //setup players with their name and hand list.
    for(int i = 0; i < NUM_PLAYERS; i++){
            // ~~call method to create new hand from tile bag - draw 6 tiles and remove them from tileBag LinkedList.~~
            // LinkedList* playerHand = new LinkedList();

            // ~~initlize the player[i] with their name + hand.~~
            // playerArr[i] = new Player(playerHand, playerName)
    }

    //start gameplay loop
    gamePlayLoop();
}

//setup a randomly generated tilebag
void game::setupTileBag(){
    //generate all tiles - 6 colours with 6 different shapes and 2 of each type (72 in total).
    //and add them to the linkedlist
        char colour = RED;
        std::vector<Tile*> tempVector;

        for (int i = 0; i < 12; i++)
        {
            if (i >= 2  && i < 4)
            {   
                colour = ORANGE;
            }
            else if (i >= 4  && i < 6){
                colour = YELLOW;
            }
            else if (i >= 6  && i < 8){
                colour = GREEN;
            }
            else if (i >= 8  && i < 10){
                colour = BLUE;
            }
            else if (i >= 10  && i < 12){
                colour = PURPLE;
            }            

            tempVector.push_back(new Tile(colour, CIRCLE));
            tempVector.push_back(new Tile(colour, STAR_4));
            tempVector.push_back(new Tile(colour, DIAMOND));
            tempVector.push_back(new Tile(colour, SQUARE));
            tempVector.push_back(new Tile(colour, STAR_6));
            tempVector.push_back(new Tile(colour, CLOVER));
        }

        //randomize the order of the tiles.
        auto rng = std::default_random_engine {};
        std::shuffle(std::begin(tempVector), std::end(tempVector), rng);

        //add each tile to the linked list
        for(int i = 0; i < (int)tempVector.size(); i++){
            //add each tile to the end of the linkedList
            // tileBag.placeTileEnd(tempVector[i]);
        }

    delete &tempVector;
}

//loops through gameplay until win condition is met
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

    saveGame();

    // if won display win information.
    
}

//saves the game to file
void game::saveGame(){
    //ask for save name
    std::string fileName;
    std::cout<< "please enter file name:" <<std::endl;
    std::cin >> fileName;

    std::ofstream output(fileName + ".txt");

    //save player turn tracker
    // std::cout << turnTracker << std::endl;

    //save each players hand

    //save the tilebag

    //save game board state.


    for (size_t row = 0; row < map.size(); row++)
    {
        for (size_t col = 0; col < map.size(); col++)
        {
            if(map[row][col] == nullptr){
                output << "  ";
            }
            
        }
        output << std::endl;
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
        for (size_t j = 0; j < map.size(); j++)
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