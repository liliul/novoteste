#include "game.h"
#include "food.h"
#include "snake.h"

void RunGame(void) {
  Snake snake;
  Food food;

  InitSnake(&snake);
  InitFood(&food);

  int score = 0;

  bool gameOver = false;

  float moveTimer = 0;
  float moveDelay = 0.15f;

  while (!WindowShouldClose()) {
    if (!gameOver) {
      moveTimer += GetFrameTime();

      if (moveTimer >= moveDelay) {
        moveTimer = 0;

        UpdateSnake(&snake);
      }

      if (IsKeyPressed(KEY_UP) && snake.dirY != 1) {
        snake.dirX = 0;
        snake.dirY = -1;
      }

      if (IsKeyPressed(KEY_DOWN) && snake.dirY != -1) {
        snake.dirX = 0;
        snake.dirY = 1;
      }

      if (IsKeyPressed(KEY_LEFT) && snake.dirX != 1) {
        snake.dirX = -1;
        snake.dirY = 0;
      }

      if (IsKeyPressed(KEY_RIGHT) && snake.dirX != -1) {
        snake.dirX = 1;
        snake.dirY = 0;
      }

      if (snake.body[0].x == food.x && snake.body[0].y == food.y) {
        snake.length++;
        score += 10;

        RespawnFood(&food);
      }

      if (SnakeHitWall(&snake) || SnakeHitItself(&snake)) {
        gameOver = true;
      }
    }

    BeginDrawing();

    ClearBackground(BLACK);

    DrawSnake(&snake);
    DrawFood(&food);

    DrawText(TextFormat("Score: %i", score), 10, 10, 20, WHITE);

    if (gameOver) {
      DrawText("GAME OVER", 250, 250, 50, RED);
    }

    EndDrawing();
  }
}