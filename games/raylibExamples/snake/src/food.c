#include "food.h"
#include "raylib.h"

#define CELL_SIZE 20
#define GRID_WIDTH 40
#define GRID_HEIGHT 30

void InitFood(Food *food) {
  food->x = 15;
  food->y = 15;
}

void RespawnFood(Food *food) {
  food->x = GetRandomValue(0, GRID_WIDTH - 1);
  food->y = GetRandomValue(0, GRID_HEIGHT - 1);
}

void DrawFood(Food *food) {
  DrawRectangle(food->x * CELL_SIZE, food->y * CELL_SIZE, CELL_SIZE, CELL_SIZE,
                RED);
}