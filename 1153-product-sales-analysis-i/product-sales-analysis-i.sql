# Write your MySQL query statement below
select Product_name , year , Price
from Sales 
inner join  Product
on sales.product_id = Product.product_id ; 
