# Write your MySQL query statement below
# SELECT s.student_id, s.student_name, sub.subject_name, COUNT(e.student_id) AS attended_exams
# FROM Students s
# CROSS JOIN Subjects sub
# LEFT JOIN Examinations e ON s.student_id = e.student_id AND sub.subject_name = e.subject_name
# GROUP BY s.student_id, s.student_name, sub.subject_name
# ORDER BY s.student_id, sub.subject_name;
WITH cte AS(
select * from Students cross join
Subjects),
cte1 as(
select student_id,subject_name,count(subject_name) as count  from 
Examinations group by
student_id,subject_name)


select cte.student_id,cte.student_name,cte.subject_name,CASE WHEN count is not null then count else 0 END AS attended_exams
from cte left join
cte1 on cte.student_id=cte1.student_id and cte.subject_name=cte1.subject_name 
order by cte.student_id,cte.subject_name