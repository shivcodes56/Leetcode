# Write your MySQL query statement below
SELECT customer_id,COUNT(*) AS count_no_trans
 FROM Visits v
  LEFT JOIN 
Transactions T ON v.visit_id=T.visit_id
WHERE T.visit_id is NULL
GROUP BY v.customer_id;