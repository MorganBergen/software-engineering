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


