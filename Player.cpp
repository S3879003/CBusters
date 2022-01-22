#include "Player.h"
#include <iostream>

Player::Player(std::string name, int id, int score, LinkedList hand): 
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
Tile* Player::placeTile(Tile &tile){
    int i;
    Tile* placedTile = nullptr;
    while(tile.equals(hand[i]) == false || i < hand.getLength())
    {
        if(tile.equals(hand[i])){
            placedTile = hand[i];
            for (int x = i; x < hand.getLength() - 1; x++)
            {
                hand[x] = hand[x+1];
            }
            
        }
        i++;
    }
    return placedTile;
}
// void Player::replaceTile(Tile &tile, LinkedList tilebag){
//     int i;
//     Tile* removeTile = nullptr;
//     while(!tile.equals(hand[i]) || i < hand.length()){

//         i++;
//     }

// }
Tile* Player::tileAtIndex(int i){
    Tile* tile = nullptr;
     if(i >= 0 && i < Player::getHandCount()) tile = hand[i];
   
    return tile;
}