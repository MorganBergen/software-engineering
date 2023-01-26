# 04 intro to c

**morgan bergen**
**software engineering**
**jan 26 2023**

**contents**

1.  [learning objectives](#learning-objectives)
2.  [sample program](#sample-program)
3.  [writing a c program](#writing-a-c-program)
4.  [compiling a c program](#compiling-a-c-program)
5.  [executing a c program](#executing-a-c-program)
6.  [executing a c program](#executing-a-c-program)
7.  [some common properties of c](#some-common-properties-of-c)
8.  [sample program](#sample-program)
9.  [some common properties of c](#some-common-properties-of-c)
10. [compilation process](#compilation-process)
11. [c functions](#c-functions)
12. [memory locations](#memory-locations)
13. [what are c libraries?](#what-are-c-libraries)
14. [c variable types](#c-variable-types)
15. [c variables](#c-variables)
16. [expression and evaluation](#expression-and-evaluation)
17. [comparison operators](#comparison-operators)
18. [if statement](#if-statement)
19. [if else statement](#if-else-statement)
20. [assignment operators](#assignment-operators)
21. [while loop](#while-loop)
22. [for loop](#for-loop)
23. [summary](#summary)

## learning objectives

- learn how to write and compile a c program
- learn what c libraries are
- understand the c variable types
- understand some control statements

## sample program

```c
#include <stdio.h>

int main() {
    int year;

    printf("\n");
    printf("Enter a year: ");
    scanf("%d, &year");

    // leap year if perfectly divisible by 400
    if (year % 400 == 0) {
        printf("%d is a leap year.", year);
    } 

    // not a leap year if divisible by 100, but divisible by 400
    else if (year % 100 == 0) {
        printf("%d is not a leap year.", year);
    }

    // all other years are not leap years
    else {
        printf("%d is not a leap year.", year);
    }

    return(0);
}

## writing a c program

1.  write the code for a program using an editor such as neovim and save as my_pgm.c

```c
#include <stdio.h>
int main() {
    printf("hello world");
    return(0);
}
```

## compiling a c program

2. compile the program to convert program from source to "executabale" or "binary"

`$ gcc -o my_pgm.exe my_pgm.c`
