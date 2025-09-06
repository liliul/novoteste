-- SELECT sum(FlEmail)
-- FROM clientes

-- SELECT 
-- IdCliente,
-- sum(QtdePontos) AS totalPontos
-- FROM transacoes
-- WHERE DtCriacao >= '2025-05-01'
-- AND DtCriacao < '2025-06-01'
-- AND QtdePontos > 0

-- GROUP BY IdCliente
-- ORDER BY sum(QtdePontos) DESC
-- LIMIT 1

-- SELECT 
-- IdCliente,
-- count(*),
-- count(DISTINCT IdTransacao) 
-- FROM transacoes

-- -- WHERE DtCriacao >= '2025-05-01'
-- -- AND DtCriacao < '2025-06-01'

-- WHERE strftime('%Y', substr(DtCriacao, 1, 19)) = '2024'

-- GROUP BY IdCliente


-- SELECT IdCliente,
--        count(*),
--        count(DISTINCT IdTransacao) 

-- FROM transacoes

-- WHERE DtCriacao >= '2024-01-01'
-- AND DtCriacao < '2025-01-01'

-- -- WHERE strftime('%Y', substr(DtCriacao, 1, 19)) = '2024'
-- -- WHERE substr(DtCriacao, 1, 4) = '2024'

-- GROUP BY IdCliente

-- ORDER BY count(*) DESC

-- LIMIT 1

-- Qual o valor médio de pontos positivos por dia?

-- SELECT sum(QtdePontos) AS totalpontos,
--        count(DISTINCT substr(DtCriacao,1,10)) AS qtdeDiasUnicos,
--        sum(QtdePontos) / count(DISTINCT substr(DtCriacao,1,10)) AS avgPontosDia

-- FROM transacoes
-- WHERE QtdePontos > 0;


-- SELECT substr(DtCriacao,1,10) AS dtDia,
--        AVG(QtdePontos) AS avgpontosDia

-- FROM transacoes

-- WHERE QtdePontos > 0

-- GROUP BY 1
-- ORDER BY 2
-- ;


-- Qual dia da semana quem mais pedidos em 2025?

-- SELECT 
--        strftime('%w', substr(DtCriacao, 1,10)) AS diaSemana,
--        count(DISTINCT IdTransacao) AS qtdeTransacao,
--        count(IdTransacao) AS qtdeTransacao2,
--        count(*) AS qtdeTransacao3

-- FROM transacoes

-- WHERE substr(DtCriacao,1,4) = '2025'

-- GROUP BY 1
-- ORDER BY 2 DESC

-- Qual o produto com mais pontos transacionados?

-- SELECT IdProduto,
--        sum(VlProduto * QtdeProduto) AS totalPontos,
--        sum(QtdeProduto) AS qtdevenda,
--        count(VlProduto) AS vl

-- FROM transacao_produto

-- GROUP BY IdProduto
-- ORDER BY sum(VlProduto) DESC

-- Qual o produto mais transacionado?

-- SELECT IdProduto,
--        -- count(*),
--        sum(QtdeProduto) AS qtdeProdutoSum,
--        max(QtdeProduto) AS maxp,
--        avg(QtdeProduto)

-- FROM transacao_produto

-- GROUP BY IdProduto
-- ORDER BY count(*) DESC

-- LIMIT 1

SELECT *,
sum(IdProduto * VlProduto) AS pp
FROM transacao_produto
GROUP BY IdTransacao
ORDER BY VlProduto DESC
LIMIT 10