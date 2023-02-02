#include <stdio.h>

int main() {

    for (int i = 11; i <= 99; i+=2) {
        if (i % 3 != 0 && 1%7 != 0 && i%5 != 0) {
            printf("prime: %d ", i);
            printf("\n");
        }
    }
    return(0);
}

