# Write your MySQL query statement below
SELECT id,  sum(CASE WHEN month = 'Jan' THEN ifnull(revenue, null) END) AS "Jan_Revenue",
            sum(CASE WHEN month = 'Feb' THEN ifnull(revenue, null) END) AS "Feb_Revenue",
            sum(CASE WHEN month = 'Mar' THEN ifnull(revenue, null) END) AS "Mar_Revenue",
            sum(CASE WHEN month = 'Apr' THEN ifnull(revenue, null) END) AS "Apr_Revenue",
            sum(CASE WHEN month = 'May' THEN ifnull(revenue, null) END) AS "May_Revenue",
            sum(CASE WHEN month = 'Jun' THEN ifnull(revenue, null) END) AS "Jun_Revenue",
            sum(CASE WHEN month = 'Jul' THEN ifnull(revenue, null) END) AS "Jul_Revenue",
            sum(CASE WHEN month = 'Aug' THEN ifnull(revenue, null) END) AS "Aug_Revenue",
            sum(CASE WHEN month = 'Sep' THEN ifnull(revenue, null) END) AS "Sep_Revenue",
            sum(CASE WHEN month = 'Oct' THEN ifnull(revenue, null) END) AS "Oct_Revenue",
            sum(CASE WHEN month = 'Nov' THEN ifnull(revenue, null) END) AS "Nov_Revenue",
            sum(CASE WHEN month = 'Dec' THEN ifnull(revenue, null) END) AS "Dec_Revenue" 
FROM department
GROUP BY id;