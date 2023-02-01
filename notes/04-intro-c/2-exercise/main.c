/*
 * @author      morgan
 * @brief       print all prime numbers between 1 to 100
 */

#include <stdio.h>

int main(void)
{
    int i, j, flag;

    for (i = 2; i <= 100; i++) {
        flag = 1;
        for (j = 2; j < i; j++) {
            if (i % j == 0) {
                flag = 0;
                break;
            }
        }
        if (flag == 1) {
            printf("%d ", i);
            printf("\n");
        }
    }
    printf("\n");
    return(0);
}
