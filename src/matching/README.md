# matching

**contents**

1.  [objective](#objective)
2.  [evaluation](#evaluation)
3.  [problem description](#problem-description)
4.  [sample data](#sample-data)
5.  [expected output](#expected-output)
6.  [input data in files](#input-data-in-files)

## objective

develop an algorithm for matching programmers and departments and implement the algorithm in c or c++.

## evaluation

this is an extra credit lab and is optional.  you may do this and its score can be added to your lab scores.  alternatively, you may use it to boost your quiz and exam grades.

## problem description

-  suppose there are 5 departments and 5 programmers, each identified with an integer number between 1 and 5.  you are to assign each programmer to a department according to the presferences given below.  each department has a preference for the programmers.  

-  for example, department #1 preferences are as follows:  1 5 3 2 4, meaning that it would like to have programmer #1 as its first choice and programmer #4 as its last option.  

-  when there is a conflict, i.e. two departments would like to have the same programmer as their first choice, then _consult_ with the programmer in question, (that is, check his / her preferences) to determine which department gets to hire him or her.  when the program terminates, all departments should have one programmer assigned to them.

## sample data

### programmers and their preferences

**programmer #1**:  3 1 2 5 4

**programmer #2**:  4 3 1 5 2

**programmer #3**:  2 5 4 1 3

**programmer #4**:  4 5 2 1 3

**programmer #5**:  3 2 1 5 4

### departments and their preferences

**department #1**:  1 5 3 2 4

**department #2**:  1 3 4 2 5

**department #3**:  3 4 2 5 1

**department #4**:  3 1 2 4 5

**department #5**:  4 3 1 2 5

## expected output

department #1 will get programmer #1 

department #2 will get programmer #3 

department #3 will get programmer #5 

department #4 will get programmer #2 

department #5 will get programmer #4

















