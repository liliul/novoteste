#include <curses.h>
#include <stdio.h>
#include <stdlib.h>
#include <ncurses.h>
#include <string.h>
#include <time.h>
#include <unistd.h>
#include <sys/stat.h>
#include <locale.h>

#include "headersH/menu/menuGame.h"

#include "headersH/menu/cadastro.h"

int main()
{
    setlocale(LC_ALL, "Portuguese");

    int menu = 0;

    do {
        clear();
        menu=0;
        menuPrincipal();
        scanf("%d", &menu);

        switch (menu) {
            // case 1: clear();printf("\n\nEntrei no Menu Cadastrar\n\n");delay_output(2000);break;
            case 1: clear();Preencher();napms(1500);break;
            case 2: clear();printf("\n\nEntrei no Menu do Jogo\n\n");napms(1500);break;
            case 3: clear();printf("\n\nSaindo do Jogo\n\n");napms(1000);break;
        }

    }while (menu != 3);

    return 0;
}
