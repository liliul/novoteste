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
    int i = 0, aux = 0, cont = 0;

    printf("\n\nDigitar 30 numeros de 1 a 60 para concorrer a premios\n\n");

    for (i = 0; i < 30; i++)
    {
        printf("\n\nDigitar o %d numero : ", i + 1);
        scanf("%d", &narutoSorte.numeroDigitados[i]);

        while (cont < i)
        {
            do
            {
                if (narutoSorte.numeroDigitados[cont] == narutoSorte.numeroDigitados[i] || narutoSorte.numeroDigitados[i] < 1 || narutoSorte.numeroDigitados[i] > 60)
                {
                    clear();
                    printf("Numero ja existe\n\n");
                    napms(2000);
                    printf("\n\nDigitar 30 numeros de 1 a 60 para concorrer a premios\n\n");
                    printf("\n\nDigitar o numero novamente %i: ", i + 1);
                    scanf("%d", &narutoSorte.numeroDigitados[i]);
                    clear();
                }

            } while (narutoSorte.numeroDigitados[i] < 1 || narutoSorte.numeroDigitados[i] > 60 || narutoSorte.numeroDigitados[cont] == narutoSorte.numeroDigitados[i]);
            cont++;

            for (aux = 0; aux < cont; aux++)
            {
                do
                {
                    if (narutoSorte.numeroDigitados[aux] == narutoSorte.numeroDigitados[cont])
                    {
                        clear();
                        printf("Numero não encontrado\n\n");
                        napms(2000);
                        printf("\n\nDigitar 30 numeros de 1 a 60 para concorrer a premios\n\n");
                        printf("\n\nDigitar o numero novamente %i: ", i + 1);
                        scanf("%d", &narutoSorte.numeroDigitados[aux]);
                        clear();
                    }

                } while (narutoSorte.numeroDigitados[aux] == narutoSorte.numeroDigitados[cont]);
            }
        }

        if (narutoSorte.numeroDigitados[i] < 1 || narutoSorte.numeroDigitados[i] > 60)
        {
            do
            {
                clear();

                printf("\n\nDigitar 30 numeros de 1 a 60 para concorrer a premios\n\n");
                printf("\n\nDigitar o numero novamente %i: ", i + 1);
                scanf("%d", &narutoSorte.numeroDigitados[i]);

                clear();
            } while (narutoSorte.numeroDigitados[i] < 1 || narutoSorte.numeroDigitados[i] > 60);
        }
        else
        {
            continue;
        }
    }
    printf("\n\nO narutoSorte esta conferindo a cartela\n\n");
    napms(2000);
}
