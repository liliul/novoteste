-- Lista de transações com o produto “Resgatar Ponei”;

-- SELECT DescSistemaOrigem from transacoes WHERE DescSistemaOrigem LIKE '%c%'

-- SELECT *

-- FROM transacao_produto AS t1

-- WHERE t1.IdProduto = (
--     SELECT IdProduto
--     FROM produtos
--     WHERE DescProduto = 'Resgatar Ponei'
-- )

-- SELECT count(distinct IdCliente)

-- FROM transacoes AS t1

-- WHERE t1.IdCliente IN (
--     SELECT DISTINCT IdCliente
--     FROM transacoes
--     WHERE substr(DtCriacao, 1, 10) = '2025-08-25'
-- )

-- AND substr(t1.DtCriacao, 1, 10) = '2025-08-29'
-- ;

SELECT *

FROM (
    SELECT *
    FROM transacoes
    WHERE DtCriacao >= '2025-01-01'
)

WHERE DtCriacao < '2025-07-01'
LIMIT 10