
#include "Tile.h"

Tile::Tile(Colour colour, Shape shape): colour(colour), shape(shape){}

Colour Tile::getColour(){
    return colour;
}

Shape Tile::getShape(){
    return shape;
}

bool Tile::equals(Tile& tile){
    return (this->colour == tile.getColour()) && (this->shape == tile.getShape());
}
