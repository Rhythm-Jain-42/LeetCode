# Write your MySQL query statement below
# Write your MySQL query statement below
SELECT "Low Salary" as category,
Count(income) as accounts_count
FROM Accounts
WHERE income < 20000

UNION

SELECT "Average Salary" as category,
Count(income) as accounts_count
FROM Accounts
WHERE income >= 20000 && income <= 50000

UNION

SELECT "High Salary" as category,
Count(income) as accounts_count
FROM Accounts
WHERE income > 50000;