#include <cs50.h>
#include <stdio.h>

int main(int argc,  char *argv[])
{
    // printf("hello, world\n Naruto E Goku");
    string answer = get_string("what your name: ");
    printf("hello, %s\n", answer);

    int age = get_int("Age: ");
    printf("Idade: %d\n", age);
}
