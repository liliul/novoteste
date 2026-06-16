#include "raylib.h"
#include "src/game.h"
#include <stdlib.h>
#include <time.h>

int main(void) {
  srand(time(NULL));

  InitWindow(800, 600, "Snake");

  SetTargetFPS(60);

  RunGame();

  CloseWindow();

  return 0;
}