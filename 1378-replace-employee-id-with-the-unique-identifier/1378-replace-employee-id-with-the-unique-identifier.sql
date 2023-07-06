# Write your MySQL query statement below

select emp.name, enui.unique_id

from Employees as emp 

LEFT JOIN EmployeeUNI as enui

ON emp.id=enui.id;