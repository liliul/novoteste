#include "raylib.h"

int main(void) {
  InitWindow(800, 450, "Animacao de Sprite");

  Texture2D sprite = LoadTexture("assets/ball.all_.png");

  int frameAtual = 0;
  int totalFrames = 4;

  float tempoFrame = 0.15f; // segundos por frame
  float timer = 0.0f;

  int larguraFrame = sprite.width / totalFrames;
  int alturaFrame = sprite.height;

  while (!WindowShouldClose()) {
    timer += GetFrameTime();

    if (timer >= tempoFrame) {
      timer = 0;
      frameAtual++;

      if (frameAtual >= totalFrames)
        frameAtual = 0;
    }

    Rectangle source = {frameAtual * larguraFrame, 0, larguraFrame,
                        alturaFrame};

    BeginDrawing();
    ClearBackground(RAYWHITE);

    DrawTextureRec(sprite, source, (Vector2){350, 180}, WHITE);

    EndDrawing();
  }

  UnloadTexture(sprite);
  CloseWindow();

  return 0;
}