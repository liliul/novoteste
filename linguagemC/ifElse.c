#include <stdio.h>

int numero1 = 5;
int numero2 = 3;

int main() {
    printf("Comparando variavel com if e else \n");

    if(numero1 >= numero2) {
        printf("sim numero1:%d e maior que numero2: %d", numero1, numero2);
    }
    else {
        printf("não numero1:%d e menor que numero2: %d", numero1, numero2);
    }
}
