# Write your MySQL query statement below
select U.name as name ,
case 
when sum(R.distance) is null then 0
else sum(R.distance)
end 
as travelled_distance from Users U left JOIN Rides R on U.id = R.user_id
group by R.user_id
order by sum(R.distance) desc, name;