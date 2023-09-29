# Write your MySQL query statement below
with cte as(select employee_id, case when count(department_id)=1 then department_id
 when count(department_id)>1 then sum((primary_flag='Y')*department_id )
end as department_id
from Employee
group by employee_id)

select e.employee_id,e.department_id
from cte as c
inner join Employee as e
on e.employee_id=c.employee_id and e.department_id =c.department_id