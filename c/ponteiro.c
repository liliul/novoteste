#include <stdio.h>
#include <stdlib.h>
void display(int var, int *ptr);
void update(int *p);

int main()
{
    int var = 15;
    int *ptr;

    ptr = &var;

    display(var, ptr);
    printf("\n");
    update(&var);
    display(var, ptr);

    *ptr = 75;

    printf("\n\n");
    printf("conteudo de var =  %d\n", var);
    printf("endereço de var =  %p\n", &var);
    printf("conteudo apontado ptr =  %d\n", *ptr);
    printf("endereço apontado ptr =  %p\n", ptr);
    printf("endereço apontado ptr =  %p\n", &ptr);

    printf("\n\nEnd.");
}

void display(int var, int *ptr)
{
    printf("conteudo de var =  %d\n", var);
    printf("endereço de var =  %p\n", &var);
    printf("conteudo apontado ptr =  %d\n", *ptr);
    printf("endereço apontado ptr =  %p\n", ptr);
    printf("endereço apontado ptr =  %p\n", &ptr);
}

void update(int *p)
{
    *p = *p + 1;
}