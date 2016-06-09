#ifndef VISUALIZER_H
#define VISUALIZER_H


#include "Map.h"


/** initialises the Visualizer since it will be using SDL */
void Visualizer_init();


/** visualise the map.
 * map is obviously the map
 * cx is the x position of the player
 * cy is the y position of the player */
void Visualizer_visualize(Map * map,int cx,int cy);


#endif
