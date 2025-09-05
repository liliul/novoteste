-- SELECT 
-- sum(QtdePontos)
-- FROM transacoes
-- WHERE DtCriacao >= '2025-07-01'
-- AND DtCriacao < '2025-08-01'

-- SELECT 
-- sum(QtdePontos)
-- FROM transacoes
-- WHERE DtCriacao >= '2025-07-01'
-- AND DtCriacao < '2025-08-01'
-- AND QtdePontos > 0

-- SELECT 
-- IdTransacao,
-- QtdePontos,
-- CASE
--     WHEN QtdePontos > 0 THEN QtdePontos
-- END AS qtdePontosPositivos,
-- CASE
--     WHEN QtdePontos < 0 THEN QtdePontos
-- END AS qtdePontosNegativos

-- FROM transacoes
-- WHERE DtCriacao >= '2025-07-01'
-- AND DtCriacao < '2025-08-01'
-- ORDER BY QtdePontos

SELECT 
sum(QtdePontos),
sum(CASE
    WHEN QtdePontos > 0 THEN QtdePontos
END) AS qtdePontosPositivos,

sum(CASE
    WHEN QtdePontos < 0 THEN QtdePontos
END) AS qtdePontosNegativos,
    
count(CASE
    WHEN QtdePontos < 0 THEN QtdePontos
END) AS qtdeTransacaoNegativas

FROM transacoes
WHERE DtCriacao >= '2025-07-01'
AND DtCriacao < '2025-08-01'
ORDER BY QtdePontos