#include <stdio.h>
#include <math.h>

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

    char sales[count];
    while (fscanf(file, "%s", sales) == 1) {
        printf("%s\t$%s", months[count], sales);
        printf("\n");
        count++;
    }

    fclose(file);

    return(0);
}

/*
 *  while (fscanf(file, "%s", stats) == 1) {
 *    printf(%s\t$%s\n", months[count], stats);
 *    count++;
 *  } if (feof(file)) {
 *  } else {
 *  printf("Error unable to read file");
 *  }
 */

