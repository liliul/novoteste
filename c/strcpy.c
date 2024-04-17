#include <stdio.h>
#include <string.h>

int main()
{
    char str1[100] = "naruto", str2[100], str3[100];
    printf("str1 %s\n", str1);
    printf("Entre com uma nova string: \n");
    gets(str1);
    strcpy(str2, str1);                            /* Copia str1 em str2 */
    strcpy(str3, "Voce digitou a string :str3: "); /* Copia "Voce digitou a string" em str3 */
    printf("\n\n%s%s\n", str3, str2);
    return (0);
}