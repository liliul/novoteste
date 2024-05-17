#include <stdio.h>
#include <unistd.h>

int main(int argc, char **argv)
{
    if (access("headersH/lerTxt/lendoTexto.txt", W_OK))
    {
        printf("Voce nao tem primissao de escrita\n");
        return 1;
    }

    FILE *file = fopen("headersH/lerTxt/lendoTexto.txt", "a");
    fputs("Vegeta VS Itachi\n", file);
    fclose(file);

    return 0;
}