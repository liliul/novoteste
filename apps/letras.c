#include <stdio.h>

int funcIfElse(int nota);

int main()
{
    printf("Nota do Estudante?\n");

    int nota;

    printf("\nDigita a Nota do estudande\n");
    scanf("%d", &nota);

    funcIfElse(nota);
}

int funcIfElse(int nota)
{
    if (nota >= 1 && nota <= 30)
    {
        printf("Estudante tirou E nota: %d\n", nota);
    }
    else if (nota >= 31 && nota <= 55)
    {
        printf("Estudante tirou D nota: %d\n", nota);
    }
    else if (nota >= 56 && nota <= 70)
    {
        printf("Estudante tirou C nota: %d\n", nota);
    }
    else if (nota >= 71 && nota <= 90)
    {
        printf("Estudante tirou B nota: %d\n", nota);
    }
    else if (nota >= 91 && nota <= 100)
    {
        printf("Estudante tirou A nota: %d\n", nota);
    }
    else
    {
        printf("Nenhuma Nota\n");
    }
    return 0;
}
