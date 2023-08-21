# Write your MySQL query statement below
SELECT email from Person
Group by email
having count(email)>1;