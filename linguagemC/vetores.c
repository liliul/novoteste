#include <stdio.h>

int main() {
    // int vetor[5] = {10, 20, 30, 40, 50};
    // int iFor;
    // float res = 0;
    //
    // for (iFor=0; iFor<5; iFor++) {
    //     res += vetor[iFor];
    // }
    //
    // printf("Resultado > %f\n", res/5);

    int vetor[5];
    int iFor;

    for (iFor=0; iFor<4; iFor++) {
        printf("Insira dados: \n");
        scanf("%d", &vetor[iFor]);
    }

    // vai gerar um erro no for tem 5 e outro tem 4
    printf("Dados inseridos: \n");
    for (iFor=0; iFor<5; iFor++) {
        printf("%d \n", vetor[iFor]);
    }
}
