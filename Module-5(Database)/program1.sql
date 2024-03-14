create database student;

use student;
create table stud_1(
roll_no int primary key,
name varchar(50) not null,
branch varchar(50) not null
);

create table exam(
s_code varchar(50) not null,
marks int not null,
p_code varchar(50) not null,
roll_no int,
foreign key exam(roll_no) references stud_1(roll_no)
);

describe stud_1;
describe exam;

insert into stud_1 values
(101,"jay","Computer science"),
(102,"Suhani","Electronic and Com"),
(103,"Kriti","Electronic and Com");

insert into exam values
("Cs11",50,"CS",101),
("CS12",60,"CS",101),
("EC101",66,"EC",102),
("EC102",70,"EC",102),
("EC101",45,"EC",103),
("EC102",50,"EC",103);

select *from stud_1;
select *from exam;