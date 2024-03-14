create database module5;

use module5;

create table employpee(
emp_id int primary key,
f_name varchar(50) not null,
l_name varchar(50) not null,
sal float not null,
joining_date double not null,
department varchar(10) not null
);

create table incentive(
incentive_date varchar(50) not null,
incentive_amt varchar(50) not null,
emp_id int,
foreign key incentive(emp_id) references employpee(emp_id)
);

insert into employpee values
(1,"john","Abraham",100000,01-01-13,"banking"),
(2,"micheal","clarke",80000,02-03-14,"Insurance"),
(3,"Roy","thomas",700000,01-03-13,"banking"),
(4,"Tom","jose",600000,01-03-15,"Insurance"),
(5,"Jerry","Pinto",500000,03-04-16,"Insurance"),
(6,"philip","Mathew",650000,12-05-15,"Services"),
(7,"TestName1",123,60000,01-01-15,"Services"),
(8,"Testname2","Lname",600000,01-05-14,"Insurance");

select *from incentive;

insert into incentive values
(01-02-13,5000,1),
(01-02-13,3000,2),
(01-02-13,4000,3),
(01-01-13,4500,1),
(01-01-13,3500,2);

-- question-3 Get First_Name from employee table using Tom name “Employee Name”
select *from employpee
where f_name = "Tom";

 -- Question-4 Get FIRST_NAME, Joining Date, and Salary from employee table.
select f_name,joining_date,sal from employpee;

-- Question-5 Get all employee details from the employee table order by First_Name
-- Ascending and Salary descending?
select *from employpee
order by f_name asc;

select *from employpee
order by sal desc;
 
  -- Question- 6 Get employee details from employee table whose first name contains ‘J’
select *from employpee
where f_name like "J%"; 

-- Question 7  Get department wise maximum salary from employee table order by
select *from employpee
group by sal
having max(sal);

-- question 8 salaryascending?
select *from employpee
order by sal asc;

 -- Question - 9 Select first_name, incentive amount from employee and incentives table
-- forthose employees who have incentives and incentive amount greater than
-- 3000
select f_name from employpee;

select incentive_amt from incentive;

-- question - 10 Create After Insert trigger on Employee table which insert records in
-- viewtable



