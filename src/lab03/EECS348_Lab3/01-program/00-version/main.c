#include <stdio.h>
#include <math.h>

int main() {
    
    FILE *fp;
    char stats[255];
    int count = 0;
    char months[12][10] = {"January  ", 
                           "February ",
                           "March    ",
                           "April    ",
                           "May      ",
                           "June     ",
                           "July     ",
                           "August   ",
                           "September",
                           "October  ",
                           "November ",
                           "December "};
    fp = fopen("input.txt", "r");

    printf("Monthly sales report for 2022:\n");
    printf("Month\t\tSales\n");

    // 

    while (fscanf(fp, "%s", stats) == 1) {
        printf("%s\t$%s", months[count], stats);
        printf("\n");
        count++;
    } if (feof(fp)) {
    } else {
        printf("Error unable to read file");
    }
    printf("\nSales summary:\n");
    
    int length = sizeof(stats)/sizeof(stats[0]);
    int max_value = stats[0];

    printf("stats = %s", stats);

    for (int i = 0; i < length; i++) {
        max_value = fmax(max_value, stats[i]);
    }

    printf("length of stats: %d", length);

    printf("\nSales Report (Highest to Lowest):\n");
    printf("%d", max_value);


    fclose(fp);


    return(0);
}
