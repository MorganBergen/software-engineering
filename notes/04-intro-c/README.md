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
```

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

<img width="687" alt="unix" src="https://user-images.githubusercontent.com/65584733/214948810-c2cba9e6-8d20-41d7-b9ec-d57f1725b04b.png">

3.  if the compiler produces any errors, fix them and recompile

## executing a c program

2.  once there are now programming errors and you have an n executable code run it:

`$ my_pgm.exe`
hello

## some common properties of c

- case matters, white space doesnt 
- comments go between `/*` and `*/`
- each statement is followed by a semicolon
- execution begin in the main function

```c
#inclue <stdio.h>
int main(int argc, char* argv[]) {
    /* start here */
    printf("hello world");
    return(0);
    /* end here */
}
```

## compilation process

- compilation occurs in two steps:
    - preprocessing
    - compiling

- in preprocessing, source code is "expanded" into a larger form that is simpler for the compiler to understand.  any line that starts with `#` is a line taht is interpreted by the preprocessor
    - include files are "pasted in" `#include`
    - macros are "expanded" `#define`
    - comments are stripped out `/* */ , //`
    - continued lines are joined `\`

- the compiler then converts the resulting text into bianry code the cpu can run directly

```c
#include <stdio.h>
int main(int argc, char** argv) {
    printf("hello\n");
    return(0);
}
```
--------------> preprocess

```
__extension__ typedef unsigned long long int __dev_t;
__extension__ typedef unsigned int __uid_t;
__extension__ typedef unsigned int __gid_t;
__extension__ typedef unsigned long int __ino_t;
__extension__ typedef unsigned long long int __ino64_t;
__extension__ typedef unsigned int __nlink_t;
__extension__ typedef long int __off_t;
__extension__ typedef long long int __off64_t;
extern void flockfile (FILE *__stream) ;
extern int ftrylockfile (FILE *__stream) ;
extern void funlockfile (FILE *__stream) ;
int main(int argc, char** argv) {
    printf("hello\n");
    return(0);
}
```

--------------> compile

**my_program**
```
main:
    pushq   %rbp
    movq    %rsp, %rbp
    movl    $0, -4(%rbp)
    movl    $.LC0, %edi
    call    puts
    movl    $0, %eax
    popq    %rbp
    ret
.LC0:
    .string "hello"
```
## c functions

- a function is a series of instructions to run.
- you pass arguments to a function and it retunr a value
- `main()` is a function, it's only special because it always gets called first when you run your program

```c
#include <stdio.h>
// simplest c program

/* int  return type or void
 * argc number of arguments
 * argv array of arguments
 */
int main(int argc, char **argv) {
    // calling a function printf() is just another function like main()
    // it's defined for you in a library, a collection  of functions you can call from your progam
    printf("hello world\n");
    // returning a value
    return(0);
}
```

## memory locations

- memory is a like a big table of numbered slots where bytes can be stored
- the number of a slot is its **address**
- one byte **value** can be stored in each slot
- some "logical" data values spand more than one slot, like the character string "hello\n"
- a **type** names a logical meaning to a span of memory
- some simple types are as follows

```
char        a single character 1 slot
char [10]   an array of 10 characters
int         signed 4 byte integer
float       4 byte floating point number
int64_t     signed 8 byte integer
```

|addr|value    |
|----|---------|
| 0  |         |
| 1  |         |
| 2  |         |
| 3  |         |
| 4  |'H' (72) |
| 5  |'e' (101)|
| 6  |'l' (108)|
| 7  |'l' (108)|
| 8  |'o' (111)|
| 9  |'\n' (10)|
| 10 |'\0' (0) |

## what are c libraries?

- c is a lightweight language
    - most of its intelligence is compartmentalized in libraries
    - almost all c programs use teh "stdio" or standard input/output library
    - many also use the "math" library
- to use a library, include the header file (i.e., stdio.h) at the top of the file
- for most special purpose ibraries (i.e. math) you need to include the math library

## c variable types

- the most common types are: `char`, `int`, `float`, `double`
- strings are arrays of characters (we'll cover arrays later)

```c
/* delcares an integer called x. its value isnt assigned */
int x;
/* declares two floating point numbers; set x equal to pi */
float y, z = 3.14159;
/* now z is equal to 4 */
z = 4;
/* an error because myval is not declared */
myval = 2;
```

## c variables

- a variable names a place in memory where you store a value of a certain type
- you first define a variable by giving it a name and specifying the type and optionally an initial value

`char x;` <- initial value of x is undefined

`[    ] y = 'e';` <- extern? static? const?, the initial value is e, the name is y

| symbol | addr | value  |
|--------|------|--------|
|        | 0    |        |
|        | 1    |        |
|        | 2    |        |
|        | 3    |        |
| x      | 4    |   ?    |   <-- the compiler puts them somewhere in memory
| y      | 5    |'e'(101)|   <-- the compiler puts them somewhere in memory
|        | 6    |        |
|        | 7    |        |
|        | 8    |        |
|        | 9    |        |
|        | 10   |        |
|        | 11   |        |
|        | 12   |        |

## expressions and evaluation

**expressions combine values using operators, according to precedence**

```
1 + 2 * 2     -> 1 + 4 -> 5
(1 + 2) * 2   -> 3 * 2 -> 6
```

**symbols are evaluated to their values before being combined**

```
int x = 1;
int y = 2;
x + y * y     -> x + 2 * 2 
              -> x + 4
              -> 1 + 4
              -> 5
```

**comparison operators are used to compare values**
in c, 0 means "false" and any other value means "true"

```c
int x = 4;
(x < 5)      -> (4 < 5) -> <true>
(x < 4)      -> (4 < 4) -> 0
((x < 5) || (x < 4)) -> (<true> || (x < 4)) -> (<true> || 0) -> <true>
                                      ↑
                not evaluated because first clause was true
```

## comparison operators

- `==` equal to
- `!=` not equal to
- `<` less than
- `>` greater than
- `<=` less than or equal to
- `>=` greater than or equal to
- `&&` logical and
- `||` logical or
- `!` logical not
- `+` plus
- `-` minus
- `*` times
- `/` divide
- `%` modulus (remainder)

## the `if` statement

- syntax if expression statement
- if the expression is true (not zero), the statement is executed. if the expression is false, it is not executed
- you can group multiple expressiosn together with braces

```c
if (expression) {
    statement
}
```

## the `if`/`else` statement

- syntax if expression statement1; else statement2;
- if the expression is true, statement1 will be executed, otherwise statement2 will be

```c
if (myVale5 

find all three digit numbers that are equal to the sum of the cube of their digits
to the sum of the cude of each of their digits
```

## the `while` statement

## the `for` statement

## the `switch` statement

## the `break` statement

## notes

```c
#include <stdio.h>

int main() {
    int h, t, d;
    // because we want to look at all the 100 digit numbers
    for (int i = 100; i <= 999; i++) {
        h = i / 100; // will give us the number of hundreds
        t = (i - (h * 100)) / 10; // will give us the number of tens
        d = (i - (h * 100 + t * 10)); // will give us the number of digits
        if (i == (h * h * h + (t * t * t) + (d * d * d)) {

        }
    }
```

```c
// %d the expression that will be printed will be an integer
// the numerical value is i 
printf("the value is %d", i);

printf("the values are %d and %d ", i, k);

%d is a placeholder
printf("%d plus %d is equal to %d ");
       [ ]     [ ]            [ ]
```

suppose you want to print all prime numbers between 1 to 100

```c
#include <stdio.h>

int main() {


}
```
