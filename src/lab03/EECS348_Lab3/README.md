## lab03 introduction to compiled programming, eclipse ide

software engineering 

morgan bergen

feb 8 2023

1.  [objective](#objective)
2.  [end product](#end-product)
3.  [programming problem #1 sales report](#programming-problem-#1-sales-report)
-   [problem statement](#problem-statement)
-   [sample input](#sample-input)
-   [sample output](#sample-output)
-   [notes](#notes0)
4.  [programming problem #2 determining a football score possibilities](#programming-problem-#2-determining-a-football-score-possibilities)
-   [problem statement](#problem-statement0)
-   [sample input](#sample-input0)
-   [sample output](#sample-output0)
-   [notes](#notes1)

## objective

get familiar with eclipse IDE, C programming, and git.  learn basic usages of eclipse such as creating projects, compiling, and running them.  additionally how to push projects from the git repository to github.  for the c programming part, you will do two programs.

## end product

[url to my github repo](https://github.com/MorganBergen/software-engineering.git)

## programming problem #1 sales report

the programming lab assignment requires that 12 monthly sales to be read and a sales report to be generated.  the report should be include... 

1.  a title for the report
2.  a tabular report of the month and sales in two columns, one for the month (january, february, ...) and one for the corresponding sales
3.  a six-month moving average also in a tabular format
4.  a tabular listing of months and sales with the sales from the highest to the lowest

### problem statement

given 12 monthly sales numbers in an input file.  using functions, generate a tabular sales report and also the sales summary report (as shown in the sample output).  your output should include the below

- sales report (month and sales in two columns)
- minimum, maximum, and average of the monthly sales
- six-month moving averages
- monthly sales report from highest to lowest

### sample input

```txt
23458.01
40112.00
56011.85
37820.88
37904.67
60200.22
72400.31
56210.89
67230.84
68233.12
80950.34
95225.22
```

### sample output

```txt
Monthly sales report for 2022:
Month       Sales
January     $23458.01
February    $40112.00  
March       $56011.85
April       $37820.88
May         $37904.67
June        $60200.22
July        $72400.31
August      $56210.89
September   $67230.84
October     $68233.12
November    $80950.34
December    $95225.22

Sales summary:
Minimum sales:  $23458.01 (January)
Maximum sales:  $95225.22 (December)
Average sales:  $57979.86

Six-Month Moving Average Report:
January     -   June        $42584.61
February    -   July        $50741.66
March       -   August      $53424.80
April       -   September   $55294.64
May         -   October     $60363.34
June        -   November    $67537.62
July        -   December    $73375.12

Sales Report (Highest to Lowest):
Month           Sales
December        $95225.22
November        $80950.34
July            $72400.31
October         $68233.12
September       $67230.84
June            $60200.22
August          $56210.89
March           $56011.85
February        $40112.00
May             $37904.67
April           $37820.88
January         $23458.01
```

### notes

```c
#include <stdio.h>

int main() {

    char stats[255] = "3.14";
    printf("%s", stats);

    double xx[12] = {23458.01, 40112.00, 56011.85, 37820.88, 37904.67, 60200.22, 72400.31, 56210.89, 67230.84, 68233.12, 80950.34, 95225.22};


    for (int i = 0; i < 10; i++) {
        printf("%f\n", xx[i]);
        printf("%.2f\n", xx[i]);
    }

    return(0);
}
```
if you want to `printf` of the array using the format specifier "%f" it will print a floating point value, and by default it will print the number with six digits after the decimal point.  so if you want to print a certain number of decimal places, you can specify the precision using the format specifier, `printf(`%.Xf`, xx[i]);`, where `X` is the number of decimal places you want to print.  for example to print only two decimal places you would use the format specififer `%.2f`

## programming problem #2 determining a football score possibilities

### problem statement

given an integer representing a score in a national football league (nfl) game, write a program to determine all possible combinations of scoring plays that can result in that score.  the program should continue to prompt the user for a score until a value less than or equal to 1 is entered, at which point the program should terminate.  for each score entered, the program should display all possible combinations of scoring plays that result in that score.

**a scoring plays in an nfl game**

| scoring play                    | points |
|:--------------------------------|:-------|
| touchdown                       | 6      |
| field goal                      | 3      |
| safety                          | 2      |
| touchdown + 2-point conversion  | 8      |
| touch down + 1 point field goal | 7      |


### sample input

```txt
Enter 0 or 1 to STOP
Enter the NFL score: 25
```

### sample output

```txt
possible combinations of scoring plays:
0 TD + 2pt, 0 TD + FG, 0 TD, 1 3pt FG, 11 Safety 
0 TD + 2pt, 0 TD + FG, 0 TD, 3 3pt FG, 8 Safety 
0 TD + 2pt, 0 TD + FG, 0 TD, 5 3pt FG, 5 Safety 
0 TD + 2pt, 0 TD + FG, 0 TD, 7 3pt FG, 2 Safety 
0 TD + 2pt, 0 TD + FG, 1 TD, 1 3pt FG, 8 Safety 
0 TD + 2pt, 0 TD + FG, 1 TD, 3 3pt FG, 5 Safety 
0 TD + 2pt, 0 TD + FG, 1 TD, 5 3pt FG, 2 Safety
0 TD + 2pt, 0 TD + FG, 2 TD, 1 3pt FG, 5 Safety
0 TD + 2pt, 0 TD + FG, 2 TD, 3 3pt FG, 2 Safety
0 TD + 2pt, 0 TD + FG, 3 TD, 1 3pt FG, 2 Safety
0 TD + 2pt, 1 TD + FG, 0 TD, 0 3pt FG, 9 Safety
0 TD + 2pt, 1 TD + FG, 0 TD, 2 3pt FG, 6 Safety
0 TD + 2pt, 1 TD + FG, 0 TD, 4 3pt FG, 3 Safety
0 TD + 2pt, 1 TD + FG, 0 TD, 6 3pt FG, 0 Safety
0 TD + 2pt, 1 TD + FG, 1 TD, 0 3pt FG, 6 Safety
0 TD + 2pt, 1 TD + FG, 1 TD, 2 3pt FG, 3 Safety
0 TD + 2pt, 1 TD + FG, 1 TD, 4 3pt FG, 0 Safety 
0 TD + 2pt, 1 TD + FG, 2 TD, 0 3pt FG, 3 Safety
0 TD + 2pt, 1 TD + FG, 2 TD, 2 3pt FG, 0 Safety
0 TD + 2pt, 1 TD + FG, 3 TD, 0 3pt FG, 0 Safety
0 TD + 2pt, 2 TD + FG, 0 TD, 1 3pt FG, 4 Safety
0 TD + 2pt, 2 TD + FG, 0 TD, 3 3pt FG, 1 Safety 
0 TD + 2pt, 2 TD + FG, 1 TD, 1 3pt FG, 1 Safety 
0 TD + 2pt, 3 TD + FG, 0 TD, 0 3pt FG, 2 Safety 
1 TD + 2pt, 0 TD + FG, 0 TD, 1 3pt FG, 7 Safety 
1 TD + 2pt, 0 TD + FG, 0 TD, 3 3pt FG, 4 Safety 
1 TD + 2pt, 0 TD + FG, 0 TD, 5 3pt FG, 1 Safety 
1 TD + 2pt, 0 TD + FG, 1 TD, 1 3pt FG, 4 Safety 
1 TD + 2pt, 0 TD + FG, 1 TD, 3 3pt FG, 1 Safety 
1 TD + 2pt, 0 TD + FG, 2 TD, 1 3pt FG, 1 Safety 
1 TD + 2pt, 1 TD + FG, 0 TD, 0 3pt FG, 5 Safety 
1 TD + 2pt, 1 TD + FG, 0 TD, 2 3pt FG, 2 Safety
1 TD + 2pt, 1 TD + FG, 1 TD, 0 3pt FG, 2 Safety
1 TD + 2pt, 2 TD + FG, 0 TD, 1 3pt FG, 0 Safety
2 TD + 2pt, 0 TD + FG, 0 TD, 1 3pt FG, 3 Safety
2 TD + 2pt, 0 TD + FG, 0 TD, 3 3pt FG, 0 Safety
2 TD + 2pt, 0 TD + FG, 1 TD, 1 3pt FG, 0 Safety
2 TD + 2pt, 1 TD + FG, 0 TD, 0 3pt FG, 1 Safety
```

### notes

my output in different order do to embedded for loop.  here is my thought process...  there is a possible permutation of values from the set of elements S = {`saf`, `fgo`, `td0`, `td`, `td2`} therefore i need to go through every value from 0-ceiling in order to loop to the next and determine if it meets the score value im looking for.

every iteration will have an embedded one untill all possible values of `m` which is affiliated with `m * td2` has been trialed for equalling 25 with all other values at 0, in this case there are no possible combinations thus, 

`0 TD + 2pt, 0 TD + FG, 1 TD, 0 3pt FG, 0 Safety != 25` so the first loop will do nothing and keep iterating by incrementing `m++` untill its less than or equal to 25, however there are no integer values that allows for `8 * m = 25` so we try again for a different combinating by encorporating the next highest value for the superior for-loop.  and we keep doing this until all possible values get checked.

```c
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
```

**my output**
```
Enter the NFL score: 25
0 TD + 2pt, 1 TD + FG, 3 TD, 0 3pt FG, 0 Safety
1 TD + 2pt, 2 TD + FG, 0 TD, 1 3pt FG, 0 Safety
2 TD + 2pt, 0 TD + FG, 1 TD, 1 3pt FG, 0 Safety
0 TD + 2pt, 1 TD + FG, 2 TD, 2 3pt FG, 0 Safety
2 TD + 2pt, 0 TD + FG, 0 TD, 3 3pt FG, 0 Safety
0 TD + 2pt, 1 TD + FG, 1 TD, 4 3pt FG, 0 Safety
0 TD + 2pt, 1 TD + FG, 0 TD, 6 3pt FG, 0 Safety
2 TD + 2pt, 1 TD + FG, 0 TD, 0 3pt FG, 1 Safety
0 TD + 2pt, 2 TD + FG, 1 TD, 1 3pt FG, 1 Safety
1 TD + 2pt, 0 TD + FG, 2 TD, 1 3pt FG, 1 Safety
0 TD + 2pt, 2 TD + FG, 0 TD, 3 3pt FG, 1 Safety
1 TD + 2pt, 0 TD + FG, 1 TD, 3 3pt FG, 1 Safety
1 TD + 2pt, 0 TD + FG, 0 TD, 5 3pt FG, 1 Safety
0 TD + 2pt, 3 TD + FG, 0 TD, 0 3pt FG, 2 Safety
1 TD + 2pt, 1 TD + FG, 1 TD, 0 3pt FG, 2 Safety
0 TD + 2pt, 0 TD + FG, 3 TD, 1 3pt FG, 2 Safety
1 TD + 2pt, 1 TD + FG, 0 TD, 2 3pt FG, 2 Safety
0 TD + 2pt, 0 TD + FG, 2 TD, 3 3pt FG, 2 Safety
0 TD + 2pt, 0 TD + FG, 1 TD, 5 3pt FG, 2 Safety
0 TD + 2pt, 0 TD + FG, 0 TD, 7 3pt FG, 2 Safety
0 TD + 2pt, 1 TD + FG, 2 TD, 0 3pt FG, 3 Safety
2 TD + 2pt, 0 TD + FG, 0 TD, 1 3pt FG, 3 Safety
0 TD + 2pt, 1 TD + FG, 1 TD, 2 3pt FG, 3 Safety
0 TD + 2pt, 1 TD + FG, 0 TD, 4 3pt FG, 3 Safety
0 TD + 2pt, 2 TD + FG, 0 TD, 1 3pt FG, 4 Safety
1 TD + 2pt, 0 TD + FG, 1 TD, 1 3pt FG, 4 Safety
1 TD + 2pt, 0 TD + FG, 0 TD, 3 3pt FG, 4 Safety
1 TD + 2pt, 1 TD + FG, 0 TD, 0 3pt FG, 5 Safety
0 TD + 2pt, 0 TD + FG, 2 TD, 1 3pt FG, 5 Safety
0 TD + 2pt, 0 TD + FG, 1 TD, 3 3pt FG, 5 Safety
0 TD + 2pt, 0 TD + FG, 0 TD, 5 3pt FG, 5 Safety
0 TD + 2pt, 1 TD + FG, 1 TD, 0 3pt FG, 6 Safety
0 TD + 2pt, 1 TD + FG, 0 TD, 2 3pt FG, 6 Safety
1 TD + 2pt, 0 TD + FG, 0 TD, 1 3pt FG, 7 Safety
0 TD + 2pt, 0 TD + FG, 1 TD, 1 3pt FG, 8 Safety
0 TD + 2pt, 0 TD + FG, 0 TD, 3 3pt FG, 8 Safety
0 TD + 2pt, 1 TD + FG, 0 TD, 0 3pt FG, 9 Safety
0 TD + 2pt, 0 TD + FG, 0 TD, 1 3pt FG, 11 Safety
```
