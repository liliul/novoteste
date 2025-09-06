-- SELECT t1.*,
--        t2.DescProduto

-- FROM transacao_produto AS t1

-- LEFT JOIN produtos AS t2
-- ON t1.IdProduto = t2.IdProduto

-- WITH tb_clientes_d1 AS (
--     SELECT DISTINCT IdCliente
--     FROM transacoes
--     WHERE  DtCriacao >= '2025-08-25'
--     AND DtCriacao < '2025-08-26'
-- ),

-- tb_join AS (

--     SELECT 
--         substr(t2.DtCriacao,1,10) AS dtDia,
--         count(DISTINCT t1.IdCliente) AS qtdeCliente,
--         1. * count(DISTINCT t1.IdCliente) / (select count(*) from tb_clientes_d1) AS pctRetencao,
--         1 - 1. * count(DISTINCT t1.IdCliente) / (select count(*) from tb_clientes_d1) AS pctChurn

--     FROM tb_clientes_d1 AS t1

--     LEFT JOIN  transacoes AS t2
--     ON t1.IdCliente = t2.IdCliente

--     WHERE t2.DtCriacao >= '2025-08-25'
--     AND t2.DtCriacao < '2025-08-30'

--     GROUP BY dtDia
-- )

-- SELECT * FROM tb_join

-- WITH tb_prim_dia AS (
--     SELECT DISTINCT IdCliente
--     FROM transacoes
--     WHERE substr(dtCriacao,1,10) = '2025-08-25'
-- ),

-- -- quem participou do curso inteiro
-- tb_dias_curso AS (
--     SELECT DISTINCT
--            IdCliente,
--            substr(DtCriacao,1,10) AS presenteDia
--     FROM transacoes
--     WHERE dtCriacao >= '2025-08-25'
--     AND DtCriacao < '2025-08-30'
--     ORDER BY IdCliente, presenteDia
-- ),

-- -- contando quantas vezes quem participouo do primeiro dia, voltou
-- tb_cliente_dias AS (
--     SELECT t1.IdCliente,
--            count(DISTINCT t2.presenteDia) as qtdeDias
--     FROM tb_prim_dia AS t1
--     LEFT JOIN tb_dias_curso AS t2
--     ON t1.IdCliente = t2.IdCliente
--     GROUP BY t1.IdCliente
-- )

-- -- calcula a média
-- SELECT avg(qtdeDias),
--        max(qtdeDias),
--        min(qtdeDias)
-- FROM tb_cliente_dias

-- WITH tb_clientes_janeiro AS (
--     SELECT DISTINCT IdCliente
--     FROM transacoes
--     WHERE dtCriacao >= '2025-01-01'
--     AND dtCriacao < '2025-02-01'
-- ),

-- tb_clientes_curso AS (
--     SELECT DISTINCT IdCliente
--     FROM transacoes
--     WHERE DtCriacao >= '2025-08-25'
--     AND DtCriacao < '2025-08-30'
-- )

-- SELECT count(t1.IdCliente) AS clienteJaneiro,
--        count(t2.IdCliente) AS clienteCurso

-- FROM tb_clientes_janeiro AS t1

-- LEFT JOIN tb_clientes_curso AS t2
-- ON t1.IdCliente = t2.IdCliente
-- ;

-- WITH tb_clientes_janeiro AS (
--     SELECT DISTINCT IdCliente
--     FROM transacoes
--     WHERE dtCriacao >= '2025-01-01'
--     AND dtCriacao < '2025-02-01'
-- )

-- SELECT count(distinct t1.IdCliente) AS clienteJaneiro,
--        count(distinct t2.IdCliente) AS clienteCurso

-- FROM tb_clientes_janeiro AS t1

-- LEFT JOIN transacoes AS t2
-- ON t1.IdCliente = t2.IdCliente
-- AND t2.DtCriacao >= '2025-08-25'
-- AND t2.DtCriacao < '2025-08-30'
-- ;

-- Qual o dia com maior engajamento de cada aluno que iniciou o curso no dia 01?

WITH alunos_dia01 AS (
    SELECT DISTINCT IdCliente
    FROM transacoes
    WHERE  substr(DtCriacao,1,10) = '2025-08-25'
),

tb_dia_cliente AS (

    SELECT t1.IdCliente,
        substr(t2.DtCriacao, 1,10) AS dtDia,
        count(*) AS qtdeInteracoes

    FROM alunos_dia01 AS t1

    LEFT JOIN transacoes AS t2
    ON t1.IdCliente = t2.IdCliente
    AND t2.DtCriacao >= '2025-08-25'
    AND t2.DtCriacao < '2025-08-30'

    GROUP BY t1.IdCliente, substr(t2.DtCriacao, 1,10)

    ORDER BY t1.IdCliente, dtDia

),

tb_rn AS (

    SELECT *,
        row_number() OVER (PARTITION BY IdCliente ORDER BY qtdeInteracoes DESC, dtDia) AS rn
    FROM tb_dia_cliente

)

SELECT *
FROM tb_rn
WHERE rn = 1