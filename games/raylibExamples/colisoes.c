#include "raylib.h"
#include <stdio.h>

#define MAX_MOEDAS 5 // Definimos a quantidade de objetos no mapa

// Criamos uma estrutura para representar o objeto "Moeda"
typedef struct {
  Vector2 posicao;
  float raio;
  bool ativa; // Se for false, a moeda já foi coletada e sumirá da tela
} Moeda;

int main(void) {
  const int screenWidth = 800;
  const int screenHeight = 450;
  InitWindow(screenWidth, screenHeight,
             "Raylib - Colisao com Multiplos Objetos");

  // 1. CONFIGURAÇÃO DO JOGADOR
  Vector2 playerPos = {(float)screenWidth / 2, (float)screenHeight / 2};
  float playerRaio = 20.0f;
  int pontuacao = 0;

  // 2. CONFIGURAÇÃO DOS OBJETOS (Criando o Array de Moedas)
  Moeda moedas[MAX_MOEDAS];

  // Posicionando as moedas manualmente em locais diferentes da tela
  moedas[0] = (Moeda){{150, 100}, 12.0f, true};
  moedas[1] = (Moeda){{600, 120}, 12.0f, true};
  moedas[2] = (Moeda){{200, 300}, 12.0f, true};
  moedas[3] = (Moeda){{550, 320}, 12.0f, true};
  moedas[4] = (Moeda){{400, 100}, 12.0f, true};

  printf("%f\n", playerRaio);

  SetTargetFPS(60);

  // Loop Principal
  while (!WindowShouldClose()) {

    // CONTROLES DO JOGADOR (Setas do teclado)
    if (IsKeyDown(KEY_RIGHT))
      playerPos.x += 4.0f;
    if (IsKeyDown(KEY_LEFT))
      playerPos.x -= 4.0f;
    if (IsKeyDown(KEY_UP))
      playerPos.y -= 4.0f;
    if (IsKeyDown(KEY_DOWN))
      playerPos.y += 4.0f;

    // LÓGICA DE COLISÃO COM OS OBJETOS
    // Passamos por cada moeda do array usando um loop 'for'
    for (int i = 0; i < MAX_MOEDAS; i++) {
      // Só checamos a colisão se a moeda ainda estiver ativa (não coletada)
      if (moedas[i].ativa) {

        // Como jogador e moedas são círculos, usamos CheckCollisionCircles
        if (CheckCollisionCircles(playerPos, playerRaio, moedas[i].posicao,
                                  moedas[i].raio)) {
          moedas[i].ativa = false; // Desativa o objeto (ele some)
          pontuacao += 20;         // Aumenta os pontos do jogador
        }
      }
    }

    // DESENHAR
    BeginDrawing();
    ClearBackground(RAYWHITE);

    // 1. Desenha os objetos (Moedas) que ainda estão ativos
    for (int i = 0; i < MAX_MOEDAS; i++) {
      if (moedas[i].ativa) {
        DrawCircleV(moedas[i].posicao, moedas[i].raio, YELLOW);
        DrawCircleLines((int)moedas[i].posicao.x, (int)moedas[i].posicao.y,
                        moedas[i].raio, GOLD);
      }
    }

    // 2. Desenha o Jogador
    DrawCircleV(playerPos, playerRaio, GREEN);

    // 3. Interface de Texto
    DrawText(TextFormat("MOEDAS COLETADAS: %d", pontuacao), 10, 10, 20,
             DARKGRAY);
    DrawText("Use as setas para mover o circulo verde e coletar as moedas", 10,
             420, 16, GRAY);

    EndDrawing();
  }

  CloseWindow();
  return 0;
}