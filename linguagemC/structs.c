#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <locale.h>

#define TAM 50
#define Str 3

struct tipo_pessoa {
    int idade;
    float peso;
    char nome[TAM];
};

typedef struct tipo_pessoa tipo_pessoa;

struct tipo_struct {
    int item;
    float numReal;
    char name[50];
};

typedef struct tipo_struct tipo_struct;

int main() {
    setlocale(LC_ALL, "Portuguese");
/*
    tipo_pessoa pes = {0, 0.0, "Teste"};

    printf("Iniciar>\n");
    printf("pes.idade> %d\n", pes.idade);
    printf("pes.peso> %.2f\n", pes.peso);
    printf("pes.name> %s\n", pes.nome);

    // atribuindo
    pes.idade = 25;
    pes.peso  = 99.99;
    strcpy(pes.nome, "Texto");

    printf("\nalterando os campos via codigo>\n");
    printf("pes.idade> %d\n", pes.idade);
    printf("pes.peso> %.2f\n", pes.peso);
    printf("pes.name> %s\n", pes.nome);

    // atribuindo via teclado
    printf("\nInsira um numero inteiro>\n");
    scanf("%d", &pes.idade);
    printf("Insira um numero real>\n");
    scanf("%f", &pes.peso);
    fflush(stdin);
    printf("Insira uma palavra>\n");
    scanf("%s", pes.nome);


    printf("\nalterando os campos via teclado>\n");
    printf("pes.idade> %d\n", pes.idade);
    printf("pes.peso> %.2f\n", pes.peso);
    printf("pes.name> %s\n", pes.nome);
*/
    // novo exemplo de struct

    tipo_struct lista[Str];
    int i;

    for (i=0; i<Str; i++) {
        printf("\n\nInsira os dados (%d):\n", i+1);
        puts("Name> ");
        scanf("%50[^\n]s", lista[i].name);
        fflush(stdin);

        puts("Item> ");
        scanf("%d", &lista[i].item);
        fflush(stdin);

        puts("Numero real> ");
        scanf("%f", &lista[i].numReal);
        fflush(stdin);
    }
    system("clear");

    puts("Seus dados\n");
    for (i=0; i<Str; i++) {
        printf("----------- Items %d -----------\n", i+1);
        printf("\tNome: %s\n", lista[i].name);
        printf("\tItems: %d\n", lista[i].item);
        printf("\tNumero real: %.2f\n", lista[i].numReal);
    }
}
