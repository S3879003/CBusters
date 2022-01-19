#include "Player.h"

Player::Player(string name, int id, int score, TileList hand): 
                                        name(name), id(id), score(score), hand(hand)
                                        {}

int Player::getScore(){
    return score;
}
void Player::setScore(int score){
    Player::score = score;
}
void Player::updateScore(int score){
    Player::score += score;
}
int Player::getHandCount(){
    return hand.getLength();
}
void Player::addTile(Tile &tile){
    hand.add(&tile);
}
Tile Player::tileAtIndex(int i){
     if(i >= 0 && i < Player::getHandCount()) return hand[i];
   
    return nullptr;
}