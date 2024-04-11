#include <stdio.h>

int main() {
    char strings[10];

    // printf("Scanf convecional\n");
    // scanf("%s", strings);
    // fflush(stdin);
    // printf("String > %s\n\n", strings);
    //
    // printf("Scanf aprimorado\n");
    // scanf("%9[^\n]s", strings);
    // fflush(stdin);
    // printf("String scanf aprimorado > %s\n\n", strings);

    printf("Leitura pelo gets\n");
    gets(strings);
    fflush(stdin);
    puts("Res gets>");
    puts(strings);
    puts("");

    printf("Leitura pelo fgets\n");
    fgets(strings, 10, stdin);
    fflush(stdin);
    puts("Res fgets>");
    puts(strings);
}
