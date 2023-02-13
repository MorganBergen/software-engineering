#include <stdio.h>

int main() {

    char stats[255] = "3.14";
    printf("%s", stats);
    
    // double var = [rows][columns]

    double xx[12] = {23458.01, 40112.00, 56011.85, 37820.88, 37904.67, 60200.22, 72400.31, 56210.89, 67230.84, 68233.12, 80950.34, 95225.22};


    for (int i = 0; i < 10; i++) {
        printf("%f\n", xx[i]);
    }

    return(0);
}
