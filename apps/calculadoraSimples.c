#include <cs50.h>
#include <math.h>
#include <stdio.h>

int mais(int num1 , int num2) {
    int somar = (num1 + num2);
    return somar;
}
int menos(int num1, int num2) {
    int somar = num1 - num2;
    return somar;
}
int multiplicar(int num1, int num2) {
    int somar = num1 * num2;
    return somar;
}
int divisao(int num1, int num2) {
    int somar = num1 / num2;
    return somar;
}

int main(int argc,  char *argv[]) {
    printf("----- Calculadora simples com c -----\n");

    int numero1, numero2;

    while (true) {
        printf("------------------START------------------\n\n");

        printf("Primeiro numero 1: ");
        scanf("%d", &numero1);


        printf("\nEscolher um numero para calcular > 1.+, 2.-, 3.*, 4./ e 5 para sair\n");

        // op escolher uma da opecoes
        int op;
        scanf("%d", &op);

        // se op for 5 sai do programa
        if(op == 5) {
            break;
        }

        printf("Segundo numero 2: ");
        scanf("%d", &numero2);

        switch (op) {
            case 1:
                printf("Resultado: %d \n\n", mais(numero1, numero2));
                break;
            case 2:
                printf("Resultado: %d \n\n", menos(numero1, numero2));
                break;
            case 3:
                printf("Resultado: %d \n\n", multiplicar(numero1, numero2));
                break;
            case 4:
                printf("Resultado: %d \n\n", divisao(numero1, numero2));
                break;
            default:
                printf("Falhou escolher um numero 1 a 4\n\n");
                break;
        }

        printf("------------------END-----------------\n\n");
    }
}
