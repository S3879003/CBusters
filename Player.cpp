#include "Player.h"
#include <iostream>
#include <string>

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
void Player::removeTile(Tile &tile){
    for (int i = 0; i < hand.length(); i++)
    {
        if(tile.equals(hand[i])){
            for (int x = i; x < hand.length() - 1; x++)
            {
                hand[x] = hand[x+1];
            }
            break;
        }
    }
    
}
void Player::replaceTile(Tile &tile, int i){
    if(i >= 0 && i < Player::getHandCount()){
        hand[i] = tile;
    }

}
Tile Player::tileAtIndex(int i){
     if(i >= 0 && i < Player::getHandCount()) return hand[i];
   
    return nullptr;
}