#include <stdio.h>

int numero;

int main() {
    printf("Digita um numero de 1 a 5\n");
    scanf("%d", &numero);

    switch (numero) {
        case 1:
            printf("Naruto Classico\n");
            break;
       case 2:
            printf("One Pice\n");
            break;
       case 3:
            printf("Dragon Ball GT\n");
            break;
       case 4:
            printf("Naruto Shippuden\n");
            break;
       case 5:
            printf("Dragon Ball Z\n");
            break;
       default:
           printf("Numero invalido de 1 a 5\n");
           break;
    };

}
