
#include "Tile.h"
#include "TileCodes.h"

Tile::Tile(Colour colour, Shape shape){
    this->colour = colour;
    this->shape = shape;
}

Tile::Tile(Tile& other){

}

Colour Tile::getColour(){
    return colour;
}

Shape Tile::getShape(){
    return shape;
}

bool Tile::equals(Tile& tile){
    return (this->colour == tile.getColour()) && (this->shape == tile.getShape());
}
