#include <stdio.h>
#include <ncurses.h>

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
                    system("clear");
                    printf("Numero ja existe\n\n");
                    napms(2000);
                    printf("\n\nDigitar 30 numeros de 1 a 60 para concorrer a premios\n\n");
                    printf("\n\nDigitar o numero novamente %i: ", i + 1);
                    scanf("%d", &narutoSorte.numeroDigitados[i]);
                    system("clear");
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

void MostrarNumerosDigitadosNoNarutoSorte()
{
    int l = 0, k = 0, j = 0, x = 0, aux = 0, acertos = -1;

    printf("\n\nNumeros marcados na cartela virtual\n\n");

    for (l = 0; l < 30; l++)
    {
        printf("[%d\n", narutoSorte.numeroDigitados[l]);
        printf("]");

        // fflush(stdout);
    }

    napms(2000);
    printf("\n\nAnalisando os numeros digitados\n\n");
    napms(2000);
    printf("\n\nSaindo os numeros sorteados da cartela: \n\n");
    napms(2000);

    srand(time(NULL));

    for (l = 0; l < 30; l++)
    {
        narutoSorte.numeroSorteados1[l] = 0;
    }

    for (j = 0; j < 30; j++)
    {
        narutoSorte.numeroSorteados2[j] = rand() % 60;
        x = narutoSorte.numeroSorteados2[j];

        if (narutoSorte.numeroSorteados1[x] == 1)
        {
            for (k = 0; k < 30; k++)
            {
                if (narutoSorte.numeroSorteados1[k] == 0)
                {
                    narutoSorte.numeroSorteados2[j] = k;
                    x = k;
                    break;
                }
            }
        }

        narutoSorte.numeroSorteados1[x] = 1;
    }

    printf("\n\n\t\t\tNumeros sorteados\n\n");

    for (k = 0; k <= 28; k++)
    {
        for (l = k; l <= 29; l++)
        {
            if (narutoSorte.numeroSorteados2[k] > narutoSorte.numeroSorteados2[l])
            {
                aux = narutoSorte.numeroSorteados2[k];
                narutoSorte.numeroSorteados2[k] = narutoSorte.numeroSorteados2[l];
                narutoSorte.numeroSorteados2[l] = aux;
            }
        }
    }

    for (j = 0; j < 30; j++)
    {
        if (narutoSorte.numeroSorteados2[j] == 0)
        {
            narutoSorte.numeroSorteados2[j] = 1;
        }
        else
        {
            printf("[ %d ]\n ", narutoSorte.numeroSorteados2[j]);
        }
    }

    printf("\n\n\nResultado Final\n\n\n");
    acertos = 0;

    for (l = 0; l < 30; l++)
    {
        for (j = 0; j < 30; j++)
        {
            narutoSorte.n1[l] = narutoSorte.numeroDigitados[l];
            narutoSorte.n2[j] = narutoSorte.numeroDigitados[j];

            if (narutoSorte.n1[l] == narutoSorte.n2[j])
            {
                if (acertos < 0)
                {
                    acertos = 0;
                }
                acertos++;
            }
        }
    }

    if (acertos == 20)
    {
        printf("\n\n\nVocê ganhou o jogo da sorte Parabens\n\n\n");
    }
    else
    {
        printf("\n\n\nVocê perdeu tudo\n\n\n");
    }

    printf("Acertos: %d", acertos);
    printf("\n\n\n\n");
    napms(3000);
}
