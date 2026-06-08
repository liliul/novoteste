#include "raylib.h"
#include <stdio.h>

//------------------------------------------------------------------------------------
// Program main entry point
//------------------------------------------------------------------------------------
int main(void) {
  // Initialization
  //--------------------------------------------------------------------------------------
  const int screenWidth = 800;
  const int screenHeight = 450;

  InitWindow(screenWidth, screenHeight, "raylib [core] example - input keys");

  Vector2 ballPosition = {(float)screenWidth / 2, (float)screenHeight / 2};

  int rectanglePositionX = screenWidth / 5;
  int rectanglePositionY = screenHeight / 5;
  int moverCachorroPositionX = 0;
  int moverCachorroPositionY = 0;

  Texture2D bg = LoadTexture("cachorro_dogo_sentado.png");
  if (bg.id == 0) {
    printf("Errrrrrrrrrrooooooor");
  }

  bool estaColidindo = false;

  SetTargetFPS(60); // Set our game to run at 60 frames-per-second
  //--------------------------------------------------------------------------------------

  // Main game loop
  while (!WindowShouldClose()) // Detect window close button or ESC key
  {
    // Update
    //----------------------------------------------------------------------------------
    if (IsKeyDown(KEY_RIGHT))
      ballPosition.x += 2.0f;
    if (IsKeyDown(KEY_LEFT))
      ballPosition.x -= 2.0f;
    if (IsKeyDown(KEY_UP))
      ballPosition.y -= 2.0f;
    if (IsKeyDown(KEY_DOWN))
      ballPosition.y += 2.0f;
    //----------------------------------------------------------------------------------

    // input a w d s
    if (IsKeyDown(KEY_A))
      rectanglePositionX -= 5.0f;
    if (IsKeyDown(KEY_D))
      rectanglePositionX += 5.0f;
    if (IsKeyDown(KEY_W))
      rectanglePositionY -= 5.0f;
    if (IsKeyDown(KEY_S))
      rectanglePositionY += 5.0f;

    // mover cachorro
    if (IsKeyDown(KEY_Z))
      moverCachorroPositionX -= 5.0f;
    if (IsKeyDown(KEY_X))
      moverCachorroPositionX += 5.0f;
    if (IsKeyDown(KEY_C))
      moverCachorroPositionY -= 5.0f;
    if (IsKeyDown(KEY_V))
      moverCachorroPositionY += 5.0f;

    // LÓGICA DE COLISÃO
    // ---------------------------------------------------------------------------------
    // 1. Criamos o retângulo invisível do cachorro com base na posição dele e
    // tamanho da imagem
    Rectangle hitboxCachorro = {moverCachorroPositionX, moverCachorroPositionY,
                                (float)bg.width, (float)bg.height};

    // 2. Criamos o retângulo do quadrado amarelo
    Rectangle hitboxQuadrado = {rectanglePositionX, rectanglePositionY, 40.0f,
                                40.0f};

    // 3. A Raylib checa se os dois retângulos se cruzam
    estaColidindo = CheckCollisionRecs(hitboxCachorro, hitboxQuadrado);
    // ---------------------------------------------------------------------------------

    // Draw
    //----------------------------------------------------------------------------------
    BeginDrawing();

    ClearBackground(RAYWHITE);

    // carregando textura
    DrawTexture(bg, moverCachorroPositionX, moverCachorroPositionY, WHITE);

    DrawText("mover bola com setas do teclado", 10, 10, 20, DARKGRAY);

    DrawCircleV(ballPosition, 50, GREEN);

    DrawRectangle(rectanglePositionX, rectanglePositionY, 40, 40, YELLOW);

    // colidindo
    if (estaColidindo) {
      DrawText("COLISAO DETECTADA!", 10, 40, 24, RED);
    }

    // Se houver colisão, pintamos o quadrado de vermelho. Se não, ele continua
    // amarelo.
    Color corDoQuadrado = estaColidindo ? RED : YELLOW;
    DrawRectangle((int)rectanglePositionX, (int)rectanglePositionY, 40, 40,
                  corDoQuadrado);

    EndDrawing();
    //----------------------------------------------------------------------------------
  }

  // De-Initialization
  //--------------------------------------------------------------------------------------
  CloseWindow(); // Close window and OpenGL context
  //--------------------------------------------------------------------------------------

  return 0;
}