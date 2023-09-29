# Write your MySQL query statement below
with cte as(
select reports_to,count(employee_id) as reports_count,round(avg(age),0)as 
average_age
from Employees 
where reports_to is not null 
group by reports_to)

select e.employee_id,e.name,c.reports_count,c.average_age
from cte as c 
left join Employees as e 
on c.reports_to=e.employee_id
order by employee_id