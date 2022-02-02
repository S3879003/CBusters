#include "Tile.h"
#include <string>
#include "LinkedList.h"


class Player{
public:

    Player(std::string name, int id, int score, LinkedList* hand);

    //retrieves tile at specified index
    Tile* tileAtIndex(int i);
    
    //Removes tile from list
    void removeTile(Tile &tile);

    //adds tile to tile list
    void addTile(Tile* tile);

    //Retrieves tileList length
    int getHandCount();
    
    //Adds to the current score
    void updateScore(int score);
    
    //Set the score to certain amount
    void setScore(int score);
    
    //gets score
    int getScore();
    
    //Gets player ID
    int getID();
    
    //sets player ID
    void setID(int id);

    //gets player name
    std::string getPlayerName();

    //sets player name
    void setPlayerName(std::string name);

    //Gets Players Hand
    LinkedList* getHand();

private:


    std::string name;
    int id;
    int score;
    LinkedList* hand;



};
