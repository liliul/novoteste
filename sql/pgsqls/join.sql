-- select u.id, o.total, o.status from orders as o join users as u
-- on o.id = u.id
-- order by u.id

-- juntando duas tabelas com join orders com users
-- SELECT u.id, u.name,u.email, o.total, o.status, o.id as idcheck
-- FROM orders AS o
-- JOIN users AS u ON o.user_id = u.id  
-- ORDER BY u.name, u.email;

-- SELECT u.id, u.name,u.email, o.total, o.status, o.id as idcheck,p.name as namep
-- FROM orders AS o
-- JOIN users AS u ON o.user_id = u.id
-- join cart_items as i on o.user_id = i.id
-- join products as p on i.id = p.id
-- ORDER BY u.name, u.email, p.name;

-- SELECT 
--     u.id AS user_id,
--     u.name,
--     u.email,
--     o.id AS order_id,
--     o.total,
--     o.status,
--     p.name AS product_name,
--     p.price,
--     i.quantity,
--     (p.price * i.quantity) AS subtotal
-- FROM users AS u
-- JOIN orders AS o ON o.user_id = u.id
-- JOIN carts AS cw ON cw.user_id = u.id
-- JOIN cart_items AS i ON i.cart_id = cw.id
-- JOIN products AS p ON i.product_id = p.id
-- ORDER BY u.name, u.email, p.name;



-- select * from orders where total = 15000.10
-- select total from orders where total = 15000.10


-- select name,email from users
-- join cart_items on 
-- users.cart_id = cart_items.cart_id

-- select users.name, users.email, carts.id as catid
-- from users
-- join carts on users.id = carts.user_id

select p.id, p.name, p.price, cart_items.product_id as proid
from products as p
join cart_items on p.id = cart_items.product_id

