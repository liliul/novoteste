#ifndef TEXTURES_H
#define TEXTURES_H

#include "raylib.h"

extern Texture2D grassTexture;
extern Texture2D plowedTexture;
extern Texture2D seedTexture;
extern Texture2D growingTexture;
extern Texture2D readyTexture;

void LoadGameTextures(void);
void UnloadGameTextures(void);

#endif