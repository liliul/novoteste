#include <stdio.h>
#include <unistd.h>
#include <string.h>

int main(int argc, char **argv)
{
    if (access("headersH/lerTxt/lendoTexto.txt", F_OK))
    {
        printf("arquivo lendoTexto txt nao existe\n");
        return 1;
    }
    if (access("headersH/lerTxt/lendoTexto.txt", R_OK))
    {
        printf("arquivo lendoTexto nao tem permisao de leitura\n");
        return 1;
    }

    const int TAM = 100;
    FILE *file = fopen("headersH/lerTxt/lendoTexto.txt", "r");
    char conteudo[TAM];

    int line = 1;

    while (fgets(conteudo, TAM, file))
    {
        if (argc > 1)
        {
            if (strcmp(argv[1], "--n") == 0 || strcmp(argv[1], "--number") == 1)
            {
                printf("%d %s", line, conteudo);
                ++line;
            }
            else
            {
                printf("Esse parametro nao existe\n");
                return 1;
            }
        }
        else
        {
            printf("%s\n", conteudo);
        }
    }
    fclose(file);
    return 0;
}