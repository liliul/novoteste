#include "raylib.h"
#include "stdio.h"

typedef enum { MENU, PLAYING } GameState;

int main(void) {
  const int screenWidth = 850;
  const int screenHeight = 500;

  GameState gameState = MENU;
  bool versusCPU = true;

  InitWindow(screenWidth, screenHeight, "Game Pong!!!");

  // vars
  Rectangle player = {10, 180, 20, 100};
  Rectangle cpuPlayer = {820, 180, 20, 100};
  Vector2 bola = {400, 225};
  Texture2D bolaTexture = LoadTexture("assets/ouro.png");

  Rectangle source = {0, 0, bolaTexture.width, bolaTexture.height};
  Vector2 origin = {16, 16};

  printf("Largura: %d\n", bolaTexture.width);
  printf("Altura: %d\n", bolaTexture.height);

  float speed = 8;
  float cpuSpeed = 8;
  float bolaSpeedX = 12;
  float bolaSpeedY = 12;
  //   float bolaRadius = 10;
  float bolaRadius = 16;
  float rotation = 0;

  int playerScore = 0;
  int cpuPlayerScore = 0;

  SetTargetFPS(60);

  //   while (!WindowShouldClose()) {
  //     rotation += 0.5f;

  //     // controle do pong
  //     if (IsKeyDown(KEY_UP))
  //       player.y -= speed;
  //     if (IsKeyDown(KEY_DOWN))
  //       player.y += speed;

  //     // player 2
  //     if (IsKeyDown(KEY_W))
  //       cpuPlayer.y -= speed;

  //     if (IsKeyDown(KEY_S))
  //       cpuPlayer.y += speed;

  //     // impedir de sair da tela
  //     if (player.y < 0) {
  //       player.y = 0;
  //     }

  //     if (player.y + player.height > screenHeight) {
  //       player.y = screenHeight - player.height;
  //     }

  //     if (cpuPlayer.y < 0) {
  //       cpuPlayer.y = 0;
  //     }

  //     if (cpuPlayer.y + cpuPlayer.height > screenHeight) {
  //       cpuPlayer.y = screenHeight - cpuPlayer.height;
  //     }

  //     // mover bola
  //     bola.x += bolaSpeedX;
  //     bola.y += bolaSpeedY;

  //     Rectangle dest = {bola.x, bola.y, 32, 32};

  //     // bola kicando
  //     if (bola.y <= bolaRadius || bola.y >= screenHeight - bolaRadius) {
  //       bolaSpeedY *= -1;
  //     }

  //     // colisão com raquete
  //     if (CheckCollisionCircleRec(bola, bolaRadius, player)) {
  //       bolaSpeedX *= -1;
  //       bola.x = player.x + player.width + bolaRadius;
  //     }

  //     if (CheckCollisionCircleRec(bola, bolaRadius, cpuPlayer)) {
  //       bolaSpeedX *= -1;
  //       bola.x = cpuPlayer.x - bolaRadius;
  //     }

  //     // IA simples
  //     if (cpuPlayer.y + cpuPlayer.height / 2 < bola.y - 10) {
  //       cpuPlayer.y += cpuSpeed;
  //     }

  //     if (cpuPlayer.y + cpuPlayer.height / 2 > bola.y + 10) {
  //       cpuPlayer.y -= cpuSpeed;
  //     }

  //     // quando a bola sair pela esqueda
  //     if (bola.x < 0) {
  //       cpuPlayerScore++;

  //       bola.x = 425;
  //       bola.y = 250;

  //       bolaSpeedX *= -1;
  //     }

  //     if (bola.x > screenWidth) {
  //       playerScore++;

  //       bola.x = 425;
  //       bola.y = 250;
  //     }

  //     BeginDrawing();
  //     ClearBackground(BLACK);

  //     DrawText("Pong", 380, 200, 50, RED);

  //     // desenhar raquetes
  //     DrawRectangleRec(player, GREEN);
  //     DrawRectangleRec(cpuPlayer, YELLOW);

  //     // desenhar bola
  //     // DrawCircleV(bola, bolaRadius, WHITE);
  //     // DrawTexture(bolaTexture, bola.x, bola.y, WHITE);
  //     DrawTexturePro(bolaTexture, source, dest, origin, rotation, WHITE);

  //     DrawLine(screenWidth / 2, 0, screenWidth / 2, screenHeight, DARKGRAY);

  //     // mostra scores do players
  //     DrawText(TextFormat("%i", playerScore), 300, 20, 40, BLUE);

  //     DrawText(TextFormat("%i", cpuPlayerScore), 500, 20, 40, VIOLET);

  //     EndDrawing();
  //   }

  while (!WindowShouldClose()) {
    rotation += 0.5f;

    if (gameState == MENU) {
      if (IsKeyPressed(KEY_ONE)) {
        versusCPU = true;
        gameState = PLAYING;
      }

      if (IsKeyPressed(KEY_TWO)) {
        versusCPU = false;
        gameState = PLAYING;
      }
    }

    else if (gameState == PLAYING) {
      // lógica do jogo

      // controle do pong
      if (IsKeyDown(KEY_UP))
        player.y -= speed;
      if (IsKeyDown(KEY_DOWN))
        player.y += speed;

      // impedir de sair da tela
      if (player.y < 0) {
        player.y = 0;
      }

      if (player.y + player.height > screenHeight) {
        player.y = screenHeight - player.height;
      }

      if (cpuPlayer.y < 0) {
        cpuPlayer.y = 0;
      }

      if (cpuPlayer.y + cpuPlayer.height > screenHeight) {
        cpuPlayer.y = screenHeight - cpuPlayer.height;
      }

      // mover bola
      bola.x += bolaSpeedX;
      bola.y += bolaSpeedY;

      // bola kicando
      if (bola.y <= bolaRadius || bola.y >= screenHeight - bolaRadius) {
        bolaSpeedY *= -1;
      }

      // colisão com raquete
      if (CheckCollisionCircleRec(bola, bolaRadius, player)) {
        bolaSpeedX *= -1;
        bola.x = player.x + player.width + bolaRadius;
      }

      if (CheckCollisionCircleRec(bola, bolaRadius, cpuPlayer)) {
        bolaSpeedX *= -1;
        bola.x = cpuPlayer.x - bolaRadius;
      }

      // IA simples ou 2 Player
      if (versusCPU) {
        if (cpuPlayer.y + cpuPlayer.height / 2 < bola.y - 10)
          cpuPlayer.y += cpuSpeed;

        if (cpuPlayer.y + cpuPlayer.height / 2 > bola.y + 10)
          cpuPlayer.y -= cpuSpeed;
      } else {
        if (IsKeyDown(KEY_W))
          cpuPlayer.y -= speed;

        if (IsKeyDown(KEY_S))
          cpuPlayer.y += speed;
      }

      // quando a bola sair pela esqueda
      if (bola.x < 0) {
        cpuPlayerScore++;

        bola.x = 425;
        bola.y = 250;

        bolaSpeedX *= -1;
      }

      if (bola.x > screenWidth) {
        playerScore++;

        bola.x = 425;
        bola.y = 250;
      }
    }

    BeginDrawing();

    if (gameState == MENU) {
      // desenha menu
      ClearBackground(BLACK);

      DrawText("PONG", 320, 80, 70, GOLD);

      DrawText("1 - Jogar contra CPU", 220, 220, 30, WHITE);

      DrawText("2 - Multiplayer Local", 220, 270, 30, WHITE);
    } else {
      Rectangle dest = {bola.x, bola.y, 32, 32};
      // desenha partida
      BeginDrawing();
      ClearBackground(BLACK);

      DrawText("Pong", 380, 200, 50, RED);

      // desenhar raquetes
      DrawRectangleRec(player, GREEN);
      DrawRectangleRec(cpuPlayer, YELLOW);

      // texturas
      DrawTexturePro(bolaTexture, source, dest, origin, rotation, WHITE);

      // linha do meio
      DrawLine(screenWidth / 2, 0, screenWidth / 2, screenHeight, DARKGRAY);

      // mostra scores do players
      DrawText(TextFormat("%i", playerScore), 300, 20, 40, BLUE);

      DrawText(TextFormat("%i", cpuPlayerScore), 500, 20, 40, VIOLET);

      EndDrawing();
    }

    EndDrawing();
  }

  UnloadTexture(bolaTexture);
  CloseWindow();
  return 0;
}