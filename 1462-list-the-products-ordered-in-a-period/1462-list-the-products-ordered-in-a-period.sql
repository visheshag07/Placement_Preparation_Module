# Write your MySQL query statement below
with cte as(
select *,sum(unit)as new_unit
from Orders where 
year(order_date)=2020 and month(order_date)=2
group by product_id)

select p.product_name,c.new_unit as unit
from cte as c left join Products as p
on p.product_id=c.product_id where
c.new_unit>=100