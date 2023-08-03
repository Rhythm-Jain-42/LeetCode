SELECT id, movie, description, rating
FROM Cinema AS c
WHERE c.id % 2 = 1 AND description <> "boring"
ORDER BY rating DESC;
