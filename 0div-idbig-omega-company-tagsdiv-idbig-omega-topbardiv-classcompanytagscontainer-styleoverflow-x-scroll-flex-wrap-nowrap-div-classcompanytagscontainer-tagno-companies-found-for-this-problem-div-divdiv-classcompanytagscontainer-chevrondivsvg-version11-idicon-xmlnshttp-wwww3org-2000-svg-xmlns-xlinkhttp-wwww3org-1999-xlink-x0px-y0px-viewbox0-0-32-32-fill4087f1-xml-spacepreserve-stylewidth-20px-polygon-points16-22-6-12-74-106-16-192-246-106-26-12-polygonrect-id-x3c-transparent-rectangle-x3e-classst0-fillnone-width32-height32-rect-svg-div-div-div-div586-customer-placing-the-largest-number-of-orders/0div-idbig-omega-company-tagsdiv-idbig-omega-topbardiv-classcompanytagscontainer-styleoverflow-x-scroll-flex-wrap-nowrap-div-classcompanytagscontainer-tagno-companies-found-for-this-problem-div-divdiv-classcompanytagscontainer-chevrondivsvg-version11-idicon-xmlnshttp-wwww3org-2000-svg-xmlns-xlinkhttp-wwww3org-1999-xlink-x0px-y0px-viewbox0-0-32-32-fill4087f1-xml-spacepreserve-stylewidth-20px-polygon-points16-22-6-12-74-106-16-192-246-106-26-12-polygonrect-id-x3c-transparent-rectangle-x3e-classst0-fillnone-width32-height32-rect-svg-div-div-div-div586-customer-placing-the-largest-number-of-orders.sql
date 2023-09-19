# Write your MySQL query statement below
with cte as (select customer_number, count(order_number)
as NumOrd from Orders
group by customer_number)

select customer_number
from cte
where NumOrd=(select Max(NumOrd)from cte)