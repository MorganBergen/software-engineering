/* write a program to compute the factorial of a number and we want a factorial in 
 * a function in itself
 */

#include <stdio.h>

int rfactorial(int n);
int factorial(int n);

int main() {
    int n = 5;
    int f;
    f = factorial(n);
    printf("factorial of %d is %d ", n, f);
    return(0);
}

// recursive definition
int rfactorial(int n) {
    if (n == 0) {
        return(1);
    } else {
        return(n * factorial(n - 1));
    }
}

// iterative definition
int factorial(int n) {
    int total = 1;
    for (int i = 2; i <= x; i++) {
        total = total * i;
    }
    return(total);
}

