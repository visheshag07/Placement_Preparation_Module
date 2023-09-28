# Write your MySQL query statement below
select s.user_id , CASE WHEN c.time_stamp is NULL then 0.00
else round(sum(c.action='confirmed')/count(*),2)
end as confirmation_rate
from Signups as s left join
Confirmations as c on 
s.user_id=c.user_id
group by s.user_id