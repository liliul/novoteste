#include <curses.h>
#include <stdio.h>
#include <stdlib.h>
#include <ncurses.h>
#include <string.h>
#include <time.h>
#include <unistd.h>
#include <sys/stat.h>
#include <locale.h>

void Preencher();
int NumeroCartela(int numero1);
void CriarDiretorio();
void GravarArquivo();

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

    //nomeCompleto
    printf("Cadastrar seu Nome\n");
    // fflush(stdin);
    scanf("%s" , cadastro.nomeCompleto);

    // fgets(cadastro.nomeCompleto, 101, stdin);
    // strtok(cadastro.nomeCompleto, "\n");

    // email
    printf("Cadastrar seu Email\n");
    // fflush(stdin);
    scanf("%s" , cadastro.email);
    // fgets(cadastro.email, 101, stdin);
    // strtok(cadastro.email, "\n");

    // printf("add: %s::%s", cadastro.nomeCompleto, cadastro.email);

    printf("\nCadastro feito com Sucesso!\n");
    napms(2000);

    int numero1;
    NumeroCartela(numero1);

    CriarDiretorio();
    GravarArquivo();

}

int NumeroCartela(int numero1)
{
    printf("\n\n");
    srand((unsigned)time(NULL));
    numero1 = rand() % 999999;
    printf("\n\nPor favor a note o Registro do Jogador\n\n");
    napms(1000);
    printf("\n\nNumero da Cartela: %d\n", numero1);
    napms(5000);
    cadastro.codigoCartela = numero1;

    return numero1;
}

void CriarDiretorio()
{
    int diretorio[1];

    clear();

    printf("\nCriando seu Diretorio DATABASE!\n\n");
    napms(2000);

    diretorio[0] = mkdir("DATABASE", 0777);

    if(diretorio[0] != -1)
    {
        printf("\nDiretorio Criado com Sucesso!\n");
    }
    else
    {
        printf("\nDiretorio ja Existe\n");
    }

    napms(2000);
}

void GravarArquivo()
{
    FILE *arquivo;

    arquivo = fopen("DATABASE/dados.txt", "a");

    if(arquivo == NULL)
    {
        exit(1);
    }
    else
    {
        if (access("DATABASE/dados.txt", W_OK))
        {
            printf("arquivo dados.txt nao existe\n");
            exit(1);
        }

        fprintf(arquivo, "Codigo: ");
        fprintf(arquivo, "%d", cadastro.codigoCartela);
        fprintf(arquivo, "Nome: ");
        fprintf(arquivo, "%s", cadastro.nomeCompleto);
        fprintf(arquivo, "Email: ");
        fprintf(arquivo, "%s", cadastro.email);
        fprintf(arquivo, "\n");
        //
        // printf("\nArquivo Criado com Sucesso\n\n");

        // fprintf(arquivo, "Codigo: %d\nNome: %99s\nEmail: %99s\n", cadastro.codigoCartela, cadastro.nomeCompleto, cadastro.email);

        printf("\nArquivo Criado com Sucesso\n\n");
        fclose(arquivo);

        napms(2000);
    }

}

