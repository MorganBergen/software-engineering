#include <stdio.h>

int main() {

    int cp;

    for (int i = 2; i <= 100; i++) {
        cp = 1; // true
        for (int j = 2; j < i; j++) {
            if (i % j == 0) {
                cp = 0; // false
            }
        }
        if (cp == 1) {
            printf("prime: %d\n", i);
        }
    }
    return(0);
}
