#include "Player.h"

//player constructor
Player::Player(std::string name, int id,  int score, LinkedList* hand): 
                                        name(name), score(score), hand(hand)
                                        {}

//returns players score
int Player::getScore(){
    return this->score;
}

//sets players score
void Player::setScore(int score){
    this->score = score;
}


//updates players score
void Player::updateScore(int score){
    this->score += score;
}

//returns the players hand list
LinkedList* Player::getHand(){
    return hand;
}

//returns players name
std::string Player::getPlayerName(){
    return name;
}

void Player::setPlayerName(std::string n){
    this->name = name;
}

//gets the length of the players hand
int Player::getHandCount(){
    return hand->getLength();
}

void Player::setHand(LinkedList* playersHand){
    hand = playersHand;
}

//adds a tile to back of the players hand
void Player::addTile(Tile* tile){
    hand->addTileEnd(tile);
}

int Player::getID(){
    return id;
}

// void Player::setID(int id){
//     this->id = id;
// }

// Tile* Player::tileAtIndex(int i){
//      if(i >= 0 && i < Player::getHandCount()){
//         return hand.;
//      } 
   
//     return nullptr;
// }