# Write your MySQL query statement below
# Write your MySQL query statement below

# product id, year, quantity, and price 
# first year of every product sold


# SELECT product_id, year AS first_year, quantity, price
# FROM Sales
# WHERE (product_id, year) in (
#     SELECT product_id, MIN(year) 
#     FROM Sales
#     GROUP BY product_id
# )

# select product_id,year as first_year ,quantity,price
# from Sales 
# where(product_id,year)in(
#     select product_id ,min(year)
#     from sales
#     group by product_id
# )



with cte as(select *,rank() over( partition by product_id order by year) as rnk
from Sales)

select product_id, year as first_year,quantity,price from 
cte where rnk=1