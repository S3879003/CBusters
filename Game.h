#include "Node.h"
#include "LinkedList.h"
#include <vector>

class game{
public:
    //constructor
    game();
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

private:
    //LinkedList holding all tiles.
    LinkedList* tileBag;

    //array of the the players.
    //player* playerArr[numPlayers];

    int turnTracker;

    std::vector<std::vector<Node*>> map;
};