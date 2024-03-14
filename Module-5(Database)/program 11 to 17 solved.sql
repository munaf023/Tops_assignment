 use module5;
 create table salesperson01(
 Sno int primary key,
 Sname varchar(20) not null,
 city varchar(10) not null,
 comm int
 );
 
 insert into salesperson01 values
 (1001,"Peel","London",0.12),
 (1002,"Serres","San Jose",0.13),
 (1004,"Motika","London",0.11),
 (1007,"Rafkin","Barcelona",0.15),
 (1003,"Peel","New york",0.1);
 
 create table customer(
 Cnm int primary key,
 cname varchar(20) not null,
 city varchar(10) not null,
 rating int not null,
 Sno int,
 foreign key customer(Sno) references salesperson01(Sno)
 );
 
 insert into customer values
 (201,"hoffman","London",100,1001),
 (202,"Giovanne","Roe",200,1003),
 (203,"Liu","san jose",300,1002),
 (204,"Grass","Barcelona",100,1002),
 (206,"Clemens","London",300,1007),
 (207,"Pereira","roe",100,1004);
 
 
 -- que 12.Retrieve the below data from above table 
 select *from salesperson01;
  select *from customer;
 
 -- Ques 14.Names and cities of all salespeople in London with commission above 0.12
 SELECT Sname, city
FROM salesperson01
WHERE city = 'London' AND comm > 0.12;

-- ques 15.All salespeople either in Barcelona or in London
SELECT Sname, city
FROM salesperson01
WHERE city IN ('Barcelona', 'London');

-- 16.All salespeople with commission between 0.10 and 0.12. (Boundary
-- valuesshould be excluded).
SELECT Sname, city
FROM salesperson01
WHERE comm > 0.10 AND comm < 0.12;

-- Ques 17.All customers excluding those with rating <= 100 unless they are located
-- in Rome
SELECT cname, city
FROM customer
WHERE rating > 100 OR city = 'Roe';



