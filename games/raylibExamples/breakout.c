#include "math.h"
#include "raylib.h"
#include <stdlib.h>
#include <time.h>

#define ROWS 5
#define COLS 10

// raquete
typedef struct {
  float x;
  float y;
  float width;
  float height;
} Paddle;

// bola
typedef struct {
  Vector2 position;
  Vector2 velocity;
  float radius;
} Ball;

typedef struct {
  Rectangle rect;
  bool active;
} Brick;

typedef enum {
  GAME_PLAYING,
  GAME_PAUSED,
  GAME_WIN,
  GAME_OVER,
  MENU,
  QUIT,
  MENUESC
} GameState;

Brick bricks[ROWS][COLS];
GameState state = MENU;

int MenuESC(void) {
  if (IsKeyPressed(KEY_ESCAPE)) {
    state = MENUESC;
  }
  if (IsKeyPressed(KEY_V)) {
    state = GAME_PLAYING;
  }

  if (IsKeyPressed(KEY_P)) {
    if (state == GAME_PLAYING) {
      state = GAME_PAUSED;
    } else if (state == GAME_PAUSED) {
      state = GAME_PLAYING;
    }
  }

  if (IsKeyPressed(KEY_TWO)) {
    state = QUIT;
  }

  return 0;
}

int main(void) {
  int screenWidth = 800;
  int screenHeight = 600;

  // bola aleatoria
  srand(time(NULL));

  int score = 0;
  int counterBricks = ROWS * COLS;
  int bricksDestroyers = 0;

  float speed = 5.0f;

  bool gameOver = false;
  bool victory = false;

  Paddle paddle = {350, 550, 100, 20};
  Ball ball = {{400, 300}, {(rand() % 2 ? speed : -speed), -speed}, 10};

  Rectangle paddleRect = {paddle.x, paddle.y, paddle.width, paddle.height};

  // inicializar blocos
  for (int row = 0; row < ROWS; row++) {
    for (int col = 0; col < COLS; col++) {
      // bricks[row][col].rect = (Rectangle){col * 75 + 20, row * 35 + 40, 70,
      // 30};

      bricks[row][col].active = true;
    }
  }

  SetConfigFlags(FLAG_WINDOW_RESIZABLE);
  InitWindow(screenWidth, screenHeight, "Breakout");
  SetTargetFPS(60);

  while (!WindowShouldClose()) {
    // resolução responsiva
    screenWidth = GetScreenWidth();
    screenHeight = GetScreenHeight();

    // blocos dinamicos em qualquer resolução
    float paddingX = 10.0f;
    float paddingY = 40.0f;
    float spacing = 5.0f;

    float brickWidth =
        (screenWidth - (paddingX * 2) - (spacing * (COLS - 1))) / COLS;
    float brickHeight = 25.0f;

    for (int row = 0; row < ROWS; row++) {
      for (int col = 0; col < COLS; col++) {
        bricks[row][col].rect.x = paddingX + col * (brickWidth + spacing);
        bricks[row][col].rect.y = paddingY + row * (brickHeight + spacing);
        bricks[row][col].rect.width = brickWidth;
        bricks[row][col].rect.height = brickHeight;
      }
    }

    MenuESC();

    if (state == MENU) {
      if (IsKeyPressed(KEY_ONE)) {
        state = GAME_PLAYING;
      }

    } else if (state == GAME_PLAYING) {

      // controle da raquete
      if (IsKeyDown(KEY_LEFT)) {
        paddle.x -= 6;
      }

      if (IsKeyDown(KEY_RIGHT)) {
        paddle.x += 6;
      }

      // limitar parede
      if (paddle.x < 0) {
        paddle.x = 0;
      }

      if (paddle.x + paddle.width > screenWidth) {
        paddle.x = screenWidth - paddle.width;
      }

      // mover bola
      ball.position.x += ball.velocity.x;
      ball.position.y += ball.velocity.y;

      // esquerda
      if (ball.position.x <= ball.radius) {
        ball.velocity.x *= -1;
      }

      // direita
      if (ball.position.x >= screenWidth - ball.radius) {
        ball.velocity.x *= -1;
      }

      // topo
      if (ball.position.y <= ball.radius) {
        ball.velocity.y *= -1;
      }

      // colisão com raquete
      paddleRect.x = paddle.x;
      paddleRect.y = paddle.y;

      // colisão da bol com a parede
      if (CheckCollisionCircleRec(ball.position, ball.radius, paddleRect) &&
          ball.velocity.y > 0) {
        ball.velocity.y = -fabsf(ball.velocity.y);

        ball.position.y = paddle.y - ball.radius;
      }

      // checar colisão com tijolos
      for (int row = 0; row < ROWS; row++) {
        for (int col = 0; col < COLS; col++) {
          // destruir tijolos
          if (bricks[row][col].active &&
              CheckCollisionCircleRec(ball.position, ball.radius,
                                      bricks[row][col].rect)) {
            bricks[row][col].active = false;

            ball.velocity.y *= -1;
            score += 10;
            bricksDestroyers += 1;
          }
        }
      }
    }

    // game over
    if (ball.position.y > screenHeight) {
      state = GAME_OVER;
      MenuESC();
    }

    // vitoria
    if (bricksDestroyers == counterBricks) {
      state = GAME_WIN;
    }

    // sair do jogo
    if (state == QUIT) {
      CloseWindow();
      return 0;
    }

    // desenhar
    BeginDrawing();

    if (state == MENU) {
      ClearBackground(BLACK);

      DrawText("1. Iniciar partida", 250, 310, 25, VIOLET);
      DrawText("2. Quit Game", 250, 360, 25, BLUE);

    } else {
      ClearBackground(BLACK);

      // desenhar tijolos
      for (int row = 0; row < ROWS; row++) {
        for (int col = 0; col < COLS; col++) {
          if (bricks[row][col].active) {
            DrawRectangleRec(bricks[row][col].rect, BLUE);
          }
        }
      }

      DrawText("Meu primeiro Breakout", 250, 280, 30, WHITE);

      DrawCircleV(ball.position, ball.radius, WHITE);
      DrawRectangle(paddle.x, paddle.y, paddle.width, paddle.height, WHITE);

      DrawText(TextFormat("Score: %i", score), 10, 10, 20, WHITE);

      if (state == GAME_PAUSED) {
        DrawText("PAUSADO", 300, 250, 40, YELLOW);

        DrawText("Pressione P para continuar", 220, 300, 20, WHITE);
      }

      if (state == GAME_OVER) {
        DrawText("GAME OVER", 250, 250, 50, RED);
      }

      if (state == GAME_WIN) {
        DrawText("Vitoria (* - *)", 250, 300, 60, GREEN);
      }

      if (state == MENUESC) {
        ClearBackground(WHITE);

        DrawText("v: Voltar para Game", 250, 310, 25, VIOLET);
        DrawText("2. Quit Game", 250, 360, 25, BLUE);
      }
    }

    EndDrawing();
  }

  CloseWindow();

  return 0;
}