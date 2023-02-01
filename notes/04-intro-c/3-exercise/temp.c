/*
 * @author              morgan bergen
 * @date                jan 31 2023
 * @brief               pratice question for software engineering I
 * @description         write a program to compute the factorial of a number
 */

#include <stdio.h>

int factorial(int n);

int main() {

    int n = 5;
    int f;
    
    f = factorial(n);
    printf("factorial of %d is %d ", n, f);

    return(0);
}

int factorial(int n) {
    int total = 1;
    for (int i = 2; i <= n; i++) {
        total = total * i;
    }
    return(total);
}
