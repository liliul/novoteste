select
(select u.name from users as u where u.id = o.user_id) as userNameEmail,
id, user_id, total, status, created_at
from orders as o

-- SELECT
--   o.id,
--   o.user_id,
--   (SELECT u.name  FROM users u WHERE u.id = o.user_id) AS user_name,
--   (SELECT u.email FROM users u WHERE u.id = o.user_id) AS user_email,
--   o.total, o.status, o.created_at
-- FROM orders o;


-- SELECT
--   o.id,
--   o.user_id,
--   (SELECT json_build_object('name', u.name, 'email', u.email)
--    FROM users u WHERE u.id = o.user_id) AS user
-- FROM orders o;
