# Write your MySQL query statement below
select e1.name AS 'Employee'
from Employee as e1, Employee as e2
where e1.managerId=e2.id 
AND e1.salary>e2.salary;


