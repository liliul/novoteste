#ifndef FOOD_H
#define FOOD_H

typedef struct {
    int x;
    int y;
} Food;

void InitFood(Food *food);
void DrawFood(Food *food);
void RespawnFood(Food *food);

#endif