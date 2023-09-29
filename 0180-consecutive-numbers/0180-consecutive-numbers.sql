# Write your MySQL query statement below
with cte as(
select *, lead(num,1) over() as next_num ,lead(num,2) over() as 
next_2_num from Logs)

select  distinct num as ConsecutiveNums
from cte where
num=next_num and num=next_2_num