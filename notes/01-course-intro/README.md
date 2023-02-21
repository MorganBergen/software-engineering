# introduction to course

**[homepage](https://people.eecs.ku.edu/~saiedian/348/)**

**description of course**

This course is an introduction to software development fundamentals and software engineering. It incorporates a thorough introduction to a compiled programming language. A baseline knowledge of tools and utilities is covered including the shell, common programs, version control, IDEs, editors, and build tools. Topics include: software development principles (e.g., design patterns, modularity, loose coupling), extending larger codebases, developing larger codebases, continuous integration, continuous deployment, debugging, unit testing, test- driven development, and databases. Grade of C (not C-) required to progress. Prerequisite: EECS 268.

## quiz 2

1.  describe the behavior of the following program?

```c
#include <stdio.h>

int main() {
    int n;
    for (n = 7; n != 0; n--) {
        printf("%d\n", n--);
    }
    return 0;
}
```

n will be initialized to 7, decremented by 1 each time, and then before it get printed it will be decremented again.  therefore (n--)-- for each iteration and because it's two for each iteration then it will never reach 0.  therefore it's an infinite loop.

2.  what is the result after execution of the following code if a is 10, b is 
