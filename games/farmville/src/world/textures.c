#include "textures.h"
#include "raylib.h"

Texture2D grassTexture;
Texture2D plowedTexture;
Texture2D seedTexture;
Texture2D growingTexture;
Texture2D readyTexture;

void LoadGameTextures(void) {
  grassTexture = LoadTexture("assets/sprites/tiles/tile_grama.png");
  plowedTexture = LoadTexture("assets/sprites/tiles/tile_terra_seca.png");
  seedTexture = LoadTexture("assets/sprites/tiles/tile_grama_escuro.png");
  growingTexture = LoadTexture("assets/sprites/tiles/tile_terra.png");
  readyTexture = LoadTexture("assets/sprites/tiles/tile_restos.png");
}

void UnloadGameTextures(void) {
  UnloadTexture(grassTexture);
  UnloadTexture(plowedTexture);
  UnloadTexture(seedTexture);
  UnloadTexture(growingTexture);
  UnloadTexture(readyTexture);
}