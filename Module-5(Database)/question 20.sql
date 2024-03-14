use module5;

create table products(
pro_id int not null,
pro_name varchar(25) not null,
pro_price double not null,
pro_com int 
);

insert into products values
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

-- Ques 20 From the following table, write a SQL query to select a range of
-- products whose price is in the range Rs.200 to Rs.600. Begin and end
-- values are included. Return pro_id, pro_name, pro_price , and pro_com
SELECT pro_id, pro_name, pro_price, pro_com
FROM products
WHERE pro_price BETWEEN 200.00 AND 600.00;
