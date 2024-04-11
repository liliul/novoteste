#include <stdio.h>
#include <string.h>
#include <locale.h>

#define N 50

int main() {
    setlocale(LC_ALL, "Portuguese");

    char origem[N] = {"Ola Mundo"};
    char destino[N];

    printf("antes do strcpy:\n");
    puts(origem);
    puts(destino);

    strcpy(destino, origem);

    printf("depois do strcpy\n");
    puts(origem);
    puts(destino);
}
