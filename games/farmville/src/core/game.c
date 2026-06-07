#include "game.h"
#include "../config/constants.h"
#include "../world/world.h"
#include "raylib.h"

void GameUpdate(void) {
  Vector2 mouse = GetMousePosition();

  int tileX = mouse.x / TILE_SIZE;
  int tileY = mouse.y / TILE_SIZE;

  if (tileX < 0 || tileX >= GRID_WIDTH)
    return;

  if (tileY < 0 || tileY >= GRID_HEIGHT)
    return;

  if (IsMouseButtonPressed(MOUSE_LEFT_BUTTON)) {
    Tile *tile = &world[tileY][tileX];

    switch (tile->state) {
    case GRASS:
      tile->state = PLOWED;
      break;

    case PLOWED:
      tile->state = SEED;
      tile->plantedTime = GetTime();
      break;

    case SEED:
      break;

    case GROWING:
      break;

    case READY:
      tile->state = GRASS;
      break;
    }
  }
}

void GameDraw(void) { DrawWorld(); }