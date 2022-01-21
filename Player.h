#include Tile.h

class Player{
public:


    Player(string name, int id, int score, TileList hand);

    //retrieves tile at specified index
    Tile tileAtIndex(int i);
    
    //Removes tile from list
    void removeTile(Tile &tile);

    //adds tile to tile list
    void addTile(Tile &tile);

    //Replace Tile
    void Player::replaceTile(Tile &tile, int i);

    //Retrieves tileList length
    int getHandCount();
    
    //Adds to the current score
    void updateScore(int score);
    
    //Set the score to certain amount
    void setScore(int score);
    
    //gets score
    int getScore();
    
    //Gets player ID
    void getID();

private:


    string name;
    int id;
    TileList hand;
    int score;


}
