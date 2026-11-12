# Write your MySQL query statement below
/*
 select curr.id
 from Weather prev, Weather curr
 where curr.temperature>prev.temperature and curr.recordDate>prev.recordDate*/
select id
from(
    SELECT 
        *,
        LAG(temperature) OVER (ORDER BY recordDate) AS prev_temp,
        LAG(recordDate) OVER (ORDER BY recordDate) AS prev_date
    FROM Weather
)t
where temperature>prev_temp and datediff(recordDate,prev_date)=1;