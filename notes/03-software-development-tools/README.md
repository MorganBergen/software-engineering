# software development tools

**contents**

1.  [brief intro to git and github](#brief-intro-to-git-and-github)
2.  [snapshots, not differences](#snapshots-not-differences)
3.  [what is github?](#what-is-github)
4.  [the shell (operating system)](#the-shell-operating-system)
5.  [a simplified view of a shell](#a-simplified-view-of-a-shell)
6.  [default shell](#default-shell)
7.  [useful shell commands](#useful-shell-commands)
8.  [create an alias command every time?](#create-an-alias-command-every-time)
9.  [other useful shell commands](#other-useful-shell-commands)
10. [software engineering uses](#software-engineering-uses)
11. [a simple shell script](#a-simple-shell-script)
12. [summary](#summary)
13. [software development ides](#software-development-ides)
14. [features of an ide](#features-of-an-ide)
15. [examples of popular ide's](#examples-of-popular-ides)
16. [compiled programs vs interpreters](#compiled-programs-vs-interpreters)
17. [simplified view of compilation](#simplified-view-of-compilation)
18. [how to compile a program](#how-to-compile-a-program)
19. [compilation and interpreters: a mixture](#compilation-and-interpreters-a-mixture)
20. [summary](#summary-1)

##  brief intro to git and github

git is a version control system also known as a vcs, it allows you to maintain multiple versions of a code base.  specifically it helps you keep a history of previous changes, let's you see the changes you make to your code and easily revert them, all with just one developer or across multiple developers.  this allows developers to collabrate with other developers, by pushing and pulling code from repositories such as [github](https://github.com)

##  snapshots, not differences

git is a vcs that tracks changes to files, it does this by taking a snapshot of the files and storing them in a repository.  learn more here [snapshots, not differences](https://github.blog/2020-12-17-commits-are-snapshots-not-diffs/#commits-are-snapshots)

##  what is github?

-  gitHub.com is a website server that hosts git repositories
-  hosting repositories facilitates the sharing of codebases among teams by providing a GUI to easily clone repos to a local machine
-  When you push your code repositories on GitHub, you will be creating your own developer's portfolio
-  [lots of resources online](https://github.s3.amazonaws.com/media/progit.en.pdf)

##  the shell (operating system)

operating systems provide a command line interfacce which allows the user to enter commands, these commands are translated by the shell into something the kernal can comprehend and execute.  the shell is not part of the operating system kernel.  it is a command line interpreter also known as a cli.  in unix a user can pick their shell, such as `sh`, `bash`, `ksh`, `zsh`,

##  a simplified view of a shell

a shell is the primary interface beween a user sitting at the terminal and the operating system.

##  default shell

linux default shell, most linux systems default to the bash shell.  once you learn more about the shell options, you may want to change to another one. 

##  useful shell commands

- aliasing command, assigns a command, possibly with many options and flags, to another name
- usually it is a shorter name or one that is easier to remember

**setting up an alias**

- `csh`  `alias`, `alias-name`, `original-command`
- `bash` `alias-name=original-command`
-  example in csh: `alias ls='ls -l'`

##  create an alias command every time?

-  each shell program normally comes with a configuration (`login`) file
-  bash configuration file is `~/.bashrc`
-  what to include 
    - user defined aliases
    - user defined enviroment variables
    - can include conditional statements

##  other useful shell commands
    
-  directory:  `mkdir`, `rmdir`, `cd`, `ls`
-  files:  `cp`, `cat`, `mv`, `rm`, `touch`
-  search:  `grep`, `find`
-  editor:  `vi`, `vim`, `emacs`, `nano`
-  file/directory permission:  `chmod`, `chown`, `chgrp`
-  software development:  `make`, `tar`, `git`, `vim`

##  software engineering uses

-  writing shell scripts
-  create a text file
-  include in the first line `#!/bin/bash`
-  write scripts that do different tasks
    - a shell script

##  a simple shell script
##  summary
##  software development ides
##  features of an ide
##  examples of popular ide's
##  compiled programs vs interpreters
##  simplified view of compilation
##  how to compile a program
##  compilation and interpreters: a mixture
##  summary
