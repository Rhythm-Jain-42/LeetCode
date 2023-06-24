# Write your MySQL query statement below
Select  distinct author_id as id  
FROM Views
WHERE author_id = viewer_id 
order by id