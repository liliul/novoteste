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

    string sair = "sair";
    int numero1, numero2;

    while (true) {
        printf("Escolher qual calculo vai fazer\n");

        printf("numero 1\n");
        scanf("%d", &numero1);


        printf("Escolher um numero para calcular > 1.+, 2.-, 3.*, 4./ e 5 para sair\n");

        // op escolher uma da opecoes
        int op;
        scanf("%d", &op);

        // se op for 5 sai do programa
        if(op == 5) {
            break;
        }

        printf("numero 2\n");
        scanf("%d", &numero2);

        switch (op) {
            case 1:
                return printf("Resultado: %d \n", mais(numero1, numero2));
            case 2:
                return printf("Resultado: %d \n", menos(numero1, numero2));
            case 3:
                return printf("Resultado: %d \n", multiplicar(numero1, numero2));
            case 4:
                return printf("Resultado: %d \n", divisao(numero1, numero2));
            default:
                return printf("Falhou escolher um numero 1 a 4\n");
        }
    }
}
