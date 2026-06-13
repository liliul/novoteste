#include "raylib.h"
#include <stdlib.h>
#include <time.h>

#define CELL_SIZE 20

#define GRID_WIDTH 40
#define GRID_HEIGHT 30

typedef struct {
  int x;
  int y;
} Segment;

typedef struct {
  int x;
  int y;
} Food;

int main(void) {
  srand(time(NULL));

  Segment snake[100];

  snake[0] = (Segment){10, 10};
  Food food = {15, 15};

  int snakeLength = 1;
  int dirX = 1;
  int dirY = 0;
  int score = 0;

  float moveTimer = 0;
  float moveDelay = 0.15f;

  bool gameOver = false;

  InitWindow(800, 600, "Snake");

  SetTargetFPS(60);

  while (!WindowShouldClose()) {
    moveTimer += GetFrameTime();

    if (moveTimer >= moveDelay) {
      moveTimer = 0;

      for (int i = snakeLength - 1; i > 0; i--) {
        snake[i] = snake[i - 1];
      }

      snake[0].x += dirX;
      snake[0].y += dirY;
    }

    if (IsKeyPressed(KEY_UP) && dirY != 1) {
      dirX = 0;
      dirY = -1;
    }

    if (IsKeyPressed(KEY_DOWN) && dirY != -1) {
      dirX = 0;
      dirY = 1;
    }

    if (IsKeyPressed(KEY_LEFT) && dirX != 1) {
      dirX = -1;
      dirY = 0;
    }

    if (IsKeyPressed(KEY_RIGHT) && dirX != -1) {
      dirX = 1;
      dirY = 0;
    }

    if (snake[0].x == food.x && snake[0].y == food.y) {
      snakeLength++;
      score += 10;
      food.x = GetRandomValue(0, GRID_WIDTH - 1);
      food.y = GetRandomValue(0, GRID_HEIGHT - 1);
    }

    if (snake[0].x < 0 || snake[0].x >= GRID_WIDTH || snake[0].y < 0 ||
        snake[0].y >= GRID_HEIGHT) {
      gameOver = true;
    }

    for (int i = 1; i < snakeLength; i++) {
      if (snake[0].x == snake[i].x && snake[0].y == snake[i].y) {
        gameOver = true;
      }
    }

    BeginDrawing();

    ClearBackground(BLACK);

    DrawText("Snake", 350, 280, 30, GREEN);
    DrawRectangle(snake[0].x * CELL_SIZE, snake[0].y * CELL_SIZE, CELL_SIZE,
                  CELL_SIZE, GREEN);

    DrawRectangle(food.x * CELL_SIZE, food.y * CELL_SIZE, CELL_SIZE, CELL_SIZE,
                  RED);

    for (int i = 0; i < snakeLength; i++) {
      DrawRectangle(snake[i].x * CELL_SIZE, snake[i].y * CELL_SIZE, CELL_SIZE,
                    CELL_SIZE, GREEN);
    }

    DrawText(TextFormat("Score: %i", score), 10, 10, 20, WHITE);

    EndDrawing();
  }

  CloseWindow();
}