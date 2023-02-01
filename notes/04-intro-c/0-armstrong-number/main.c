/*
 * @file            0-armstrong-number/main.c
 * @author          morgan bergen
 * @date            feb 01 2023
 * @brief           find all the armstrong numbers
 * @description     all three digit numbers that are equal to the sum of the cube of their digits
 * @example         153 = 1*1*1 + 5*5*5 + 3*3*3
 */


#include <stdio.h>

int main() {


    int x, y, z;

    for (int i = 100; i <= 999; i++) {
        
        x = i / 100;
        y = (i - (x * 100))/10;
        z = (i - ((x * 100) + (y * 10)))/1;

        if (i == (x*x*x + y*y*y + z*z*z)) {
            printf("%d = %d*%d*%d + %d*%d*%d + %d*%d*%d\n", i, x, x, x, y, y, y, z, z, z);
        }

    }


    return(0);
}
