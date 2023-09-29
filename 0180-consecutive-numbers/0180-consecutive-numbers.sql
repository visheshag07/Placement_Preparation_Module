# Write your MySQL query statement below
# with cte as(
# select *, lead(num,1) over() as next_num ,lead(num,2) over() as 
# next_2_num from Logs)

# select  distinct num as ConsecutiveNums
# from cte where
# num=next_num and num=next_2_num


# Write your MySQL query statement below
select distinct t1.num as ConsecutiveNums
from logs t1
join logs t2
on t1.id=t2.id+1 and t1.num=t2.num
join logs t3
on t2.id=t3.id+1 and t2.num=t3.num; 