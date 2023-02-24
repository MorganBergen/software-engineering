# lab04

**contents**

1.  [task 1](#task-1)
2.  [task 2](#task-2)
3.  [task 3](#task-3)

## task 1

in cycle servers `ssh m358b583@cycle3.eecs.ku.edu`

```bash
mkdir Lab4_Bergen
cd Lab4_Bergen
tar -xvf Lab4_provided_code.tar.gz
```

the makefile is already provided, make sure you understand how this makefile is different than the one you created for the `c` programs.

-  `g++` is the compiler used for c++ programs
-  `-Wall` is a flag used to turn on most compiler warning
-  `-g` this flag adds debugging information to the executable file
-  `-std=c++11` as of `GCC 4.8.1`, GCC's c++11 mode implements all of the major features of c++

## task 2

this lab explores different operations to be performed on matrices.  some of the code is already provided.  you should implement the remaining functions to complete this lab.  first cimpile the code using `make`.

the terminal should now have created an executable called `prog` you can run this like any other executable `./prog`

### enter 1

this will print the matrix that the function `createMatrix()` reads in from the file `input.txt`

```
❯ ./prog

1. Print the Matrix
2. Perform an addition of the matrix with itself
3. Get the maximum value in the matrix
4. Find whether an element exists in the matrix
5. Change an existing element in the matrix
6. Perform matrix multiplication
7. Transpose of a matrix
Which operations would you like to perform on the matrix: 1
1	2	3	4
5	6	7	8
9	10	11	12
13	14	15	16
```

### enter 2

this will perform the addition of the matrix with itself using the `addMatrix()` function.  you will see the following results,

```bash
❯ ./prog

1. Print the Matrix
2. Perform an addition of the matrix with itself
3. Get the maximum value in the matrix
4. Find whether an element exists in the matrix
5. Change an existing element in the matrix
6. Perform matrix multiplication
7. Transpose of a matrix
Which operations would you like to perform on the matrix: 2
2	4	6	8
10	12	14	16
18	20	22	24
26	28	30	32
```

### enter 3

next, implement the functionality of number 3 - get the maximum value in the matrix.

member variables
-  `int cols`
-  `int rows`
-  `double ** grid = nullptr;`

**implementation found below**

```cpp
double matrix::getMax() {
    double max_element = 0;

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            if (grid[i][j] > max_element) {
                max_element = grid[i][j];
            }
        }
    }
    return (max_element);
}
```

## enter 4

implement the functionality of number 4 - find whether an element exists in the matrix.
see how other functions in the `matrix.cpp` and `matrix.h` are defined and code the `findElement(int no)` function.  use the `grid` matrix as the base matrix.  after implemented, the following should be printed in the terminal.

```bash
❯ ./prog

1. Print the Matrix
2. Perform an addition of the matrix with itself
3. Get the maximum value in the matrix
4. Find whether an element exists in the matrix
5. Change an existing element in the matrix
6. Perform matrix multiplication
7. Transpose of a matrix
Which operations would you like to perform on the matrix: 4

Enter the number to find: 6

Element found at 1, 1
```

**implementation of findElement**
```cpp
bool matrix::findElement(int no){
    bool found = false;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            if (no == grid[i][j]) {
                found = true;
                std::cout << "Element found at " << i << ", " << j << std::endl;
                return (found);
            } else {
                found = false;
            }
        }
    }

    if (found == false) {
        std::cout << "Elemenet was not found" << std::endl;
        return (found);
    }
}
```

## enter 5

change the elemnet in matrix, this will ask the user to provide a **vald** row and column number of an element in the matrix and replace it with the provided number.  see how other functions in the `matrix.cpp` and `matrix.h` are defined and code the `changeElement(int r, int c, int no)` function.  after implemented the following should be printed in the terminal.  

```cpp
❯ ./prog

1. Print the Matrix
2. Perform an addition of the matrix with itself
3. Get the maximum value in the matrix
4. Find whether an element exists in the matrix
5. Change an existing element in the matrix
6. Perform matrix multiplication
7. Transpose of a matrix
Which operations would you like to perform on the matrix: 5

Enter the row of the element to change: 1

Enter the column of the element to change: 0

Enter the value to replace: 99
1	2	3	4
99	6	7	8
9	10	11	12
13	14	15	16
```

## enter 6

perform matrix multiplication.  see how other functions in the `matrix.cpp` and `matrix.h` are defined and code the `multiplyMatrix()` function.  use the `grid` matrix as the base matrix and store the multiplication result in `grid_temp`.  print the contents of the `grid_temp` once done.  refer to `addMatrix()` function.  after implemented the following should be printed in the terminal.

```zsh
❯ ./prog

1. Print the Matrix
2. Perform an addition of the matrix with itself
3. Get the maximum value in the matrix
4. Find whether an element exists in the matrix
5. Change an existing element in the matrix
6. Perform matrix multiplication
7. Transpose of a matrix
Which operations would you like to perform on the matrix: 6
90	100	110	120
202	228	254	280
314	356	398	440
426	484	542	600
```
**implementation of multiplyMatrix**

```cpp
void matrix::multiplyMatrix(){
	//Hint: May want to store the new result in grid_temp and print that matrix

	for(int i = 0; i < rows; i++){
		for(int j = 0; j < cols; j++){
            for (int k = 0; k < cols; k++) {
                grid_temp[i][j] += grid[i][k]*grid[k][j];
            }
		}
	}

    for(int i = 0; i < rows; i++){
        for(int j = 0; j < cols; j++){
	        std::cout << grid_temp[i][j] << "\t";
        }
	    std::cout << "\n";
    }

	return;
}
```

## enter 7

perform transpose of the matrix.  see how other functions in the `matrix.cpp` and `matrix.h` are defined and code the `transposeMatrix()` function.  use the `grid` matrix as the base matrix and store the transpose result in `grid_temp`.  print the contents of the `grid_temp` once done.  refer to `addMatrix()` function.  after implemented the following should be printed in the terminal.

```zsh
❯ ./prog

1. Print the Matrix
2. Perform an addition of the matrix with itself
3. Get the maximum value in the matrix
4. Find whether an element exists in the matrix
5. Change an existing element in the matrix
6. Perform matrix multiplication
7. Transpose of a matrix
Which operations would you like to perform on the matrix: 7
1	5	9	13
2	6	10	14
3	7	11	15
4	8	12	16
```

```cpp
void matrix::transposeMatrix() {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            grid_temp[i][j] = grid[j][i];
        }
    }

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            std::cout << grid_temp[i][j] << "\t";
        }
        std::cout << std::endl;
    }

	return;
}
```









