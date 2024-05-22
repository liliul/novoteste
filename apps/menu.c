#include <stdio.h>
#include <stdlib.h>
#include <ncurses.h>

void menuPrincipal();

int main()
{
    int menu = 0;


    do {
        clear();
        menu=0;
        menuPrincipal();
        scanf("%d", &menu);

        switch (menu) {
            case 1: clear();printf("\n\nEntrei no Menu Cadastrar\n\n");delay_output(2000);break;
            case 2: clear();printf("\n\nEntrei no Menu do Jogo\n\n");delay_output(2000);break;
            case 3: clear();printf("\n\nSaindo do Jogo\n\n");delay_output(5000);break;
        }

    }while (menu != 3);

    return 0;
}

void menuPrincipal()
{
    printf("\n\nJogo da Sorte.\n\n");
    printf("\n\n1 - Cadrastre o Jogador:\n\n");
    printf("\n\n2 - Entrar no Jogo da Sorte:\n\n");
    printf("\n\n3 - Sair do Jogo:\n\n");
}
