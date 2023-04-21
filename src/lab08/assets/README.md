```sql
MariaDB [m358b583]> show tables
    -> ;
+--------------------+
| Tables_in_m358b583 |
+--------------------+
| Enrollment         |
| Faculty            |
| Offering           |
| Student            |
| course             |
+--------------------+
5 rows in set (0.001 sec)

MariaDB [m358b583]> select * from Enr
EnrGrade             Enrollment           Enrollment.EnrGrade  Enrollment.OfferNo   Enrollment.StdNo
MariaDB [m358b583]> select * from Enrollment;
+---------+-------------+----------+
| OfferNo | StdNo       | EnrGrade |
+---------+-------------+----------+
|    1111 | 901-23-4567 |     0.00 |
|    1234 | 123-45-6789 |     3.30 |
|    1234 | 234-56-7890 |     3.50 |
|    1234 | 345-67-8901 |     3.20 |
|    1234 | 456-78-9012 |     3.10 |
|    1234 | 567-89-0123 |     3.80 |
|    1234 | 678-90-1234 |     3.40 |
|    4321 | 123-45-6789 |     3.50 |
|    4321 | 124-56-7890 |     3.20 |
|    4321 | 789-01-2345 |     3.50 |
|    4321 | 876-54-3210 |     3.10 |
|    4321 | 890-12-3456 |     3.40 |
|    4321 | 901-23-4567 |     3.10 |
|    5555 | 123-45-6789 |     3.20 |
|    5555 | 124-56-7890 |     2.70 |
|    5678 | 123-45-6789 |     3.20 |
|    5678 | 234-56-7890 |     2.80 |
|    5678 | 345-67-8901 |     3.30 |
|    5678 | 456-78-9012 |     3.40 |
|    5678 | 567-89-0123 |     2.60 |
|    5679 | 123-45-6789 |     2.00 |
|    5679 | 124-56-7890 |     3.70 |
|    5679 | 678-90-1234 |     3.30 |
|    5679 | 789-01-2345 |     3.80 |
|    5679 | 890-12-3456 |     2.90 |
|    5679 | 901-23-4567 |     3.10 |
|    6666 | 234-56-7890 |     3.10 |
|    6666 | 567-89-0123 |     3.60 |
|    7777 | 876-54-3210 |     3.40 |
|    7777 | 890-12-3456 |     3.70 |
|    7777 | 901-23-4567 |     3.40 |
|    9876 | 124-56-7890 |     3.50 |
|    9876 | 234-56-7890 |     3.20 |
|    9876 | 345-67-8901 |     3.20 |
|    9876 | 456-78-9012 |     3.40 |
|    9876 | 567-89-0123 |     2.60 |
|    9876 | 678-90-1234 |     3.30 |
|    9876 | 901-23-4567 |     4.00 |
+---------+-------------+----------+
38 rows in set (0.001 sec)

MariaDB [m358b583]> select * from Faculty;
+-------------+--------------+-------------+----------+----------+---------+---------+-----------+---------------+-------------+------------+
| FacNo       | FacFirstName | FacLastName | FacCity  | FacState | FacDept | FacRank | FacSalary | FacSupervisor | FacHireDate | FacZipCode |
+-------------+--------------+-------------+----------+----------+---------+---------+-----------+---------------+-------------+------------+
| 098-76-5432 | LEONARD      | VINCE       | SEATTLE  | WA       | MS      | ASST    |  35000.00 | 654-32-1098   | 2007-04-10  | 98111-9921 |
| 543-21-0987 | VICTORIA     | EMMANUEL    | BOTHELL  | WA       | MS      | PROF    | 120000.00 | NULL          | 2008-04-15  | 98011-2242 |
| 654-32-1098 | LEONARD      | FIBON       | SEATTLE  | WA       | MS      | ASSC    |  70000.00 | 543-21-0987   | 2006-05-01  | 98121-0094 |
| 765-43-2109 | NICKI        | MACON       | BELLEVUE | WA       | FIN     | PROF    |  65000.00 | NULL          | 2009-04-11  | 98015-9945 |
| 876-54-3210 | CRISTOPHER   | COLAN       | SEATTLE  | WA       | MS      | ASST    |  40000.00 | 654-32-1098   | 2011-03-01  | 98114-1332 |
| 987-65-4321 | JULIA        | MILLS       | SEATTLE  | WA       | FIN     | ASSC    |  75000.00 | 765-43-2109   | 2012-03-15  | 98114-9954 |
+-------------+--------------+-------------+----------+----------+---------+---------+-----------+---------------+-------------+------------+
6 rows in set (0.001 sec)

MariaDB [m358b583]> select * from Offering;
+---------+----------+---------+---------+-------------+----------+-------------+---------+
| OfferNo | CourseNo | OffTerm | OffYear | OffLocation | OffTime  | FacNo       | OffDays |
+---------+----------+---------+---------+-------------+----------+-------------+---------+
|    1111 | IS320    | SUMMER  |    2020 | BLM302      | 10:30:00 | NULL        | MW      |
|    1234 | IS320    | FALL    |    2019 | BLM302      | 10:30:00 | 098-76-5432 | MW      |
|    2222 | IS460    | SUMMER  |    2019 | BLM412      | 13:30:00 | NULL        | TTH     |
|    3333 | IS320    | SPRING  |    2020 | BLM214      | 08:30:00 | 098-76-5432 | MW      |
|    4321 | IS320    | FALL    |    2019 | BLM214      | 15:30:00 | 098-76-5432 | TTH     |
|    4444 | IS320    | WINTER  |    2020 | BLM302      | 15:30:00 | 543-21-0987 | TTH     |
|    5555 | FIN300   | WINTER  |    2020 | BLM207      | 08:30:00 | 765-43-2109 | MW      |
|    5678 | IS480    | WINTER  |    2020 | BLM302      | 10:30:00 | 987-65-4321 | MW      |
|    5679 | IS480    | SPRING  |    2020 | BLM412      | 15:30:00 | 876-54-3210 | TTH     |
|    6666 | FIN450   | WINTER  |    2020 | BLM212      | 10:30:00 | 987-65-4321 | TTH     |
|    7777 | FIN480   | SPRING  |    2020 | BLM305      | 13:30:00 | 765-43-2109 | MW      |
|    8888 | IS320    | SUMMER  |    2020 | BLM405      | 13:30:00 | 654-32-1098 | MW      |
|    9876 | IS460    | SPRING  |    2020 | BLM307      | 13:30:00 | 654-32-1098 | TTH     |
+---------+----------+---------+---------+-------------+----------+-------------+---------+
13 rows in set (0.001 sec)

MariaDB [m358b583]> select * from Student;
+-------------+--------------+-------------+---------+----------+------------+----------+----------+--------+
| StdNo       | StdFirstName | StdLastName | StdCity | StdState | StdZip     | StdMajor | StdClass | StdGPA |
+-------------+--------------+-------------+---------+----------+------------+----------+----------+--------+
| 123-45-6789 | HOMER        | WELLS       | SEATTLE | WA       | 98121-1111 | IS       | FR       |   3.00 |
| 124-56-7890 | BOB          | NORBERT     | BOTHELL | WA       | 98011-2121 | FIN      | JR       |   2.70 |
| 234-56-7890 | CANDY        | KENDALL     | TACOMA  | WA       | 99042-3321 | ACCT     | JR       |   3.50 |
| 345-67-8901 | WALLY        | KENDALL     | SEATTLE | WA       | 98123-1141 | IS       | SR       |   2.80 |
| 456-78-9012 | JOE          | ESTRADA     | SEATTLE | WA       | 98121-2333 | FIN      | SR       |   3.20 |
| 567-89-0123 | MARIAH       | DODGE       | SEATTLE | WA       | 98114-0021 | IS       | JR       |   3.60 |
| 678-90-1234 | TESS         | DODGE       | REDMOND | WA       | 98116-2344 | ACCT     | SO       |   3.30 |
| 789-01-2345 | ROBERTO      | MORALES     | SEATTLE | WA       | 98121-2212 | FIN      | JR       |   2.50 |
| 876-54-3210 | CRISTOPHER   | COLAN       | SEATTLE | WA       | 98114-1332 | IS       | SR       |   4.00 |
| 890-12-3456 | LUKE         | BRAZZI      | SEATTLE | WA       | 98116-0021 | IS       | SR       |   2.20 |
| 901-23-4567 | WILLIAM      | PILGRIM     | BOTHELL | WA       | 98113-1885 | IS       | SO       |   3.80 |
+-------------+--------------+-------------+---------+----------+------------+----------+----------+--------+
11 rows in set (0.001 sec)

MariaDB [m358b583]> select * from course;
+----------+--------------------------------------+----------+
| CourseNo | CrsDesc                              | CrsUnits |
+----------+--------------------------------------+----------+
| FIN300   | FUNDAMENTALS OF FINANCE              |        4 |
| FIN450   | PRINCIPLES OF INVESTMENTS            |        4 |
| FIN480   | CORPORATE FINANCE                    |        4 |
| IS320    | FUNDAMENTALS OF BUSINESS PROGRAMMING |        4 |
| IS460    | SYSTEMS ANALYSIS                     |        4 |
| IS470    | BUSINESS DATA COMMUNICATIONS         |        4 |
| IS480    | FUNDAMENTALS OF DATABASE MANAGEMENT  |        4 |
+----------+--------------------------------------+----------+
7 rows in set (0.001 sec)

MariaDB [m358b583]> SELECT StdFirstName, StdLastName, StdCity, StdGPA
    -> FROM Student
    -> WHERE StdGPA > 3.7;
+--------------+-------------+---------+--------+
| StdFirstName | StdLastName | StdCity | StdGPA |
+--------------+-------------+---------+--------+
| CRISTOPHER   | COLAN       | SEATTLE |   4.00 |
| WILLIAM      | PILGRIM     | BOTHELL |   3.80 |
+--------------+-------------+---------+--------+
2 rows in set (0.001 sec)

MariaDB [m358b583]> SELECT StdFirstName, StdLastName, StdGPA
    -> FROM Student
    -> ORDER BY StdGPA DESC;
+--------------+-------------+--------+
| StdFirstName | StdLastName | StdGPA |
+--------------+-------------+--------+
| CRISTOPHER   | COLAN       |   4.00 |
| WILLIAM      | PILGRIM     |   3.80 |
| MARIAH       | DODGE       |   3.60 |
| CANDY        | KENDALL     |   3.50 |
| TESS         | DODGE       |   3.30 |
| JOE          | ESTRADA     |   3.20 |
| HOMER        | WELLS       |   3.00 |
| WALLY        | KENDALL     |   2.80 |
| BOB          | NORBERT     |   2.70 |
| ROBERTO      | MORALES     |   2.50 |
| LUKE         | BRAZZI      |   2.20 |
+--------------+-------------+--------+
11 rows in set (0.001 sec)

MariaDB [m358b583]> SELECT *
    -> FROM course
    -> WHERE CourseNo LIKE 'IS4%';
+----------+-------------------------------------+----------+
| CourseNo | CrsDesc                             | CrsUnits |
+----------+-------------------------------------+----------+
| IS460    | SYSTEMS ANALYSIS                    |        4 |
| IS470    | BUSINESS DATA COMMUNICATIONS        |        4 |
| IS480    | FUNDAMENTALS OF DATABASE MANAGEMENT |        4 |
+----------+-------------------------------------+----------+
3 rows in set (0.001 sec)

MariaDB [m358b583]> SELECT OfferNo, CourseNo
    -> FROM Offering
    -> WHERE FacNo IS NULL AND OffTerm = 'SUMMER';
+---------+----------+
| OfferNo | CourseNo |
+---------+----------+
|    1111 | IS320    |
|    2222 | IS460    |
+---------+----------+
2 rows in set (0.001 sec)

MariaDB [m358b583]> SELECT Offering.OfferNo, Offering.CourseNo, Faculty.FacFirstName, Faculty.FacLastName
    -> FROM Offering
    -> JOIN Faculty ON Offering.FacNo = Faculty.FacNo
    -> WHERE Offering.OffTerm = 'SPRING' AND Faculty.FacRank = 'ASST';
+---------+----------+--------------+-------------+
| OfferNo | CourseNo | FacFirstName | FacLastName |
+---------+----------+--------------+-------------+
|    3333 | IS320    | LEONARD      | VINCE       |
|    5679 | IS480    | CRISTOPHER   | COLAN       |
+---------+----------+--------------+-------------+
2 rows in set (0.001 sec)

MariaDB [m358b583]> SELECT DISTINCT Faculty.FacNo, Offering.CourseNo, Faculty.FacFirstName, Faculty.FacLastName
    -> FROM Offering
    -> JOIN Faculty ON Offering.FacNo = Faculty.FacNo
    -> WHERE Offering.OffTerm = 'SPRING' AND Faculty.FacRank = 'ASST';
+-------------+----------+--------------+-------------+
| FacNo       | CourseNo | FacFirstName | FacLastName |
+-------------+----------+--------------+-------------+
| 098-76-5432 | IS320    | LEONARD      | VINCE       |
| 876-54-3210 | IS480    | CRISTOPHER   | COLAN       |
+-------------+----------+--------------+-------------+
2 rows in set (0.001 sec)

MariaDB [m358b583]> SELECT DISTINCT FacNo
    -> FROM Offering;
+-------------+
| FacNo       |
+-------------+
| NULL        |
| 098-76-5432 |
| 543-21-0987 |
| 765-43-2109 |
| 987-65-4321 |
| 876-54-3210 |
| 654-32-1098 |
+-------------+
7 rows in set (0.001 sec)

MariaDB [m358b583]> SELECT StdFirstName AS Name
    -> FROM Student
    -> WHERE StdCity = 'BOTHELL'
    -> UNION
    -> SELECT FacFirstName AS Name
    -> FROM Faculty
    -> WHERE FacCity = 'BELLEVUE';
+---------+
| Name    |
+---------+
| BOB     |
| WILLIAM |
| NICKI   |
+---------+
3 rows in set (0.001 sec)

MariaDB [m358b583]>  student homer wells has changed his major accounting `ACCT`.  update the student table to reflect this change.      show the result using `Select * From Student`
    -> ;
ERROR 1064 (42000): You have an error in your SQL syntax; check the manual that corresponds to your MariaDB server version for the right syntax to use near 'student homer wells has changed his major accounting `ACCT`.  update the stud...' at line 1
MariaDB [m358b583]> INSERT INTO Student (StdNo, StdFirstName, StdLastName, StdCity, StdState, StdZip, StdMajor, StdClass, StdGPA)
    -> VALUES ('999-99-9999', 'John', 'Doe', 'Lawrence', 'KS', '66045', 'FIN', 'FR', NULL);
Query OK, 1 row affected (0.001 sec)

MariaDB [m358b583]> show * from Student;
ERROR 1064 (42000): You have an error in your SQL syntax; check the manual that corresponds to your MariaDB server version for the right syntax to use near '* from Student' at line 1
MariaDB [m358b583]> show * from Students;
ERROR 1064 (42000): You have an error in your SQL syntax; check the manual that corresponds to your MariaDB server version for the right syntax to use near '* from Students' at line 1
MariaDB [m358b583]> select * from Students;
ERROR 1146 (42S02): Table 'm358b583.Students' doesn't exist
MariaDB [m358b583]> select * from Student;
+-------------+--------------+-------------+----------+----------+------------+----------+----------+--------+
| StdNo       | StdFirstName | StdLastName | StdCity  | StdState | StdZip     | StdMajor | StdClass | StdGPA |
+-------------+--------------+-------------+----------+----------+------------+----------+----------+--------+
| 123-45-6789 | HOMER        | WELLS       | SEATTLE  | WA       | 98121-1111 | IS       | FR       |   3.00 |
| 124-56-7890 | BOB          | NORBERT     | BOTHELL  | WA       | 98011-2121 | FIN      | JR       |   2.70 |
| 234-56-7890 | CANDY        | KENDALL     | TACOMA   | WA       | 99042-3321 | ACCT     | JR       |   3.50 |
| 345-67-8901 | WALLY        | KENDALL     | SEATTLE  | WA       | 98123-1141 | IS       | SR       |   2.80 |
| 456-78-9012 | JOE          | ESTRADA     | SEATTLE  | WA       | 98121-2333 | FIN      | SR       |   3.20 |
| 567-89-0123 | MARIAH       | DODGE       | SEATTLE  | WA       | 98114-0021 | IS       | JR       |   3.60 |
| 678-90-1234 | TESS         | DODGE       | REDMOND  | WA       | 98116-2344 | ACCT     | SO       |   3.30 |
| 789-01-2345 | ROBERTO      | MORALES     | SEATTLE  | WA       | 98121-2212 | FIN      | JR       |   2.50 |
| 876-54-3210 | CRISTOPHER   | COLAN       | SEATTLE  | WA       | 98114-1332 | IS       | SR       |   4.00 |
| 890-12-3456 | LUKE         | BRAZZI      | SEATTLE  | WA       | 98116-0021 | IS       | SR       |   2.20 |
| 901-23-4567 | WILLIAM      | PILGRIM     | BOTHELL  | WA       | 98113-1885 | IS       | SO       |   3.80 |
| 999-99-9999 | John         | Doe         | Lawrence | KS       | 66045      | FIN      | FR       |   NULL |
+-------------+--------------+-------------+----------+----------+------------+----------+----------+--------+
12 rows in set (0.001 sec)

MariaDB [m358b583]> UPDATE Student
    -> SET StdMajor = 'ACCT'
    -> WHERE StdFirstName = 'HOMER' AND StdLastName = 'WELLS';
Query OK, 1 row affected (0.001 sec)
Rows matched: 1  Changed: 1  Warnings: 0

MariaDB [m358b583]>
MariaDB [m358b583]> SELECT * FROM Student;
+-------------+--------------+-------------+----------+----------+------------+----------+----------+--------+
| StdNo       | StdFirstName | StdLastName | StdCity  | StdState | StdZip     | StdMajor | StdClass | StdGPA |
+-------------+--------------+-------------+----------+----------+------------+----------+----------+--------+
| 123-45-6789 | HOMER        | WELLS       | SEATTLE  | WA       | 98121-1111 | ACCT     | FR       |   3.00 |
| 124-56-7890 | BOB          | NORBERT     | BOTHELL  | WA       | 98011-2121 | FIN      | JR       |   2.70 |
| 234-56-7890 | CANDY        | KENDALL     | TACOMA   | WA       | 99042-3321 | ACCT     | JR       |   3.50 |
| 345-67-8901 | WALLY        | KENDALL     | SEATTLE  | WA       | 98123-1141 | IS       | SR       |   2.80 |
| 456-78-9012 | JOE          | ESTRADA     | SEATTLE  | WA       | 98121-2333 | FIN      | SR       |   3.20 |
| 567-89-0123 | MARIAH       | DODGE       | SEATTLE  | WA       | 98114-0021 | IS       | JR       |   3.60 |
| 678-90-1234 | TESS         | DODGE       | REDMOND  | WA       | 98116-2344 | ACCT     | SO       |   3.30 |
| 789-01-2345 | ROBERTO      | MORALES     | SEATTLE  | WA       | 98121-2212 | FIN      | JR       |   2.50 |
| 876-54-3210 | CRISTOPHER   | COLAN       | SEATTLE  | WA       | 98114-1332 | IS       | SR       |   4.00 |
| 890-12-3456 | LUKE         | BRAZZI      | SEATTLE  | WA       | 98116-0021 | IS       | SR       |   2.20 |
| 901-23-4567 | WILLIAM      | PILGRIM     | BOTHELL  | WA       | 98113-1885 | IS       | SO       |   3.80 |
| 999-99-9999 | John         | Doe         | Lawrence | KS       | 66045      | FIN      | FR       |   NULL |
+-------------+--------------+-------------+----------+----------+------------+----------+----------+--------+
12 rows in set (0.000 sec)

MariaDB [m358b583]> SELECT *
    -> FROM Student
    -> WHERE StdNo IN (SELECT FacNo FROM Faculty);
+-------------+--------------+-------------+---------+----------+------------+----------+----------+--------+
| StdNo       | StdFirstName | StdLastName | StdCity | StdState | StdZip     | StdMajor | StdClass | StdGPA |
+-------------+--------------+-------------+---------+----------+------------+----------+----------+--------+
| 876-54-3210 | CRISTOPHER   | COLAN       | SEATTLE | WA       | 98114-1332 | IS       | SR       |   4.00 |
+-------------+--------------+-------------+---------+----------+------------+----------+----------+--------+
1 row in set (0.001 sec)

MariaDB [m358b583]>
```
