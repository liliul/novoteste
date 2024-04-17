#include <stdio.h>
#include <string.h>
/*
    A função strcat() tem a seguinte forma geral:

    strcat (string_destino,string_origem);

    A string de origem permanecerão inalterada e serão anexada ao fim da string de destino. Um exemplo:
*/
int main()
{
    char str1[100] = "Son Goku", str2[100];
    printf("valor da str1: %s\n", str1);
    printf("Entre com uma nova string: \n");
    gets(str1);
    strcpy(str2, "String strcpy e strcat > str2: ");
    strcat(str2, str1); /* str2 armazenara' Voce digitou a string + o conteudo de str1 */
    printf("\n\n%s\n", str2);
    return (0);
}
