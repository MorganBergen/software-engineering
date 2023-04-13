#  writing the programs

###  contents

##  coding conventions are essential

-  standards or coding conventions
    -  for you, for testers, for maintainers
    -  documentation
    -  matching design with implementation
    -  low coupling, high cohesion, well-defined interfaces


##  write self describing programs (modules)

-  descriptive identifiers (variables, functions, constants,...)
-  prelude comments
    -  precisely but concisely describe what a unit does
    -  include pre and post conditions as comments or assertions
    -  clearly describe the expected parameters
-  appropriate and consistent identation, line alignment, and use of blank lines to show the relationship between blocks of code
    -  control structures (`-if-then-else`, loops) are especially important

##  algorithms

-  balance:  efficiency vs maintainability
-  efficiency may have hidden costs
    -  cost to write the code faster
    -  cost to test the code
    -  cost to understand the code
    -  cost to modify the code

##  data structures

-  carefully design data structures
-  all programs manipulate data
    -  read, process, store, display
    -  data can be numbers, characters, images, audio

-  data structures choices influence a program at every level
    -  improve ability to solve problems abstractly
    -  data structures are the building blocks
    -  execution speed
    -  memory requirements
    -  maintenance (debugging, extending, etc.)
    -  improve your ability to analyze your algorithms

-  goal:  simple, elegant cod
    -  guage and improve time complexity

##  documentation 

-  internal
    -  programmers put comments in their program's code to help themselves and others understand the code later
    -  document whys

-  external
    -  describe the program (module), data
    -  catalog keywords for future reuse

-  documentation should constinue after the code has been completed

#  compiled programs vs interpreters
