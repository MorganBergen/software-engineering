#include <stdio.h>
#include "isOdd.h"

int isOdd(int num) {
    if (num % 2 != 0) {
        printf("%d is odd.\n", num);
    }
    return(0);
}
