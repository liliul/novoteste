#include <stdio.h>

int main() {
    int i;

    for (i=0; i < 10; i++) {
        printf("> %d \n", i);

        if (i == 5) {
            continue;
        }

        if (i == 8) {
            break;
        }
    }
}
