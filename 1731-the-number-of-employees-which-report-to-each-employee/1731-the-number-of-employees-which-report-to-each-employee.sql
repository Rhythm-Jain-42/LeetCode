# Write your MySQL query statement below
select e1.employee_id, e1.name, count(e2.reports_to) as reports_count, round(avg(e2.age)) as average_age
from employees e1 join employees e2
on e2.reports_to = e1.employee_id
group by employee_id
order by employee_id