#ifndef ASSIGN2_TILE_H
#define ASSIGN2_TILE_H
#include "TileCodes.h"

// Define a Colour type
typedef char Colour;

// Define a Shape type
typedef int Shape;

class Tile {
public:
   Colour colour;
   Shape  shape;


   Tile(Colour colour, Shape shape);

   Tile(Tile& other);

   Colour getColour();

   Shape getShape();

   bool equals(Tile& tile);
};

#endif // ASSIGN2_TILE_H