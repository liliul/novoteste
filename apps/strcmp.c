#include <stdio.h>
#include <string.h>

int main(void)
{
    char sNome[80];
    int iTamanho;

    while (1)
    {
        printf("Entre com nomes (fim p/ terminar): \n");
        gets(sNome);

        /* Importante lembrar que a comparação é feita até encontrar
           o caractere \0. */
        if (strcmp(sNome, "fim") == 0)
        {
            break;
        }
        iTamanho = strlen(sNome);
        printf("Nome com %d caracteres\n", iTamanho);
    }
    return 0;
}