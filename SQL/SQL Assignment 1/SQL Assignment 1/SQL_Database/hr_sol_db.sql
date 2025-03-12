use hr;

SELECT first_name AS "First Name", last_name AS "Last Name"
FROM employees;

SELECT DISTINCT employee_id
FROM employees;

SELECT first_name FROM employees ORDER BY first_name DESC;

SELECT first_name,
last_name, 
salary, 
salary*0.15 AS PF 
FROM employees;

SELECT employee_id , first_name, last_name, salary FROM employees ORDER BY salary ASC;

SELECT first_name, last_name FROM employees WHERE year(hire_date) = 1987;

USE stu



