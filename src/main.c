#include <stdio.h>

#include "Map.h"


int main(int argc,char** argv)
{
  struct Map * map = Map_createBlankMap(10,10);

  for (int x = 0;x < map->width;x++)
  {
    for (int y = 0;y < map->height;y++)
    {
      map->data[x][y] = x + y;
    }
  }

  //set up

  //input loop that loops until the player inputs something that tells their
  //character to move or whatever

  //game logic

  //display

  return 0;
}
