#include <stdio.h>


typedef struct Naruto_Sorte
{
    int numeroSorteados1[60];
    int numeroSorteados2[60];
    int numeroDigitados[30];
    int n1[30], n2[30];
} Naruto_Sorte;
struct Naruto_Sorte narutoSorte;

void InserirNumerosDigitadosNoNarutoSorte()
{
    int i=0,aux=0,cont=0;

    printf("\n\nDigitar 30 numeros de 1 a 60 para concorrer a premios\n\n");

    for (i=0; i<30; i++)
    {
        printf("\n\nDigitar o %d numero : ",i + 1);
        scanf("%d", &narutoSorte.numeroDigitados[i]);
    }
}
