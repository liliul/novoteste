#include <stdio.h>

void imprime1(int v[], int n)
{
    int i;
    for (i = 0; i < n; i++)
    {
        printf("%d ", v[i]);
    }
}
void imprime2(int v[5])
{
    int i;
    for (i = 0; i < 5; i++)
    {
        printf("%d ", v[i]);
    }
}
void imprime3(int *v, int n)
{
    int i;
    for (i = 0; i < n; i++)
    {
        printf("%d ", v[i]);
    }
}

void imprimeMatrizes(int matrix[][4], int n)
{
    int i, j;

    for (i = 0; i < n; i++)
    {
        for (j = 0; j < 4; j++)
        {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
}

int main()
{
    int vetor[5] = {1, 2, 3, 4, 5};

    puts("imprime1>");
    imprime1(vetor, 5);

    puts("imprime2>");
    imprime2(vetor);

    puts("imprime3>");
    imprime1(vetor, 5);

    printf("\n\n-----000 Matriz 000-----\n");

    int matrix[3][4] = {
        {1, 2, 3, 4},
        {50, 60, 70, 80},
        {91, 101, 111, 121}};

    imprimeMatrizes(matrix, 3);
}
