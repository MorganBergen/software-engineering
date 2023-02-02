/*
 * armstrong number
 */

#include <stdio.h>

int main() {


    int x, y, z;

    for (int i = 100; i < 1000; i++) {
        x = i/100;
        y = (i - (x * 100))/10;
        z = (i - ((x * 100) + (y * 10)))/1;

        if (i == (x*x*x + y*y*y + z*z*z)) {
            printf("armstrong: %d\n", i);
        }
    }

    return(0);
}
