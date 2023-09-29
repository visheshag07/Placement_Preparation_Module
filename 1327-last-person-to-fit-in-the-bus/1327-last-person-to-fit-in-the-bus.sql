# Write your MySQL query statement below
with cte as(
select *,sum(weight) over(order by turn rows between unbounded preceding and current row) as newweight
from Queue )

select person_name
from cte where 
newweight<=1000
order by newweight desc
limit 1