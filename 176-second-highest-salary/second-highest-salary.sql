SELECT(SELECT DISTINCT
    Salary 
FROM
    Employee
ORDER BY Salary DESC
LIMIT 1 offset 1 )AS SecondHighestSalary;