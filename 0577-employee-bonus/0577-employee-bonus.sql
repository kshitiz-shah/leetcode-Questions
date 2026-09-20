# Write your MySQL query statement below

select 
e.name ,b.bonus

from employee e left join bonus b 
on e.empId = b.empid 
where b.bonus < 1000 OR b.bonus is NULL ;
