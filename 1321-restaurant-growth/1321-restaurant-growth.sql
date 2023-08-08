# Write your MySQL query statement below
select visited_on,
        (
            select sum(amount) 
        from Customer 
        where visited_on between date_sub(c.visited_on, interval 6 day) and c.visited_on
        ) as amount,
        round(
            (select sum(amount) 
            from Customer 
            where visited_on between date_sub(c.visited_on, interval 6 day) and c.visited_on)/7
            ,2) as average_amount
from Customer c
where visited_on >= date_add((select min(visited_on) as visited_on from Customer), interval 6 day)
group by 1;