# Write your MySQL query statement below
SELECT s.product_id, s.year as first_year, s.quantity, s.price
FROM sales s
JOIN (
  SELECT product_id, MIN(year) AS min_year
  FROM sales
  GROUP BY product_id
) t ON s.product_id = t.product_id AND s.year = t.min_year;