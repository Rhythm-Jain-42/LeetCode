# Write your MySQL query statement below
with cte as
(select d.name as department, e.name as employee, e.salary, max(e.salary) over(partition by e.departmentID) as max_salary
from employee e join department d
on e.departmentID=d.id)

select department, employee, salary
from cte
where salary=max_salary