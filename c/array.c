#include <stdio.h>

int notasFor();
char stringFor();

int main(void)
{
    float notas[5] = {7, 8, 9.5, 9.9, 5.2};
    // declarando e inicializando o vetor notas

    printf("Exibindo os Valores do Vetor \n\n");
    printf("notas[0] = %.1f\n", notas[0]);
    printf("notas[1] = %.1f\n", notas[1]);
    printf("notas[2] = %.1f\n", notas[2]);
    printf("notas[3] = %.1f\n", notas[3]);
    printf("notas[4] = %.1f\n", notas[4]);

    notasFor();
    stringFor();
}

int notasFor()
{
    printf("\n\nArray com for\n");

    int nota[4];

    for (int i = 0; i < 4; i++)
    {
        printf("Digita a nota\n");
        scanf("%d", &nota[i]);
    }

    for (int i = 0; i < 4; i++)
    {
        printf("nota[%d]: %d\n", i, nota[i]);
    }
}

char stringFor()
{
    printf("\n\nArray e String\n");

    char str[100];

    printf("Digita a string\n");
    scanf("%s", str);

    printf("str: %s\n", str);

    for (int i = 0; i < 2; i++)
    {
        printf("usando for na string [%s], completo [%c]\n", str, str[i]);
    }
}