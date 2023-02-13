/* @file            main.c
 * @author          morgan bergen
 * @date            feb 13 2023
 * @brief           program 2 - lab 03 determining a football score possibilities
 * @description     gievn a single integer reping a score for the nfl game
 *                  write a program to determine all possible combinations of scoring plays 
 *                  that can result in that score.
 *                  the program should continue to prompt the user for a score until a 
 *                  value less than 1 is entered
 */

#include <stdio.h>

int main() {

    int stop;

    do {
        int score = 0;
        printf("Enter 0 or 1 to STOP:  ");
        scanf("%d", &stop);
        if (stop != 0 && stop != 1) {
            printf("Enter the NFL score: ");
            scanf("%d", &score);

            int saf = 2;
            int fgo = 3;
            int td0 = 6;
            int td1 = 7;
            int td2 = 8;

            for (int i = 0; i <= score; i++) {
                for (int j = 0; j <= score; j++) {
                    for (int k = 0; k <= score; k++) {
                        for (int l = 0; l <= score; l++) {
                            for (int m = 0; m <= score; m++) {
                                if (i * saf + j * fgo + k * td0 + l * td1 + m * td2 == score) {
                                    printf("%d TD + 2pt, %d TD + FG, %d TD, %d 3pt FG, %d Safety\n", m, l, k, j, i);
                                }
                            }
                        }
                    }
                }
            }
        }
    } while (stop != 0 && stop != 1);
    return(0);
}

