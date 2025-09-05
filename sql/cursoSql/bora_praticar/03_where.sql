-- SELECT * 
-- FROM
-- produtos
-- WHERE DescProduto = 'Churn_10pp'
-- OR DescProduto = 'Churn_2pp'
-- OR DescProduto = 'Churn_5pp'
 
-- SELECT * 
-- FROM
-- produtos
-- WHERE DescProduto IN ('Churn_10pp',
-- 'Churn_2pp',
-- 'Churn_5pp')

-- SELECT
--  * 
-- FROM
-- produtos
-- WHERE DescProduto 
-- -- operador LIKE é usado para filtrar valores com base em padrões de texto. Ele permite fazer buscas parciais ou com coringas, diferente do = que só encontra correspondência exata
-- -- SELECT * FROM usuarios WHERE nome LIKE '%Churn%';
-- -- SELECT * FROM usuarios WHERE nome LIKE '%p';
-- -- SELECT * FROM usuarios WHERE nome LIKE 'C_urn%';
-- -- (_ substitui exatamente um caractere)
-- LIKE 'Churn%'

-- SELECT *
-- FROM
-- produtos
-- WHERE DescProduto
-- LIKE '%Resgatar ponei%'

SELECT *
FROM
produtos