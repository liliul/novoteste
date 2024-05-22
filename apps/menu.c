// #include <curses.h>
#include <stdio.h>
#include <stdlib.h>
#include <ncurses.h>
#include <string.h>
#include <time.h>

void menuPrincipal();
void Preencher();
int NumeroCartela(int numero1);

int main()
{
    int menu = 0;

    do {
        clear();
        menu=0;
        menuPrincipal();
        scanf("%d", &menu);

        switch (menu) {
            // case 1: clear();printf("\n\nEntrei no Menu Cadastrar\n\n");delay_output(2000);break;
            case 1: clear();Preencher();delay_output(2000);break;
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

typedef struct CADASTRO
{
    int codigoCartela;
    char nomeCompleto[101];
    char email[101];

} CADASTRO;
struct CADASTRO cadastro = {0 , "", ""};
// struct CADASTRO cadastro;

void Preencher()
{
    clear();
    printf("\n\nCadastre seu Jogodor\n\n");

    //cadastro
    printf("Cadaster seu Nome Completo\n");
    fflush(stdin);
    scanf("%99s" , cadastro.nomeCompleto);
    fgets(cadastro.nomeCompleto, 101, stdin);

    // email
    printf("Cadaster seu Email\n");
    fflush(stdin);
    scanf("%99s" , cadastro.email);
    fgets(cadastro.email, 101, stdin);

    printf("\nCadastro feito com Sucesso!\n");
    delay_output(3000);

    int numero1;
    NumeroCartela(numero1);
}

int NumeroCartela(int numero1)
{
    printf("\n\n");
    srand((unsigned)time(NULL));
    numero1 = rand() % 999999;
    printf("\n\nPor favor a note o Registro do Jogador\n\n");
    delay_output(2000);
    printf("\n\nNumero da Cartela: %d\n", numero1);
    delay_output(5000);
    cadastro.codigoCartela = numero1;

    return numero1;
}
