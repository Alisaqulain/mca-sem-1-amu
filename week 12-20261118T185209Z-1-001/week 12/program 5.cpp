//week 12 program 5
-- 1. University Table
CREATE TABLE University
(
    University_ID INTEGER PRIMARY KEY,
    University_Name VARCHAR(100),
    City VARCHAR(50),
    State VARCHAR(50),
    Established_Year INTEGER
);

-- 2. Department Table
CREATE TABLE Department
(
    Dept_ID INTEGER PRIMARY KEY,
    Dept_Name VARCHAR(100),
    University_ID INTEGER,
    HOD_Name VARCHAR(100),
    Location VARCHAR(50),
    FOREIGN KEY (University_ID)
    REFERENCES University(University_ID)
);

-- 3. Student Table
CREATE TABLE Student
(
    Student_ID INTEGER PRIMARY KEY,
    Student_Name VARCHAR(100),
    Gender VARCHAR(10),
    Email VARCHAR(100),
    Dept_ID INTEGER,
    FOREIGN KEY (Dept_ID)
    REFERENCES Department(Dept_ID)
);

-- 4. Faculty Table
CREATE TABLE Faculty
(
    Faculty_ID INTEGER PRIMARY KEY,
    Faculty_Name VARCHAR(100),
    Designation VARCHAR(50),
    Salary DECIMAL(10,2),
    Dept_ID INTEGER,
    FOREIGN KEY (Dept_ID)
    REFERENCES Department(Dept_ID)
);

-- 5. Course Table
CREATE TABLE Course
(
    Course_ID INTEGER PRIMARY KEY,
    Course_Name VARCHAR(100),
    Credits INTEGER,
    Dept_ID INTEGER,
    Faculty_ID INTEGER,
    FOREIGN KEY (Dept_ID)
    REFERENCES Department(Dept_ID),
    FOREIGN KEY (Faculty_ID)
    REFERENCES Faculty(Faculty_ID)
);

-- Display all tables
SELECT name
FROM sqlite_master
WHERE type = 'table';

