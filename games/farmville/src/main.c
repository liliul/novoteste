// #include "raylib.h"

// #define SCREEN_WIDTH 1280
// #define SCREEN_HEIGHT 720

// #define TILE_SIZE 32

// #define GRID_WIDTH 40
// #define GRID_HEIGHT 20

// #define GRASS 0
// #define PLOWED 1
// #define SEED 2
// #define GROWING 3
// #define READY 4

// typedef struct {
//   int state;
//   double plantedTime;
// } Tile;

// Tile world[GRID_HEIGHT][GRID_WIDTH];

// void UpdateWorld(void) {
//   double now = GetTime();

//   for (int y = 0; y < GRID_HEIGHT; y++) {
//     for (int x = 0; x < GRID_WIDTH; x++) {
//       Tile *tile = &world[y][x];

//       if (tile->state == SEED) {
//         if (now - tile->plantedTime >= 5.0) {
//           tile->state = GROWING;
//         }
//       }

//       if (tile->state == GROWING) {
//         if (now - tile->plantedTime >= 10.0) {
//           tile->state = READY;
//         }
//       }
//     }
//   }
// }

// void DrawWorld(void) {
//   for (int y = 0; y < GRID_HEIGHT; y++) {
//     for (int x = 0; x < GRID_WIDTH; x++) {
//       Color color;

//       switch (world[y][x].state) {
//       case GRASS:
//         color = GREEN;
//         break;

//       case PLOWED:
//         color = BROWN;
//         break;

//       case SEED:
//         color = YELLOW;
//         break;

//       case GROWING:
//         color = LIME;
//         break;

//       case READY:
//         color = GOLD;
//         break;

//       default:
//         color = MAGENTA;
//         break;
//       }

//       DrawRectangle(x * TILE_SIZE, y * TILE_SIZE, TILE_SIZE, TILE_SIZE,
//       color);

//       DrawRectangleLines(x * TILE_SIZE, y * TILE_SIZE, TILE_SIZE, TILE_SIZE,
//                          BLACK);
//     }
//   }
// }

// int main(void) {
//   InitWindow(SCREEN_WIDTH, SCREEN_HEIGHT, "FarmVille Clone");

//   SetTargetFPS(60);

//   while (!WindowShouldClose()) {
//     UpdateWorld();

//     Vector2 mouse = GetMousePosition();

//     int tileX = mouse.x / TILE_SIZE;
//     int tileY = mouse.y / TILE_SIZE;

//     if (tileX >= 0 && tileX < GRID_WIDTH && tileY >= 0 && tileY <
//     GRID_HEIGHT) {
//       if (IsMouseButtonPressed(MOUSE_LEFT_BUTTON)) {
//         Tile *tile = &world[tileY][tileX];

//         switch (tile->state) {
//         case GRASS:
//           tile->state = PLOWED;
//           break;

//         case PLOWED:
//           tile->state = SEED;
//           tile->plantedTime = GetTime();
//           break;

//         case READY:
//           tile->state = GRASS;
//           break;
//         }
//       }
//     }

//     BeginDrawing();

//     ClearBackground(RAYWHITE);

//     DrawWorld();

//     if (tileX >= 0 && tileX < GRID_WIDTH && tileY >= 0 && tileY <
//     GRID_HEIGHT) {
//       DrawRectangleLinesEx((Rectangle){tileX * TILE_SIZE, tileY * TILE_SIZE,
//                                        TILE_SIZE, TILE_SIZE},
//                            3, RED);
//     }

//     DrawText("Clique: Grama -> Terra -> Semente -> Cresce -> Pronta ->
//     Colher",
//              10, 660, 20, BLACK);

//     EndDrawing();
//   }

//   CloseWindow();

//   return 0;
// }

#include "raylib.h"

#include "config/constants.h"
#include "core/game.h"
#include "world/textures.h"
#include "world/world.h"

int main(void) {
  InitWindow(SCREEN_WIDTH, SCREEN_HEIGHT, "FarmVille Clone");

  SetTargetFPS(60);

  LoadGameTextures();

  while (!WindowShouldClose()) {
    UpdateWorld();
    GameUpdate();

    BeginDrawing();

    ClearBackground(RAYWHITE);
    GameDraw();
    UnloadGameTextures();
    DrawText("Clique: Grama -> Terra -> Semente -> Cresce -> Pronta -> Colher",
             10, 660, 20, BLACK);

    EndDrawing();
  }

  CloseWindow();

  return 0;
}