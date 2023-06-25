SELECT unique_id,name
FROM EmployeeUNI RIGHT JOIN Employees
USING(id)