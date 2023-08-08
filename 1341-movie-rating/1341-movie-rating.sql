# Write your MySQL query statement below
(SELECT name as results
FROM Users
INNER JOIN MovieRating USING(user_id)
GROUP BY user_id
ORDER BY COUNT(rating) DESC, name
LIMIT 1)

UNION ALL

(SELECT title as results
FROM Movies
INNER JOIN MovieRating USING(movie_id)
WHERE created_at LIKE '2020-02%'
GROUP BY movie_id
ORDER BY AVG(rating) DESC, title
LIMIT 1)