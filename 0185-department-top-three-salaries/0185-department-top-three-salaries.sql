# Write your MySQL query statement below
SELECT d.name AS Department, e.name AS Employee, e.salary 
FROM Employee AS e
INNER JOIN Department AS d
ON d.id = e.departmentId
WHERE (
    SELECT
    COUNT(DISTINCT(salary))
    FROM Employee
    WHERE salary > e.salary
    AND DepartmentId = e.DepartmentId        
) < 3;