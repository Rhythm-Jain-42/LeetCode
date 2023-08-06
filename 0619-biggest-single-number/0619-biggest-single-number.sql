# Write your MySQL query statement below
SELECT MAX(num) AS num FROM (
  SELECT num FROM mynumbers
  GROUP BY num
  HAVING COUNT(num) = 1
) AS subquery_alias;