#include "save.h"
#include "../entities/inventory.h"
#include "../world/world.h"
#include <stdio.h>
#include <string.h>

typedef struct {
  Inventory inventory;

  Tile world[GRID_HEIGHT][GRID_WIDTH];
} SaveData;

void SaveGame(void) {
  SaveData data = {inventory, {0}};

  memcpy(data.world, world, sizeof(world));

  FILE *file = fopen("save.dat", "wb");

  fwrite(&data, sizeof(SaveData), 1, file);

  fclose(file);
}

void LoadGame(void) {
  FILE *file = fopen("save.dat", "rb");

  if (!file)
    return;

  SaveData data;

  fread(&data, sizeof(SaveData), 1, file);

  inventory = data.inventory;

  memcpy(world, data.world, sizeof(world));

  fclose(file);
}