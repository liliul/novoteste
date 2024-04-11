#include <stdio.h>

#define  Texto 30

int main() {
    char txt[Texto] = {"Dragon Ball Z"};

    printf("Testando o #define\n");
    // txt->variavel: 30->limite de letras: stdin->limpa teclado depois de printar na tela
    fgets(txt, 30, stdin);

    puts(txt);
}
