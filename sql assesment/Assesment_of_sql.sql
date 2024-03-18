-- assesment task
use module5;

-- Bank table
CREATE TABLE Bank (
    branch_id INT PRIMARY KEY,
    branch_name VARCHAR(255),
    branch_city VARCHAR(255)
);

-- Loan table
CREATE TABLE Loan (
    loan_no INT PRIMARY KEY,
    branch_id INT,
    account_holder_id INT,
    loan_amount DECIMAL(10, 2),
    loan_type VARCHAR(255),
    FOREIGN KEY (branch_id) REFERENCES Bank(branch_id)
);

-- AccountHolder table
CREATE TABLE AccountHolder (
    account_holder_id INT PRIMARY KEY,
    account_no INT,
    account_holder_name VARCHAR(255),
    city VARCHAR(255),
    contact VARCHAR(20),
    date_created DATE,
    account_status VARCHAR(20),
    account_type VARCHAR(20),
    balance DECIMAL(10, 2)
);

INSERT INTO Bank (branch_id, branch_name, branch_city)
VALUES
    (1, 'Downtown', 'Ahmedabad'),
    (2, 'Northside', 'Rajkot'),
    (3, 'Westend', 'Vadodra'),
    (4, 'Central', 'Surat'),
    (5, 'Eastside', 'Jamnagar');
    
INSERT INTO Loan (loan_no, branch_id, account_holder_id, loan_amount, loan_type)
VALUES
    (101, 1, 101, 5000.00, 'Personal'),
    (102, 2, 102, 10000.00, 'Home'),
    (103, 3, 103, 7500.00, 'Car'),
    (104, 4, 104, 15000.00, 'Education'),
    (105, 5, 105, 20000.00, 'Business');
    
INSERT INTO AccountHolder (account_holder_id, account_no, account_holder_name, city, contact, date_created, account_status, account_type, balance)
VALUES
    (101, 1001, 'John Doe', 'Ahmedabad', '123-456-7890', '2022-01-15', 'Active', 'Savings', 5000.00),
    (102, 1002, 'Jane Smith', 'Rajkot', '987-654-3210', '2021-11-20', 'Active', 'Checking', 10000.00),
    (103, 1003, 'Alice Johnson', 'Vadodra', '555-123-4567', '2023-03-10', 'Active', 'Savings', 7500.00),
    (104, 1004, 'Bob Brown', 'Ahmedabad', '777-999-8888', '2022-09-05', 'Terminated', 'Checking', 15000.00),
    (105, 1005, 'Eva Lee', 'Jamnagar', '111-222-3333', '2023-02-18', 'Active', 'Savings', 20000.00);
    
  select *from bank;  
  select *from loan;
  select *from Accountholder;
  
   --   Consider a-- n example where there’s an account holder table where we are 
-- doing an intra bank transfer i.e. a person holding account A is trying to 
-- transfer $100 to account B. 
-- - for this you have to make a transaction in sql which can 
-- transfer fund from account A to B 
-- - Make sure after the transaction the account information 
-- have to be updated for both the credit account and the 
-- debited account

SET sql_safe_updates=0; 
-- Transfer funds from account abc to xyz
BEGIN;
UPDATE AccountHolder
SET balance = balance - 100
WHERE account_no = '1001';

UPDATE AccountHolder
SET balance = balance + 100
WHERE account_no = '1002';
COMMIT;

  select *from Accountholder;


 -- Also fetch the details of the account holder who are related from the same 
-- city   
  -- Fetch account holders from the same city (replace 'CityName' with the actual city)
SELECT account_holder_id, account_holder_name, city
FROM AccountHolder
GROUP BY city;


-- Fetch account number and account holder name for accounts created after 15th
SELECT account_no, account_holder_name
FROM AccountHolder
WHERE DAY(date_created) > 15;

-- Display city name and count of branches (alias as Count_Branch)
SELECT branch_city, COUNT(*) AS Count_Branch
FROM Bank
GROUP BY branch_city;

-- Display account holder's id, name, branch id, and loan amount for people with loans
SELECT ah.account_holder_id, ah.account_holder_name, l.branch_id, l.loan_amount
FROM AccountHolder ah
JOIN Loan l ON ah.account_holder_id = l.account_holder_id;
