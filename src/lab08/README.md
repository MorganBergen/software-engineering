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
      PRIMARY KEY 

```


###  contents

1.  [objective](#objective)
2.  [due date](#due-date)
3.  [deliverable](#deliverable)

##  objective

learn the basics of building and querying a database

##  due date

sunday, april 16, 2023

##  deliverable

the sql queries and their output (one per page); submit the pdf.


