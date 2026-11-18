//week 10 program 6

-- BANKING DATABASE

-- 1. BRANCH TABLE
CREATE TABLE BRANCH (
    branch_name VARCHAR(50) PRIMARY KEY,
    branch_city VARCHAR(50),
    assets REAL
);

-- 2. CUSTOMER TABLE
CREATE TABLE CUSTOMER (
    customer_name VARCHAR(50) PRIMARY KEY,
    customer_street VARCHAR(100),
    customer_city VARCHAR(50)
);

-- 3. ACCOUNT TABLE
CREATE TABLE ACCOUNT (
    accno INT PRIMARY KEY,
    branch_name VARCHAR(50),
    balance REAL,
    FOREIGN KEY (branch_name)
        REFERENCES BRANCH(branch_name)
);

-- 4. DEPOSITOR TABLE
CREATE TABLE DEPOSITOR (
    customer_name VARCHAR(50),
    accno INT,
    PRIMARY KEY (customer_name, accno),
    FOREIGN KEY (customer_name)
        REFERENCES CUSTOMER(customer_name),
    FOREIGN KEY (accno)
        REFERENCES ACCOUNT(accno)
);

-- 5. LOAN TABLE
CREATE TABLE LOAN (
    loan_number INT PRIMARY KEY,
    branch_name VARCHAR(50),
    amount REAL,
    FOREIGN KEY (branch_name)
        REFERENCES BRANCH(branch_name)
);

-- 6. BORROWER TABLE
CREATE TABLE BORROWER (
    customer_name VARCHAR(50),
    loan_number INT,
    PRIMARY KEY (customer_name, loan_number),
    FOREIGN KEY (customer_name)
        REFERENCES CUSTOMER(customer_name),
    FOREIGN KEY (loan_number)
        REFERENCES LOAN(loan_number)
);

-- INSERT DATA INTO BRANCH
INSERT INTO BRANCH VALUES
('SBI', 'Delhi', 5000000),
('PNB', 'Mumbai', 4000000),
('BOI', 'Lucknow', 3000000);

-- INSERT DATA INTO CUSTOMER
INSERT INTO CUSTOMER VALUES
('Rahul', 'MG Road', 'Delhi'),
('Amit', 'Park Street', 'Mumbai'),
('Priya', 'Civil Lines', 'Lucknow');

-- INSERT DATA INTO ACCOUNT
INSERT INTO ACCOUNT VALUES
(101, 'SBI', 25000),
(102, 'PNB', 30000),
(103, 'BOI', 15000);

-- INSERT DATA INTO DEPOSITOR
INSERT INTO DEPOSITOR VALUES
('Rahul', 101),
('Amit', 102),
('Priya', 103);

-- INSERT DATA INTO LOAN
INSERT INTO LOAN VALUES
(201, 'SBI', 100000),
(202, 'PNB', 200000),
(203, 'BOI', 150000);

-- INSERT DATA INTO BORROWER
INSERT INTO BORROWER VALUES
('Rahul', 201),
('Amit', 202),
('Priya', 203);

-- CHECK ALL TABLES
SELECT * FROM BRANCH;
SELECT * FROM CUSTOMER;
SELECT * FROM ACCOUNT;
SELECT * FROM DEPOSITOR;
SELECT * FROM LOAN;
SELECT * FROM BORROWER;

