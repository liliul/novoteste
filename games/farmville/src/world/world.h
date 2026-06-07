#ifndef WORLD_H
#define WORLD_H

#include "../config/constants.h"
#include "tile.h"

extern Tile world[GRID_HEIGHT][GRID_WIDTH];

void UpdateWorld(void);
void DrawWorld(void);

#endif