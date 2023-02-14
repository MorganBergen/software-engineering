# introduction to c++

**contents**

1.  [review](#review)
2.  [c++](#c)
3.  [c++ standard library](#c-standard-library)
4.  [se observations](#se-observations)
5.  [compiled programs](#compiled-programs)
6.  [data hierarchy](#data-hierarchy)
7.  [key se concepts supported by oo languages](#key-se-concepts-supported-by-oo-languages)
8.  [c++ syntax](#c-syntax)
9.  [escape sequences](#escape-sequences)
10. [return statements](#return-statements)
11. [variable declarations, definitions like c](#variable-declarations-definitions-like-c)
12. [relational operators](#relational-operators)
13. [if statements](#if-statements)
14. [assignment operators](#assignment-operators)
15. [increment and decrement operators](#increment-and-decrement-operators)
16. [keywords](#keywords)
17. [control structures](#control-structures)
18. [if selection statements](#if-selection-statements)
19. [if...else double selection statements](#ifelse-double-selection-statements)
20. [another if...else example](#another-ifelse-example)
21. [block and null statements](#block-and-null-statements)
22. [while statements](#while-statements)
23. [for statements](#for-statements)
24. [do...while statements](#dowhile-statements)
25. [switch statements](#switch-statements)
26. [case statements](#case-statements)
27. [break statements](#break-statements)
28. [continue statements](#continue-statements)
29. [logical operators](#logical-operators)
30. [operator precedence](#operator-precedence)
31. [structured programming](#structured-programming)
32. [the math library](#the-math-library)
33. [function prototypes](#function-prototypes)
34. [function signatures](#function-signatures)
35. [function headers](#function-headers)
36. [storage classes](#storage-classes)
37. [scope rules](#scope-rules)
38. [function call stack](#function-call-stack)
39. [functions with no parameters](#functions-with-no-parameters)
40. [inline functions](#inline-functions)
41. [reference parameters](#reference-parameters)
42. [default arguments](#default-arguments)
43. [unary scope resolution operator](#unary-scope-resolution-operator)
44. [function overloading](#function-overloading)
45. [function templates](#function-templates)
46. [data types in c++](#data-types-in-c)
47. [object-orientation in c++](#object-orientation-in-c)
48. [class and object definitions](#class-and-object-definitions)
49. [public and private members](public-and-private-members)
50. [initializing class objects](initializing-class-objects)

## 


## review

c programming
- basic data types
- control structures
- arrays

## c++

- c++ a powerful computer programming language that’s appropriate for technically oriented people with little or no programming experience, and for experienced programmers to use in building substantial information systems
- c++ is one of today’s most popular software development languages
- c++ evolved from c, which was developed by Dennis
Ritchie at Bell Laboratories
– c++, an extension of c, was developed by Bjarne Stroustrup in 1979 at Bell Laboratories
– c++ provides several features that “spruce up” the c language

## c++ standard library

- c++ programs consist of pieces called classes and functions 
- most c++ programmers take advantage of the rich collectiosn of classes and functions in the standard library
- two parts of learning the c++ world
    - the c++ langauge itself
    - how to use the classes and functions in the c++ standard library
- many special-purpose class libraries are supplied by independent software vendors

## se observations

- use a "building-block" approach to create programs.  avoid reinventing the wheel.  use existing pieces whenever possible.  called software reuse, this practice is central to object-oriented programming.

- when programming in c++, you typically will use the following building blocks, classes and functions from the c++ standard library, classes and function you and your colleagues create and classes and functions from various popular third-parties libraries.

- using c++ standard library functions and classes instead of writing your own version can imporve program perforamce, because they're written carefully to perform efficiently.  this technique also shortens program development time.

## compiled programs

- compiling a high-level language program into machine language can take a considerable amount of computer time
- interpreter programs were developed to execute high- level language programs directly (without the need for compilation), although more slowly than compiled programs
- scripting languages such as the popular web languages JavaScript and PHP are processed by interpreters

**examples of indusry software that uses c++**
- microsoft visual studio
- adobe photoshop
- google chrome
- apple xcode
- microsoft office
- call of duty
- amazon's e-commerce platform
- grand theft auto
- financial trading software such as metatrader
- the XRP ledger - decentralized blockchain that supports the XRP cryptocurrency

## data hierarchy

```
[][][][]
[][][][]  <- file
[][][][]

[][][] <- record
[][][]
[][][]

[][]  <- field
[][]

[]  <- byte (ASCII character)

1 <- bit
```

## key se concepts supported by oo languages

- abstraction
- classes
    - attributes and methods
    - member functions
    - public, private, or protected
- encapsulation
    - information hiding
    - single, double
    - faciliate reusability
- polymorphism
    - overloading
    - overriding

## c++ syntax

-  `//` indicates a comment; and extends to the end of the line
-  can still use `/*...*/` combination
-  a `#` directive is a message to the preprocessor
-  `#include <iostream>` is for i/o
-  like C, white spaces are ignored
-  `main()` function is part fo every C++ 
-  c++ programs being executed at function `main()`
-  the rest of the program consists of classes and functions
-  typically, output and input in c++ are accomplished with streams and characters
-  when a `cout` statement executed, it sends a stream of characters to the standard output stream object `std::cout` which is normally connected to the screen
-  the names `cin` (the standard input stream) and `cerr` (the standard error stream) also belong to namespace `std`

`std::cout << "string literal output\n";`

-  the `<<` operator is referred to as the stream insertion operator
-  the value to the operator's right is inserted in the output stream
-  the escape sequence `\n` means new line character and causes the cursor to move to the beginning of the next line on the screen
-  using multiple stream insertion operators `<<` in a single statement is referred to as concatenating, chaining, or cascading stream insertion operators

## escape sequences

-  `\n` newline
-  `\t` horizontal tab
-  `\r` carriage return
-  `\a` alert
-  `\\` backslash character
-  `\'` single quote
-  `\"` double quote 

## return statements

-  when the `return` statement is used at the end of main the value 0 indicates that the program has terminated successfully
-  according to the c++ standard, if program execution reaches the end of main without encountering a return statement, it's assumed that the program terminated successfully

## variable declarations, definitions like c

-  fundamental types are like c and are all lowercase
-  `short`, `int`, `long`, `double`, `char`
-  identifiers (variables, function names,...) also like c
-  assignment operators also like in c:  `+`, `-`, `*`, `/`, `%`

## relational operators

## if statements

## assignment operators

## increment and decrement operators

## keywords

## control structures

## if selection statements

## if...else double selection statements

## another if...else example

## block and null statements

## while statements

## for statements

## do...while statements

## switch statements

## case statements

## break statements

## continue statements

## logical operators

## operator precedence

## structured programming

## the math library

## function prototypes

## function signatures

## function headers

## storage classes

## scope rules

## function call stack

## functions with no parameters

## inline functions

## reference parameters

## default arguments

## unary scope resolution operator

## function overloading

- c++ enables several functions of the same name to be defined, as long as they have different signatures
- the c++ compiler selects the proper function to call by examining the number, types, and order of the arguments in the call
- function overloading is used to create several functions of the same name that perform similar tasks, but on different data types

## function templates

-  if the program logic and operator are identifical for each data type, overloading may be performed more compactly and convently by using function templates
-  you write a single function template definition
- all function template definitions begin with the `template` keyword followed by a template parameter list to the function template enclosed in angle brackets `<` and `>`

## data types in c++

1.  `char` - unsigned char, 8-bit integer
2.  `short` unsigned short - 16-bit integer
3.  `int` - unsiged int - 32-bit integer
4.  `long` - unsigned long - 64-bit integer
5.  `bool` - n/a - true or false
6.  `float` - 32-bit floating point
7.  `double` - 64-bit floating point
8.  `long long` - 128-bit integer

**type casting**

- c++ is stringly typed; it will auto-convert a variable of one type to another in a limited fashion (wont change the value)

```cpp
short x = 1;
int y = x;		// OK
short z = y;	// NO
```

## object-orientation in c++

**classes**

-  defines a set of data items and structures (data members)
-  defines a set of operations (operation members)
-  also called methods (functions)
-  also called services
-  also called class behavior
-  encapsulates the two
-  indicates which of the above members are accessible (`public`) and which are inacccessible (`private`)
	- use of access specifier:  `public`, `private`, `protected`
-  class defines an abstract data type
-  examples:  `course`, `student`, `teacher`, `book`, `account`, `printer`

**add UML - Unified modeling language**

```cpp
class Student {
	public:
		int getAge();
		std::string getName();
	private:
		int myAge;
		std::string myName();
}
```

## class and object definitions

**class**
```cpp
class Box {
	private:
		// data members
	public:
		// member functions
};
```

**objects**
```
Box b1;
Box b2;
Box b3;
```

## public and private members

**member access specifiers**

-  classes can be limit the access to their member functions and data
-  the three types of access a class can grant
-  `public` accessible wherever the program has access to an object of the class
-  `private` accessibe only to member functions of the class
-  `protected` similar to private; discussed later

## the constructor and destructor methods

1.  the constructor function

-  a special member function that initializes the data members of a class object
-  cannot return values
-  the same name as the class

2.  the destructor function

-  a special function with the same name as the class but preceded with a tilde character `~`
-  cannot take arguments and cannot be overloaded
-  performs termination housekeeping

## accessing class members

-  `.` for objects
-  `->` for pointers
-  assume an object `t`

```
t.hour
t.printMilitary();
```

## initializing class objects

-  constructors
	- initialize class members
	- same name as the class 
	- no return type
	- member variables can be initialized by the constructor or set afterward

-  passing arguments to a constructor
	-  when an object of a class is declared; initializers can be provided
	- format of declaration with initializers
	- default arguments may also be specified in the constructor prototype
	
`class-type objectname(datat-type value1, data-type value2);`












