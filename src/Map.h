#ifndef MAP_H
#define MAP_H


#include "Tile.h"


/** a map in which the game takes place and all that */
struct Map
{
  enum Tile** data;
  int width;
  int height;
};


/** creates an empty map of a set width and height */
struct Map* Map_createBlankMap(int width,int height);







#endif
