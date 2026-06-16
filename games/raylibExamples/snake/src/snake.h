#ifndef SNAKE_H
#define SNAKE_H

#include "raylib.h"

#define MAX_SNAKE_SIZE 100

typedef struct {
    int x;
    int y;
} Segment;

typedef struct {
    Segment body[MAX_SNAKE_SIZE];
    int length;
    int dirX;
    int dirY;
} Snake;

void InitSnake(Snake *snake);
void UpdateSnake(Snake *snake);
void DrawSnake(Snake *snake);

bool SnakeHitWall(Snake *snake);
bool SnakeHitItself(Snake *snake);

#endif