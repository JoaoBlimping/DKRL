#include "Map.h"

#include <stdlib.h>


struct Map* Map_createBlankMap(int width,int height)
{
  struct Map* map = malloc(sizeof(struct Map));

  map->width = width;
  map->height = height;

  map->data = (enum Tile**)malloc(sizeof(enum Tile*) * width);
  for (int x = 0;x < width;x++)
  {
    map->data[x] = (enum Tile*)malloc(sizeof(enum Tile) * height);
    for (int y = 0;y < height;y++)
    {
      map->data[x][y] = NOTHING;
    }
  }
  return map;
}
