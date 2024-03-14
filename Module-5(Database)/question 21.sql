use module5;

create table products01(
pro_id int not null,
pro_name varchar(25) not null,
pro_price double not null,
pro_com int 
);

insert into products01 values
(101,"Mother board",3200,15),
(102,"Key board",450,16),
(103,"Zip driver",250,15),
(104,"speaker",550,15),
(105,"Monitor",5000,15),
(106,"DVD driver",900,12),
(107,"CD drive",800,12),
(108,"printer",2600,13),
(109,"Refill cartridge",350,13),
(110,"Mouse",250,12);

-- 21. From the following table, write a SQL query to calculate the average
-- price for a manufacturer code of 16. Return avg
SELECT AVG(pro_price) AS "Average Price"
FROM products01
WHERE pro_com = 16;
