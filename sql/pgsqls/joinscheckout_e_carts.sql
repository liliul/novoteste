-- select * from users
-- select role,name from users where id = 'd3c21488-c428-4333-b419-70338357c4ba'

-- SELECT ci.id as item_id, p.name, p.price, ci.quantity,
--                 (p.price * ci.quantity) as subtotal
--         FROM cart_items ci
--         JOIN carts c ON ci.cart_id = c.id
--         JOIN products p ON ci.product_id = p.id
--         WHERE c.user_id = '3a4734f7-65a1-4ee1-8dda-9f37604fb0e4'

-- select *, c.id as cartid, u.id as userid, u.name,u.email, c.created_at as creatCart from users u
-- join carts c on u.id = c.user_id
-- where u.id = '3a4734f7-65a1-4ee1-8dda-9f37604fb0e4'

 SELECT o.id as order_id, o.total, o.status, o.created_at,
                    oi.product_id, p.name as nameProduct, oi.quantity, oi.price, u.name as nameUser, u.email as emailUser
            FROM orders o
            JOIN order_items oi ON oi.order_id = o.id
            JOIN products p ON oi.product_id = p.id
			join users u on u.id = o.user_id 
            WHERE o.user_id = '3a4734f7-65a1-4ee1-8dda-9f37604fb0e4' 
            ORDER BY o.created_at DESC
