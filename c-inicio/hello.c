#include <cs50.h>
#include <stdio.h>

int main(void) {
    // printf("hello, world\n Naruto E Goku");
    string answer = get_string("what your name: ");
    printf("hello, %s\n", answer);

    int age = get_int("Age: ");
    printf("Age:");
}
