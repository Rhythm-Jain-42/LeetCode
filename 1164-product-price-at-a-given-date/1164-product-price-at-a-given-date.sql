# Write your MySQL query statement below
SELECT product_id, 10 AS price
FROM Products
GROUP BY product_id
HAVING MIN(change_date) > '2019-08-16'
UNION ALL
SELECT P.product_id, P.new_price as price
FROM Products P INNER JOIN 
(
  SELECT product_id, MAX(change_date) as max_date
  FROM Products
  WHERE change_date <= '2019-08-16'
  GROUP BY product_id
) as R 
ON P.product_id = R.product_id AND P.change_date = R.max_date;