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

    //sets the board size
    void setBoardSize(int size);

    //changes players turn
    void changePlayerTurn();

    //returns players turn
    int getPlayersTurn();

    void placeTile(std::string menuInput);

    //checks if row & col coordinates are valid
    bool withinBoard(int row, int col);

    bool checkHand(char colour, int shape);

    bool checkPlacement(char colour, int shape, int row, int col);

    bool checkLineLength(int row, int col, int i, int dirRow[], int dirCol[]);
private:
    //LinkedList holding all tiles.
    LinkedList tileBag;

    //array of the the players.
    Player* playerArr[NUM_PLAYERS];

    int turnTracker;

    int boardSize;

    std::vector<std::vector<Tile*>> map;
};