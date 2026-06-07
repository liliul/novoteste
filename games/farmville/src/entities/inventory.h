#ifndef INVENTORY_H
#define INVENTORY_H

typedef struct
{
    int wheat;
    int corn;
    int coins;
} Inventory;

extern Inventory inventory;

#endif