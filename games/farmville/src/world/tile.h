#ifndef TILE_H
#define TILE_H

typedef enum
{
    GRASS,
    PLOWED,
    SEED,
    GROWING,
    READY
} TileState;

typedef struct
{
    TileState state;
    double plantedTime;
} Tile;

#endif