#include "snake.h"

#define CELL_SIZE 20
#define GRID_WIDTH 40
#define GRID_HEIGHT 30

void InitSnake(Snake *snake) {
  snake->body[0] = (Segment){10, 10};

  snake->length = 1;

  snake->dirX = 1;
  snake->dirY = 0;
}

void UpdateSnake(Snake *snake) {
  for (int i = snake->length - 1; i > 0; i--) {
    snake->body[i] = snake->body[i - 1];
  }

  snake->body[0].x += snake->dirX;
  snake->body[0].y += snake->dirY;
}

void DrawSnake(Snake *snake) {
  for (int i = 0; i < snake->length; i++) {
    DrawRectangle(snake->body[i].x * CELL_SIZE, snake->body[i].y * CELL_SIZE,
                  CELL_SIZE, CELL_SIZE, GREEN);
  }
}

bool SnakeHitWall(Snake *snake) {
  return (snake->body[0].x < 0 || snake->body[0].x >= GRID_WIDTH ||
          snake->body[0].y < 0 || snake->body[0].y >= GRID_HEIGHT);
}

bool SnakeHitItself(Snake *snake) {
  for (int i = 1; i < snake->length; i++) {
    if (snake->body[0].x == snake->body[i].x &&
        snake->body[0].y == snake->body[i].y) {
      return true;
    }
  }

  return false;
}