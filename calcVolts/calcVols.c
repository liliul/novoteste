#include <stdio.h>

// valores para teste 21/1.9/0.01

float Vin  = 0.0, Vled = 0.0, Iled = 0.0, R = 0.0;

int main(int argc,  char *argv[])
{
    printf("Led Calc v1.0 \n\n");
    printf("Programa em C \n\n");

    printf("Digita  o Vin em volts \n\n");
    scanf("%f", &Vin);
    printf("\n\n");

    printf("Digita  o Vled em volts \n\n");
    scanf("%f", &Vled);
    printf("\n\n");

    printf("Digita  o Iled em volts \n\n");
    scanf("%f", &Iled);
    printf("\n\n");

    R = (Vin-Vled) / Iled;

    printf("O resister para o LED tem o valor de %.2f Ohms\n\n", R);
}
