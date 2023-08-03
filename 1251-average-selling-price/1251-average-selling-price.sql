# Write your MySQL query statement below

select U.product_id, round(sum(U.units * P.price) / sum(U.units), 2) as average_price
from UnitsSold U left join Prices P
on U.product_id = P.product_id
and U.purchase_date between P.start_date and P.end_date
group by U.product_id