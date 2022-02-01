#include "Node.h"
#include "LinkedList.h"
#include <vector>
#include "Player.h"
#define NUM_PLAYERS 2
#define BOARD_SIZE 26

class game{
public:
    //constructor
    game(std::string playerNames[]);

    //load game constructor
    game(std::string fileName);

    //destructor
    ~game();

    //display game board
    void displayBoard();

    //save game
    void saveGame();
    
    //setup an empty gameboard
    void setupGameboard();

    //intilize tile bag
    void setupTileBag();

    //start gameplay loop.
    void gamePlayLoop();

    void setBoardSize(int size);

    void changePlayerTurn();

    bool withinBoard();


private:
    //LinkedList holding all tiles.
    LinkedList tileBag;

    //array of the the players.
    Player* playerArr[NUM_PLAYERS];

    int turnTracker;

    int boardSize;

    std::vector<std::vector<Tile*>> map;
};