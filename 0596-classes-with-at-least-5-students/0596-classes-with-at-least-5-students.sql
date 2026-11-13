# Write your MySQL query statement below
select t.class from
(select class,count(student) as cnt
from Courses 
group by class)t
where cnt>=5