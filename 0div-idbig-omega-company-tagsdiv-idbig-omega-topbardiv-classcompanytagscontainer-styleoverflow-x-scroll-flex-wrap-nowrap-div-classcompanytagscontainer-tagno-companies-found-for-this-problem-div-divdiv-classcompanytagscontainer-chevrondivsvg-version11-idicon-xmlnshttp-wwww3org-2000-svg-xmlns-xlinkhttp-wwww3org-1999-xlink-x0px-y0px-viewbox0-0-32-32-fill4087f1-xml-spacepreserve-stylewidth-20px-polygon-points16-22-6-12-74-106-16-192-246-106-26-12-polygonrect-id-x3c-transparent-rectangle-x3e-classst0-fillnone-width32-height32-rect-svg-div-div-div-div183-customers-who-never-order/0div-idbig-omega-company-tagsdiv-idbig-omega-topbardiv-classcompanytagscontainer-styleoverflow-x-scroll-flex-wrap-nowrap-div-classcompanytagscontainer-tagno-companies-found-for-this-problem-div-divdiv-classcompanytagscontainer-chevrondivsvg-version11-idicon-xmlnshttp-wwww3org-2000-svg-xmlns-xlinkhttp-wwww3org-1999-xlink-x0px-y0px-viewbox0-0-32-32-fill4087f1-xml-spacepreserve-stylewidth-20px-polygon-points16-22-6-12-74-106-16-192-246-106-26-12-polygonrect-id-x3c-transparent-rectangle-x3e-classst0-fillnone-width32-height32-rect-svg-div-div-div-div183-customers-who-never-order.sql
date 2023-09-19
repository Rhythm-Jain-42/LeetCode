# Write your MySQL query statement below
select name as customers
from customers
where customers.id not in (select distinct customerId from Orders)