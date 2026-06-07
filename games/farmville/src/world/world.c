#include "world.h"
#include "raylib.h"

Tile world[GRID_HEIGHT][GRID_WIDTH];

void UpdateWorld(void) {
  double now = GetTime();

  for (int y = 0; y < GRID_HEIGHT; y++) {
    for (int x = 0; x < GRID_WIDTH; x++) {
      Tile *tile = &world[y][x];

      if (tile->state == SEED && now - tile->plantedTime >= 5.0) {
        tile->state = GROWING;
      }

      if (tile->state == GROWING && now - tile->plantedTime >= 10.0) {
        tile->state = READY;
      }
    }
  }
}

void DrawWorld(void) {
  for (int y = 0; y < GRID_HEIGHT; y++) {
    for (int x = 0; x < GRID_WIDTH; x++) {
      Color color;

      switch (world[y][x].state) {
      case GRASS:
        color = GREEN;
        break;

      case PLOWED:
        color = BROWN;
        break;

      case SEED:
        color = YELLOW;
        break;

      case GROWING:
        color = LIME;
        break;

      case READY:
        color = GOLD;
        break;

      default:
        color = MAGENTA;
        break;
      }

      DrawRectangle(x * TILE_SIZE, y * TILE_SIZE, TILE_SIZE, TILE_SIZE, color);
      // DrawTexturePro(
      //     grassTexture,
      //     (Rectangle){0, 0, grassTexture.width, grassTexture.height},
      //     (Rectangle){x * TILE_SIZE, y * TILE_SIZE, TILE_SIZE, TILE_SIZE},
      //     (Vector2){0, 0}, 0, WHITE);

      DrawRectangleLines(x * TILE_SIZE, y * TILE_SIZE, TILE_SIZE, TILE_SIZE,
                         BLACK);
    }
  }
}