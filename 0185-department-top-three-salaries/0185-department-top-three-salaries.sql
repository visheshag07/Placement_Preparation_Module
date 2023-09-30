# Write your MySQL query statement below
with cte as(
select *,dense_rank() over(partition by departmentId order by salary desc) as r from Employee)

select d.name as department,cte.name as Employee,cte.salary as Salary
from cte left join 
Department as d on 
d.id=cte.departmentId
where r<=3