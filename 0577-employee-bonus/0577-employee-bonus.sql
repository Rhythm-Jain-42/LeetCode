# Write your MySQL query statement below
SELECT e.name, b.bonus FROM 
# Employee e LEFT JOIN Bonus b
Bonus b RIGHT JOIN Employee e
ON e.empId = b.empId
WHERE b.bonus < 1000 OR b.bonus IS null;