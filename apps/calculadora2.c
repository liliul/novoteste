#include<stdio.h>

int main(void) {
    float x=0, y=0, resultado=0;
    int ope=0;

    do{
        printf("\n Escolhe um numero para a operacao\n");
        printf("\n\t1 - +\n\t2 - -\n\t3 - /\n\t4 - *\n ");
        scanf("%i", &ope);

        printf("\nDigita o primeiro numero: ");
        scanf("%f", &x);
        printf("\nDigita o segundo numero: ");
        scanf("%f", &y);

        switch(ope){
            case 1:
                resultado = x+y;
                break;
            case 2:
                resultado = x-y;
                break;
            case 3:
                resultado = x/y;
                break;
            case 4:
                resultado = x*y;
                break;
            default:
                printf("\n X Opcao invalida\n");
                break;
        }

        printf("\n\t O Resultado e: %0.2f", resultado);
        printf("\n Digita 1 para continuar OU 0 para sair: ");
        scanf("%i", &ope);

    }while(ope==1);
}
