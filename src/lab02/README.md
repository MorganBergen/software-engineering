# lab02 shell programming, make

software engineering 

morgan bergen

feb 3 2023

sunday, feb 5 2023 at 11:59 pm

this lab has 20 points
your program has a working make file (make and make clean)
your program has the even in addition to odd number functionality

**contents**

1.  [objective](#objective)
2.  [shell commands tutorial](#shell-commands-tutorial)
3.  [make tutorial](#make-tutorial)
4.  [provided code](#provided-code)

## objective

get familiar with shell programming and commands.  learn the basics of what a makefile does, how to create one, and get a small look into c programming.

## shell commands tutorial

1.  `ls` - list directory contents
2.  `mkdir` - make directories
3.  `cd` - change directory
4.  `pwd` - print name of current/working directory
5.  `cd ..` - change directory to parent directory
5.  `cd ~` - change directory to home directory
6.  `touch` - create empty file
7.  `cp file1 file2` - copy file1 to file2
8.  `nvim file` - open file in neovim
9.  `cat file` - print file contents to terminal
10. `rm file` - remove file
11. `rm -r dir` - remove directory
12. `chmod` - change file permissions
13. `chmod u = rwx file` - give user read, write, and execute permissions
14. [`chmod`](https://www.computerhope.com/unix/uchmod.htm) - learn more about chmod
15. `ctrl + c` - kill process
16. `ctrl + k` - clear terminal
17. `man command` - get manual for command
18. `mv file1 newfilename` - rename file1 to newfilename
19. `mv file1 dir` - move file1 to dir

## make tutorial

unzip `provided_code.zip`

```
❯ tree
.
├── isEven.c
├── isEven.h
└── main.c

1 directory, 3 files
```

`> gcc main.c`

```
❯ tree
.
├── isEven.c
├── isEven.h
├── isOdd.c
├── isOdd.h
├── main.c
└── makefile

1 directory, 6 files
```
