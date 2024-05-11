#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(int argc, char *argv[])
{
    setlocale(LC_ALL, "Portuguese");

    int matriz[3][3];
    int vertical, horizontal, chaveDeBusca, linha, coluna, achouResultado = 0;

    for (horizontal = 0; horizontal < 3; horizontal++)
    {
        for (vertical = 0; vertical < 3; vertical++)
        {
            printf("Insira o elemento da linha %d, coluna %d:\n", vertical, horizontal);
            scanf("%d", &matriz[vertical][horizontal]);
        }
    }


    printf("Insira a chave de busca:\n");
    scanf("%d", &chaveDeBusca);
    for(vertical = 0; vertical < 3; vertical++)
    {
        for (horizontal = 0; horizontal < 3; horizontal++)
        {
            if (matriz[vertical][horizontal] == chaveDeBusca)
            {
                achouResultado = 1;

                linha  = vertical;
                coluna = horizontal;
                break;
            }
        }

        if (achouResultado == 1)
        {
            break;
        }
    }

    if (achouResultado == 1)
    {
        printf("O elemento %d foi encontrado na linha %d, coluna %d.\n", chaveDeBusca, vertical, horizontal);
    } else {
        printf("Chave não encontrada\n");
    }
    return 0;
}
