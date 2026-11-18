//WEEK 9 PROGRAM 8-- ============================================

-- ============================================

-- 1. PERSON TABLE
CREATE TABLE PERSON
(
    driver_id VARCHAR(20) PRIMARY KEY,
    name VARCHAR(50),
    address VARCHAR(100)
);


-- 2. CAR TABLE
CREATE TABLE CAR
(
    regno VARCHAR(20) PRIMARY KEY,
    model VARCHAR(50),
    year INT
);


-- 3. ACCIDENT TABLE
CREATE TABLE ACCIDENT
(
    report_number INT PRIMARY KEY,
    accd_date DATE,
    location VARCHAR(100)
);


-- 4. OWNS TABLE
CREATE TABLE OWNS
(
    driver_id VARCHAR(20),
    regno VARCHAR(20),

    PRIMARY KEY (driver_id, regno),

    FOREIGN KEY (driver_id)
        REFERENCES PERSON(driver_id),

    FOREIGN KEY (regno)
        REFERENCES CAR(regno)
);


-- 5. PARTICIPATED TABLE
CREATE TABLE PARTICIPATED
(
    driver_id VARCHAR(20),
    regno VARCHAR(20),
    report_number INT,
    damage_amount INT,

    PRIMARY KEY (driver_id, regno, report_number),

    FOREIGN KEY (driver_id)
        REFERENCES PERSON(driver_id),

    FOREIGN KEY (regno)
        REFERENCES CAR(regno),

    FOREIGN KEY (report_number)
        REFERENCES ACCIDENT(report_number)
);


-- ============================================
-- INSERT DATA INTO PERSON
-- ============================================

INSERT INTO PERSON
VALUES ('D001', 'Amit', 'Aligarh');

INSERT INTO PERSON
VALUES ('D002', 'Rahul', 'Delhi');

INSERT INTO PERSON
VALUES ('D003', 'Sahil', 'Lucknow');

INSERT INTO PERSON
VALUES ('D004', 'Priya', 'Agra');


-- ============================================
-- INSERT DATA INTO CAR
-- ============================================

INSERT INTO CAR
VALUES ('UP81AB1234', 'Maruti', 2020);

INSERT INTO CAR
VALUES ('DL01CD5678', 'Honda', 2021);

INSERT INTO CAR
VALUES ('UP32EF9012', 'Toyota', 2019);

INSERT INTO CAR
VALUES ('UP80GH3456', 'Hyundai', 2022);


-- ============================================
-- INSERT DATA INTO ACCIDENT
-- ============================================

INSERT INTO ACCIDENT
VALUES (101, '2025-01-10', 'Aligarh');

INSERT INTO ACCIDENT
VALUES (102, '2025-02-15', 'Delhi');

INSERT INTO ACCIDENT
VALUES (103, '2025-03-20', 'Lucknow');

INSERT INTO ACCIDENT
VALUES (104, '2025-04-25', 'Agra');


-- ============================================
-- INSERT DATA INTO OWNS
-- ============================================

INSERT INTO OWNS
VALUES ('D001', 'UP81AB1234');

INSERT INTO OWNS
VALUES ('D002', 'DL01CD5678');

INSERT INTO OWNS
VALUES ('D003', 'UP32EF9012');

INSERT INTO OWNS
VALUES ('D004', 'UP80GH3456');


-- ============================================
-- INSERT DATA INTO PARTICIPATED
-- ============================================

INSERT INTO PARTICIPATED
VALUES ('D001', 'UP81AB1234', 101, 50000);

INSERT INTO PARTICIPATED
VALUES ('D002', 'DL01CD5678', 102, 30000);

INSERT INTO PARTICIPATED
VALUES ('D003', 'UP32EF9012', 103, 70000);

INSERT INTO PARTICIPATED
VALUES ('D004', 'UP80GH3456', 104, 45000);


-- ============================================
-- DISPLAY ALL TABLES
-- ============================================

SELECT * FROM PERSON;

SELECT * FROM CAR;

SELECT * FROM ACCIDENT;

SELECT * FROM OWNS;

SELECT * FROM PARTICIPATED;


-- ============================================
-- DRIVER NAME AND CAR DETAILS
-- ============================================

SELECT P.name,
       P.address,
       C.regno,
       C.model,
       C.year
FROM PERSON P
JOIN OWNS O
ON P.driver_id = O.driver_id
JOIN CAR C
ON O.regno = C.regno;


-- ============================================
-- ACCIDENT DETAILS WITH DRIVER AND CAR
-- ============================================

SELECT P.name,
       C.regno,
       A.report_number,
       A.accd_date,
       A.location,
       PA.damage_amount
FROM PARTICIPATED PA
JOIN PERSON P
ON PA.driver_id = P.driver_id
JOIN CAR C
ON PA.regno = C.regno
JOIN ACCIDENT A
ON PA.report_number = A.report_number;


-- ============================================
-- ACCIDENTS IN ALIGARH
-- ============================================

SELECT *
FROM ACCIDENT
WHERE location = 'Aligarh';


-- ============================================
-- CARS MANUFACTURED AFTER 2020
-- ============================================

SELECT *
FROM CAR
WHERE year > 2020;


-- ============================================
-- DAMAGE GREATER THAN 50000
-- ============================================

SELECT P.name,
       PA.regno,
       PA.damage_amount
FROM PERSON P
JOIN PARTICIPATED PA
ON P.driver_id = PA.driver_id
WHERE PA.damage_amount > 50000;


-- ============================================
-- TOTAL DAMAGE
-- ============================================

SELECT SUM(damage_amount) AS total_damage
FROM PARTICIPATED;


-- ============================================
-- MAXIMUM DAMAGE
-- ============================================

SELECT MAX(damage_amount) AS maximum_damage
FROM PARTICIPATED;


-- ============================================
-- MINIMUM DAMAGE
-- ============================================

SELECT MIN(damage_amount) AS minimum_damage
FROM PARTICIPATED;


-- ============================================
-- TOTAL NUMBER OF ACCIDENTS
-- ============================================

SELECT COUNT(*) AS total_accidents
FROM ACCIDENT;


-- ============================================
-- DRIVERS WHO PARTICIPATED IN ACCIDENTS
-- ============================================

SELECT DISTINCT P.name
FROM PERSON P
JOIN PARTICIPATED PA
ON P.driver_id = PA.driver_id;

