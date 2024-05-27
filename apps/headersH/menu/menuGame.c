#include <curses.h>
#include <stdio.h>
#include <stdlib.h>
#include <ncurses.h>
#include <string.h>
#include <time.h>
#include <unistd.h>
#include <sys/stat.h>
#include <locale.h>

#include "estrutura.h"

void menuPrincipal()
{
    printf("\n\nJogo da Sorte.\n\n");
    printf("\n\n1 - Cadrastre o Jogador:\n\n");
    printf("\n\n2 - Entrar no Jogo da Sorte:\n\n");
    printf("\n\n3 - Sair do Jogo:\n\n");
}

void MenuJogoDaSorte()
{
    int menuOpcao;

    printf("\n\n\n");
    printf("Selecione um jogo da Sorte\n\n\n\n");
    printf("[0]    NarutoSorte\n\n");
    printf("[6]    para sair\n\n");
    scanf("%i", &menuOpcao);

    if (menuOpcao == 0)
    {
        clear();

        printf("Você escolheu o NarutoSorte\n\n");
        napms(2000);
        clear();
        printf("Seja bem vindo ao NarutoSorte");

        InserirNumerosDigitadosNoNarutoSorte();

        napms(2000);

        // MostrarNumerosDigitadosNoNarutoSorte();
    }
}
