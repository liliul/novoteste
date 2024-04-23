#include <stdio.h>

int main ()
{
    int i, sequencia;
    int resultado, anterior, anterior2;

    printf("Digita uma numero para iniciar a sequencia finobacci \n");
    scanf("%d", &sequencia);

    anterior  = 1;
    anterior2 = 2;

    printf("1 - %d\n", anterior);
    printf("2 - %d\n", anterior2);

    for (i = 3; i < sequencia; i++)
    {
        resultado = anterior + anterior2;
        anterior  = anterior2;
        anterior2 = resultado;

        printf("%d - %d\n", i, sequencia);
    }
    return 0;
}
