 use module5;
 
 create table salespeople(
 salesman_id int not null,
 name varchar(25),
 city varchar(25),
 commission int
 );
 
 insert into salespeople values
 (5001,"James Hoog","New york",0.15),
 (5002,"Nail Knite","Paris",0.13),
 (5005,"Pit Alex","London",0.11),
 (5006,"Mc lyon","Paris",0.14),
 (5007,"Paul adam","Rome",0.13),
 (5003,"Lauson hen","san jose",0.12);
 
-- 18. Write a SQL statement that displays all the information about all
-- alespeople 
SELECT salesman_id, name, city, commission
FROM salespeople;
