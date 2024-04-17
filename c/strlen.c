#include <stdio.h>
#include <string.h>

/*

    Sua forma geral:

    strlen (string);

    A função strlen() retorna o comprimento da string fornecida. O terminador nulo não e
    contado. Isto quer dizer que, de fato, o comprimento do vetor da string deve ser um a mais que o
    inteiro retornado por strlen().

*/

int main()
{
    int size;
    char str[100];
    printf("Entre com uma string: ");
    gets(str);
    size = strlen(str);
    printf("\n\nA string que voce digitou tem tamanho %d\n", size);
    return (0);
}
