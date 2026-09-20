# Write your MySQL query statement below
select 
e1.name
from Employee e  join employee e1 
on  e.managerId = e1.id 
 group by e1.id
 having count(e1.id) >= 5



