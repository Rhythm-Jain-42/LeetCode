# Write your MySQL query statement below
SELECT s.student_id,s.student_name,sub.subject_name, IFNULL(grouped.attended_exams,0) as attended_exams
from Students s
cross join Subjects sub
LEFT JOIN (
    SELECT student_id, subject_name, COUNT(*) as attended_exams
    FROM Examinations
    GROUP BY student_id, subject_name
)grouped on s.student_id=grouped.student_id and sub.subject_name=grouped.subject_name group by s.student_id,sub.subject_name order by s.student_id,sub.subject_name;