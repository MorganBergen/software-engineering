/*
 * @file            1-primes/main.c
 * @author          morgan bergen
 * @date            feb 1 2023
 * @brief           find all prime numbers between 1 to 100
 * @description     a prime number is defined as a number that is only divisible by 1 and itself
 *                  primes between 0 - 10 are 2, 3, 5, 7
 */

#include <stdio.h>

int main() {
    

    int checkprime;

    for(int i = 2; i <= 100; i++){
    
        checkprime = 1;
        
        for(int n = 2; n < i; n++){
        
            if(i % n == 0 ){
                checkprime = 0; // it is divisible by some other number, not a prime    
                break;
            }
        }
        
        if(checkprime == 1){
            printf("prime: %d\n", i);
        }
    }


    return(0);
}

