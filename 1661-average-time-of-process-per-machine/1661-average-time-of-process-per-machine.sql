select 
a1.machine_id , ROUND(avg(a1.timestamp - a.timestamp), 3) as processing_time

from Activity a inner join Activity a1 
on a.process_id = a1.process_id
where a.machine_id = a1.machine_id
and a.activity_type = 'start'
and a1.activity_type = 'end'

group by a1.machine_id ;