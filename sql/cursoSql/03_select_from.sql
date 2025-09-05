-- SELECT * 
-- FROM produtos;

-- SELECT 
-- IdProduto, 
-- DescCateogriaProduto 
-- FROM produtos
-- LIMIT 5;

-- SELECT * 
-- FROM produtos
-- WHERE DescProduto
-- LIKE
-- '%Venda de%'

-- SELECT * 
-- FROM produtos
-- WHERE DescProduto
-- LIKE
-- '%Lover'

SELECT * 
FROM produtos
WHERE DescProduto 
-- NOT LIKE '%chapéu%'
LIKE '%chapéu%'
