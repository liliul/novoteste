#include <stdio.h>

int main()
{
    float segundos, minutos, resultadoFinal;

    int i = 0;
    while(i <= 1) {
        printf("\n-------Converter Segundos em Minutos-------\n\n");

        printf("Segundos: \n");
        scanf("%f", &segundos);

        minutos = segundos / 60;

        printf("> %.2f_minutos", minutos);
    }
}
