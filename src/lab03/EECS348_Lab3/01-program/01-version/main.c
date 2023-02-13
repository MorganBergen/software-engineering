#include <stdio.h>
#include <math.h>

double average(double array[], int start, int end);
double compare(const void *a, const void *b);

int main() {
    
    FILE *file;
    int count = 0;
    char filename[20] = "";
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
    printf("Enter the name of the file: ");
    scanf("%s", filename);
    file = fopen(filename, "r");
    if (file == NULL) {
        printf("error opening file");
        return(1);
    } else {
        while (fscanf(file, "%*s") != EOF) {
            count++;
        }
    }
    double sales[count];
    rewind(file);
    int i = 0;
    while (fscanf(file, "%lf", &sales[i]) != EOF) {
        i++;
    }
    fclose(file);

    printf("Monthly sales report for 2022:\n");
    printf("Month\t\tSales\n");
    for (int i = 0; i < count; i++) {
        printf("%s\t$%.2lf\n", months[i], sales[i]);

    }

    double max_value = sales[0];
    double min_value = sales[0];

    for (int i = 0; i < count; i++) {
        max_value = fmax(max_value, sales[i]);
        min_value = fmin(min_value, sales[i]);
    }

    printf("\nSales summary:\n");
    printf("Minimum sales:\t%.2lf\n", min_value);
    printf("Maximum sales:\t%.2lf\n", max_value);

    printf("\nSix-Month Moving Average Report:\n");
   
    int j = 0;
    int k = 5;
    while (j <= 6 && k <= 11) {
        printf("%s-\t%s\t$%.2lf\n", months[j], months[k], average(sales, j, k));
        j++;
        k++;
    }

    double sales_htl[count];
    printf("\nSales Report (Highest to Lowest):\n");
    printf("Month\t\tSales\n");
    for (int i = 0; i < count; i++) {
        sales_htl[i] = sales[i];
    }

    for (int i = 0; i < count; i++) {
       for (int j = 0; j < count; j++) {
           if (sales_htl[i] > sales_htl[j]) {
               double temp = sales_htl[i];
               sales_htl[i] = sales_htl[j];
               sales_htl[j] = temp;
           }
        }
    }
    for (int i = 0; i < count; i++) {
        for (int j = 0; j < count; j++) {
            if (sales_htl[i] == sales[j]) {
                printf("%s\t$%.2lf\n", months[j], sales[j]);
            }
        }
    }

    return(0);
}

double average(double array[], int start, int end) {
    double sum = 0.00;
    double ave = 0.00;
    for (int i = start; i <= end; i++) {
        sum += array[i];
    }
    ave = sum / (end - start + 1);
    double rounded = round(ave * 100.0) / 100.0;
    return (rounded);
}

