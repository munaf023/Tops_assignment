use module5;

-- Question 22 From the following table, write a SQL query to display the pro_name
-- as 'Item Name' and pro_priceas 'Price in Rs.'
SELECT pro_name AS "Item Name", pro_price AS "Price in Rs."
FROM products01;

-- Question 23 From the following table, write a SQL query to find the items whose
-- prices are higher than or equal to $250. Order the result by product price in
-- descending, then product name in ascending. Return pro_name and
-- pro_price.

SELECT pro_name, pro_price
FROM products01
WHERE pro_price >= 250
ORDER BY pro_price DESC, pro_name;

-- question 24. From the following table, write a SQL query to calculate average price of 
-- the items for each company. Return average price and companycode

 SELECT AVG(pro_price) AS "Average Price", pro_com AS "Company Code"
FROM products01
GROUP BY pro_com;
