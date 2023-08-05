# Write your MySQL query statement below
select round( count(player_id) / (select count(distinct player_id) from activity) , 2) as fraction
from Activity 
where (player_id,event_date) in 
(select player_id, DATE_ADD(min(event_date), INTERVAL 1 DAY) from Activity 
group by player_id)