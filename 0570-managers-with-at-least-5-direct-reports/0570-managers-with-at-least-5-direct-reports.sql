# Write your MySQL query statement below
select b.name from employee as b
join (select managerId from Employee group by managerId having count(*) >= 5) as a
on a.managerId = b.id