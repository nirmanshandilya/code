CREATE DATABASE if not exists university;
USE university;

SHOW TABLES;

 CREATE TABLE instructor (
    ID INT PRIMARY KEY,
    name VARCHAR(20),
    dept_name VARCHAR(20),
    salary INT
);

INSERT INTO instructor(ID,name,dept_name,salary)
VALUES
(10101,"Srinivasan","Comp.Sci",65000),
(12121,"Wu","Finance",90000),
(15151,"Mozart","Music",40000),
(22222,"Einstein"," Physics", 95000),
(32343,"ElSaid ","History ",60000),
(33456 ,"Gold" ,"Physics ",87000),
(45565 ,"Katz"," Comp.Sci." ,75000),
(58583 ,"Califieri ","History", 62000),
(76543 ,"Singh"," Finance" ,80000),
(76766 ,"Crick"," Biology", 72000),
(83821 ,"Brandt"," Comp.Sci." ,92000),
(98345 ,"Kim"," Elec.Eng.", 80000);

ALTER TABLE instruct
RENAME TO instructor;

SELECT name, salary
FROM instructor
WHERE salary IN (
	SELECT max(salary)
    FROM instructor);


UPDATE instructor
SET name = "Califieri"
WHERE name = "Califieri ";

SELECT ID, nameinstructorinstructor
FROM instructor
WHERE dept_name = "History";






CREATE TABLE course(
course_id varchar(10),
title varchar(50),
dept_name varchar(10),
credits numeric (2,0)
);

INSERT INTO course(course_id,title,dept_name,credits)
VALUES
("BIO-101", "Intro.toBiology","Biology ",4),
("BIO-301", "Genetics","Biology", 4),
("BIO-399", "ComputationalBiology","Biology ",30),
("CS-101", "Intro.toComputerScience ","Comp.Sci.", 4),
("CS-190", "GameDesign","Comp.Sci.", 4),
("CS-315", "Robotics","Comp.Sci.", 3),
("CS-319", "ImageProcessing","Comp.Sci.", 3),
("CS-347", "DatabaseSystemConcepts","Comp.Sci.", 3),
("EE-181", "Intro.toDigitalSystems ","Elec.Eng.", 3),
("FIN-201", "InvestmentBanking ","Finance",3),
("HIS-351", "WorldHistory ","History", 3),
("MU-199", "MusicVideoProduction","Music", 3),
("PHY-101", "PhysicalPrinciples","Physics ",4);

select*from course;




CREATE TABLE prereq(course_id varchar(10),
prereq_id varchar(10));

INSERT INTO prereq(course_id,prereq_id)
VALUES
("BIO-301","BIO-101"),
("BIO-399"," BIO-101"),
("CS-190","CS-101"),
("CS-315","CS-101"),
("CS-319","CS-101"),
("CS-347","CS-101"),
("EE-181","PHY-101");

select*from prereq;




CREATE TABLE section
 (course_id VARCHAR(10) ,
 sec_id int,
 semester varchar(20),
 YEAR int,
 building varchar(20),
 room_number int,
 time_slot_id varchar(5),
 PRIMARY KEY (course_id,sec_id,semester,year));
 
 INSERT INTO section
(course_id, sec_id, semester, YEAR, building, room_number, time_slot_id)
 VALUES
( "BIO-101 ",1 ,"Summer", 2017, "Painter", 514," B"),
( "BIO-301", 1 ,"Summer ",2018 ,"Painter",514 ,"A"),
("CS-101", 1 ,"Fall", 2017,"  Packard", 101," H"),
( "CS-101", 1," Spring", 2018 ," Packard", 101," F"),
( "CS-190", 1 ,"Spring", 2017 ," Taylor", 3128," E"),
( "CS-190", 2 ,"Spring ",2017 ," Taylor", 3128," A"),
( "CS-315 ",1 ,"Spring ",2018 ," Watson", 120," D"),
( "CS-319 ",1 ,"Spring ",2018 ," Watson", 100," B"),
( "CS-319 ",2 ,"Spring", 2018 ," Taylor", 3128," C"),
( "CS-347 ",1 ,"Fall", 2017 ," Taylor ",3128," A"),
( "EE-181 ",1 ,"Spring", 2017 ," Taylor", 3128," C"),
("FIN-201", 1 ,"Spring", 2018,"  Packard ",101," B"),
(" HIS-351", 1 ,"Spring", 2018 ," Painter ",514," C"),
("MU-199 ",1 ,"Spring", 2018 ," Packard ",101," D"),
("PHY-101", 1," Fall ",2017 ," Watson ",100," A");

 SELECT * FROM section;
 



 CREATE TABLE department(dept_name VARCHAR(20) PRIMARY KEY,
 building VARCHAR(20),budget int);
 
 INSERT INTO department(dept_name,building,budget)
 VALUES
 ("Biology","Watson",90000),
 ("Comp. Sci.","Taylor",100000),
 ("Elec. Eng.","Taylor",85000),
 ("Finance","Painter",120000),
 ("History","Painter",50000),
 ("Music","Packerd",80000),
 ("Physics","Watson",70000);
 
 ALTER TABLE department
 MODIFY COLUMN dept_name VARCHAR(20) NOT NULL;
 
select instructor.ID, department.dept_name
from instructor, department
where instructor.dept_name= department.dept_name and
department.budget > 95000;




 
 CREATE TABLE teaches (ID NUMERIC(6,0),
 course_id VARCHAR(20),
 sec_id NUMERIC(5),
 semester VARCHAR(10),
 year NUMERIC (10),
 PRIMARY KEY (ID,course_id,sec_id,semester,year));
 
INSERT INTO teaches 
(ID, course_id, sec_id, semester, year)
VALUES
(10101, "CS-101", 1, "Fall ",2017),
( 10101 ,"CS-315 ",1 ,"Spring ",2018),
( 10101 ,"CS-347", 1," Fall", 2017),
 (12121 ,"FIN-201" ,1, "Spring", 2018),
(15151 ,"MU-199", 1 ,"Spring" ,2018),
( 22222 ,"PHY-101" ,1 ,"Fall ",2017),
 (32343 ,"HIS-351", 1, "Spring" ,2018),
( 45565 ,"CS-101" ,1 ,"Spring ",2018),
 (45565 ,"CS-319", 1, "Spring ",2018),
 (76766 ,"BIO-101 ",1 ,"Summer", 2017),
( 76766 ,"BIO-301" ,1 ,"Summer" ,2018),
( 83821 ,"CS-190 ",1, "Spring ",2017),
 (83821 ,"CS-190", 2 ,"Spring", 2017),
( 83821 ,"CS-319 ",2," Spring" ,2018),
( 98345 ,"EE-181" ,1, "Spring ",2017);

SELECT * FROM teaches;

select * from teaches where semester="Spring";

select count(semester) from teaches group by semester;