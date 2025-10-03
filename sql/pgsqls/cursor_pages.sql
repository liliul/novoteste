-- SELECT 
--           (SELECT u.name FROM users u WHERE u.id = o.user_id) AS user_name,
--           (SELECT u.email FROM users u WHERE u.id = o.user_id) AS user_email,
--           o.id, o.user_id, o.total, o.status, o.created_at
--        FROM orders o
--        WHERE (o.created_at < '2025-09-08 02:40:36.461095')
--           OR (o.created_at = '2025-09-08 02:40:36.461095' AND o.id < 'f59fc3b8-534d-4e95-b1a0-4802de385075')
--        ORDER BY o.created_at DESC, o.id DESC
--        LIMIT 5;

-- SELECT 
--         (SELECT u.name FROM users u WHERE u.id = o.user_id) AS user_name,
--         (SELECT u.email FROM users u WHERE u.id = o.user_id) AS user_email,
--         o.id, o.user_id, o.total, o.status, o.created_at
--      FROM orders o
--      ORDER BY o.created_at DESC, o.id DESC
--      LIMIT 5

SELECT 
    (SELECT u.name FROM users u WHERE u.id = o.user_id) AS user_name,
    (SELECT u.email FROM users u WHERE u.id = o.user_id) AS user_email,
    o.id, o.user_id, o.total, o.status, o.created_at
FROM orders o
WHERE (o.created_at, o.id) < ('2025-09-08 17:40:10.394327', '0f35e8c9-d457-410d-b3e8-17e32c8c2d4c')
ORDER BY o.created_at DESC, o.id DESC
LIMIT 5;