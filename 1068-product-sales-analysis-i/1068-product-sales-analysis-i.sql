# Write your MySQL query statement below
select s.year,s.price,p.product_name 
from Sales as s
INNER JOIN 
Product as p
ON s.product_id=p.product_id;