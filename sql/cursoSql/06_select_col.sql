-- SELECT 
-- IdCliente, 
-- QtdePontos,
-- QtdePontos + 10 AS QtdePontosPlus10,
-- QtdePontos * 2 AS QtdePontosDouble
-- FROM
-- clientes
-- LIMIT 10

-- SELECT 
-- IdCliente, 
-- DtCriacao,
-- -- substr(DtCriacao, 1, 10) 
-- -- substr(DtCriacao, 1, 19) AS DtCriacaoNova
-- datetime(substr(DtCriacao, 1, 19)) AS DtCriacaoNova,
-- strftime('%w', datetime(substr(DtCriacao, 1, 19))) AS diaSemana


-- FROM
-- clientes
-- LIMIT 10

-- SELECT 
-- IdCliente, 
-- QtdePontos
-- FROM
-- clientes
-- -- WHERE QtdePontos BETWEEN 100 AND 200
-- WHERE QtdePontos >= 100 AND QtdePontos <= 200
