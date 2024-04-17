#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    FILE *pf;
    char string[100];
    printf("valor de string %s\n", string);
    if ((pf = fopen("compiler/arquivo.txt", "w")) == NULL)
    {
        printf("\nNao consigo abrir o arquivo ! \n");
        exit(1);
    }
    do
    {
        printf("\nDigite uma nova string. Para terminar, digite <enter>: \n");
        fgets(string, 100, stdin);
        fputs(string, pf);
        putc('\n', pf);
        if (ferror(pf))
        {
            perror("Erro na gravacao");
            fclose(pf);
            exit(1);
        }
    } while (strlen(string) > 2);
    fclose(pf);
    printf("ponteiro pf %p\n", pf);
}