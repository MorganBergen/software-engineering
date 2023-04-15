#  databases sql programming

###  contents

1.  [mysql](#mysql)
2.  [create a table](#create-a-table)
3.  [insert](#insert)
4.  [update and delete](#update-and-delete)
5.  [basic queries sfw statement](basic-queries-sfw-statement)
6.  [like operator](#like-operator)
7.  [ordering the output](#ordering-the-output)
8.  [removing duplicates](#removing-duplicates)
9.  [referencing attributes](#referencing-attributes)
10. [as operator](#as-operator)
11. [union](#union)
12. [eecs mysql server](#eecs-mysql-server)
13. [lab-08](#lab-08)
14. [objective](#objective)
15. [due date](#due-date)
16. [deliverable](#deliverable)

##  mysql

-  mysql is a database languge that allows you to create and populate tables that you can then query in strategic ways
-  basic hieracy of a database
    -  database
    -  table
-  note that queries end in a semicolon `;`


##  create a table

-  basic data types
    -  numeric `INTEGER`, `INT`, `REAL`, `FLOAT`
    -  character string of a fixed length `CHAR(n)`
    -  varing length `VARCHAR(n)`
    -  boolean `BOOLEAN`
    -  date `DATE`

```sql
CREATE TABLE PROJECT
    ( Pname     VARCHAR(15)     NOT NULL,
      Pnumber   INT             NOT NULL,
      Plocation VARCHAR(15)     NOT NULL,
      Dnum      INT             NOT NULL,
      PRIMARY KEY (Pnumber),
      UNIQUE (Pname),
      FOREIGN KEY (Dnum) REFERENCES DEPARTMENT(Dnumber)
    );
```
##  insert

-  `INSERT` inserts a tuple (row) in a relation (table)
-  attribute values should be listed in the same order as were specified in th e`CREATE TABLE` command
-  for example

```sql
INSERT INTO     EMPLOYEE
VALUES          ('Richard', 'K', 'Marini', '653298653', '1962-12-30',
                 '98 Oak Forest, Kathy, TX', 'M', 37000, '653298653', 4);
```

##  update and delete

**update**  used to modify attribute values of one or more selected tuples

```sql
UPDATE  PROJECT
SET     PLOCATION = 'Bellaire', DNUM = 5
WHERE   PNUMBER = 10
```

**delete** removes tuples from a relation

```sql
DELETE FROM     EMPLOYEE
WHERE           Lname = 'Brown';
```

##  basic queries - sfw statement

-  `SELECT <list of column expressions>`
-  `FROM <list of tables and join operations>`
-  `WHERE <row conditions connected by logical operators>`
-  `ORDER BY <list of sorting specifications>`
-  example - name of students under 25
    -  `SELECT name FROM Student WHERE age < 25`

##  `LIKE` operator

-  `LIKE` operator with meta characters
-  `%` wildcard matches 0 or more characters
-  `_` matches any single character
-  example - embedded match
    -  `CrsDesc LIKE '%DATA%'`

##  ordering the output

-  records are not ordered by default
-  note that `ASC` = ascending, `DESC` = descending
-  basic syntax
```
SELECTED
FROM
WHERE
ORDER BY output_column [ASCI DESC], ...;
```

##  removing duplicates

-  to remove duplicates from the query answers use, `SELECT DISTINCT`
-  example
-  `SELECT DISTINCT age FROM Student`

##  referencing attributes

-  in general, attributes are references as R.A. where R is a tuple variable and A is an attributes
-  where there is no ambiguity, the tuple variable may be deleted

```sql
SELECT S.lastname F.lastname gpa
FROM Students S, Faculty F
WHERE S.lastname = 'Idena';
```

##  AS operator 

-  change comumn name / headers
    -  `SELECT sid AS ID FROM Student`
-  `AS` is optional

##  union

-  strong requirement
    -  same number of columns
    -  each corresponding column is compatible
    -  positional correspondence
-  apply to similar tables by removing columns first
-  `<subquery> UNION <subquery>`

##  eecs mysql server

-  as an eecs student, you are granted access to an eecs mysql server
-  you can view your username and password under the assignments section in the sql programming credentials
-  to access the server, input the following

`mysql -h mysql.eecs.ku.edu -u username -p`

#  lab 08

-  use the university database provided for this lab
-  `ER` diagram
-  the structure of the database is as follows

<img src="./assets/struct.png" width="500px">

##  objective

learn the basics of building and querying a database

##  due date

sunday, april 16, 2023

##  deliverable

-  form each query and generate its output and place on the page
-  do the same for all queries
-  combine all queries into a pdf
-  submit the file to canvas
-  read and understand the grading rubric
-  the sql queries and their output (one per page); submit the pdf.

##  instructions

1.  access to the eecs database

`mysql -h mysql.eecs.ku.edu -u m358b583 -p`

`USE m358b583`

```
m358b583@cycle3:~$ mysql -h mysql.eecs.ku.edu -u m358b583 -p
Enter password: Ahr3oamu
Welcome to the MariaDB monitor.  Commands end with ; or \g.
Your MariaDB connection id is 406611
Server version: 10.6.12-MariaDB-0ubuntu0.22.04.1 Ubuntu 22.04

Copyright (c) 2000, 2018, Oracle, MariaDB Corporation Ab and others.

Type 'help;' or '\h' for help. Type '\c' to clear the current input statement.

MariaDB [(none)]> \h

General information about MariaDB can be found at
http://mariadb.org

List of all client commands:
Note that all text commands must be first on line and end with ';'
?         (\?) Synonym for `help'.
clear     (\c) Clear the current input statement.
connect   (\r) Reconnect to the server. Optional arguments are db and host.
delimiter (\d) Set statement delimiter.
edit      (\e) Edit command with $EDITOR.
ego       (\G) Send command to MariaDB server, display result vertically.
exit      (\q) Exit mysql. Same as quit.
go        (\g) Send command to MariaDB server.
help      (\h) Display this help.
nopager   (\n) Disable pager, print to stdout.
notee     (\t) Don't write into outfile.
pager     (\P) Set PAGER [to_pager]. Print the query results via PAGER.
print     (\p) Print current command.
prompt    (\R) Change your mysql prompt.
quit      (\q) Quit mysql.
rehash    (\#) Rebuild completion hash.
source    (\.) Execute an SQL script file. Takes a file name as an argument.
status    (\s) Get status information from the server.
system    (\!) Execute a system shell command.
tee       (\T) Set outfile [to_outfile]. Append everything into given outfile.
use       (\u) Use another database. Takes database name as argument.
charset   (\C) Switch to another charset. Might be needed for processing binlog with multi-byte charsets.
warnings  (\W) Show warnings after every statement.
nowarning (\w) Don't show warnings after every statement.

For server side help, type 'help contents'

MariaDB [(none)]> use m358b583
Database changed
MariaDB [m358b583]>

```












