CREATE DATABASE college;
create database if not exists college;

USE college;

create table if not exists student (
regNo int primary key,
name varchar(50)
);


insert into student
(regNo, name)
values
(1, "abhay"),
(2, "nirman"),
(3, "saurav"),
(4, "som"),
(5, "raushan"),
(6, "priyaj");

insert into student values (8, "tiwary");

update student
set name = "bhaloo"
where regNo = 1;

select*from student;



create database if not exists XYZ;

USE college;

SELECT DISTINCT city FROM student;

RENAME TABLE teacher TO guru;

create table employee(
id int unsigned primary key,
name varchar(50),
salary int unsigned
);

insert into employee
values
(1, "adam", 25000),
(2, "bob", 30000),
(3, "casey", 40000),
(4, "donald", 35000);

select*from employee;

-- xyz DATABASE
create table bank(
accNo int primary key,
acctype varchar(10),
OBal int,
OD date,
CurBal int
);

insert into bank
(accNo, acctype, OBal, OD, CurBal)
values
(1111, "savings", 1000, '1990-11-09', 6000), -- DATE in inverted commas.
(1113, "current", 7000, '1992-11-03', 4000),
(1112, "savings", 1000, '2003-12-12', 3000),
(1114, "current", 2000, '1992-10-07', 1000);

INSERT INTO bank VALUES (1115, "savings", 3500, "2001-01-01", 3000);

USE xyz;

select*from bank
ORDER BY CurBal;



CREATE TABLE payment(
customer_id int primary key,
customer varchar(50),
mode varchar(50),
city varchar(50)
);

insert into payment
(customer_id, customer, mode, city)
values
(101, "Olivia Barrett", "Netbanking", "Portland"),
(102, "Ethan Sinclair", "Credit Card", "Miami"),
(103, "Maya Hernandez", "Credit Card", "Seattle"),
(104, "Liam Donovan", "Netbanking", "Denver"),
(105, "Sophia Nguyen", "Credit Card", "New Orleans"),
(106, "Caleb Foster", "Debit Card", "Minneapolis"),
(107, "Ava Patel", "Debit Card", "Phoenix"),
(108, "Lucas Carter", "Netbanking", "Boston"),
(109, "Isabelle Martinez", "Netbanking", "Nashville"),
(110, "Jackson Brooks", "Credit Card", "Boston")
;

set sql_safe_updates = 0;

update payment
set customer = "Jony Roy", city = "Illinois", mode = "Netbanking"
where customer_id = 110;

insert into payment values (111, "John Krasinsky", "Cash", "Uganda");

alter table pay
rename to payment;

select * from payment;

CREATE TABLE dept(
id int primary key,
dept_name varchar(50)
);

drop table teacher;

CREATE TABLE teacher(
id int primary key,
name varchar(50),
dept_id int,
foreign key (dept_id) references dept(id) 
);

alter table teacher
drop age;

select * from teacher;


CREATE TABLE student(
studid INT PRIMARY KEY,
name VARCHAR(50)
);

INSERT INTO student
(studid, name)
VALUES
(101, "adam"),
(102, "bob"),
(103, "casey")
;

CREATE TABLE course(
studid INT PRIMARY KEY,
course VARCHAR(50)
);

INSERT INTO course
(studid, course)
VALUES
(102, "english"),
(105, "math"),
(103, "science"),
(107, "cse")
;

SELECT *
FROM student AS a
RIGHT JOIN course AS b
ON a.studid = b.studid
WHERE a.studid IS NULL
UNION
SELECT *
FROM student AS a
LEFT JOIN course AS b
ON a.studid = b.studid
WHERE b.studid IS NULL;

ALTER TABLE emp
MODIFY COLUMN managerid INT;

INSERT INTO emp
(empid, name, managerid)
VALUES
(101, "adam", 103),
(102, "bob", 104),
(103, "casey", NULL),
(104, "donald", 103);

SELECT a.name AS managername, b.name AS empname 
FROM emp AS a
JOIN emp AS b
ON a.empid = b.managerid
ORDER BY managername;

INSERT INTO student
(regno, name, marks, city)
VALUES
(1, "abhay", 43, "ranchi"),
(2, "nirman", 89, "dhanbad"),
(3, "saurav", 62, "ranchi"),
(4, "som", 20, "garhwa"),
(5, "raushan", 13, "palamu"),
(6, "priyaj", 98, "garhwa"),
(7, "tiwary", 70, "palamu"),
(8, "nidhi", 100, "dhanbad");

INSERT INTO student VALUE (8, "nidhi", 100);

ALTER TABLE student
ADD COLUMN city VARCHAR(20);

SELECT name
FROM student
WHERE name LIKE "%i%";

CREATE VIEW view1 AS
SELECT name, marks FROM student;

CREATE VIEW view2 AS
SELECT name, city FROM student;

SELECT * FROM view1;
SELECT * FROM view2;

SELECT NOW();

#THIS IS A SINGLE LINE COMMENT.
-- THIS IS ALSO A SINGLE LINE COMMENT.
/*THIS IS A
  MULTILINE 
  COMMENT.*/