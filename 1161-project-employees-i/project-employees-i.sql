# Write your MySQL query statement below
select a.project_id ,Round( AVG(b.experience_years) , 2) as average_years
from Project a 
inner join Employee b
on a.employee_id = b.employee_id
group by a.project_id;
