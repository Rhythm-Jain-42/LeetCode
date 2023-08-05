# Write your MySQL query statement below
WITH FirstOrderDates AS (
    SELECT customer_id, MIN(order_date) as first_order_date
    FROM Delivery
    GROUP BY customer_id
)
SELECT ROUND(AVG(order_date = customer_pref_delivery_date) * 100, 2) AS immediate_percentage 
FROM Delivery
WHERE (customer_id, order_date) IN (
    SELECT customer_id, first_order_date
    FROM FirstOrderDates
);