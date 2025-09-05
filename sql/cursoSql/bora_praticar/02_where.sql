-- SELECT * 
-- FROM
-- transacoes
-- WHERE QtdePontos = 50 

-- SELECT 
-- IdCliente,
-- QtdePontos 
-- FROM
-- clientes
-- WHERE QtdePontos >= 500 

-- SELECT * 
-- FROM
-- transacoes
-- WHERE QtdePontos = 1 

-- SELECT * 
-- FROM
-- transacoes
-- WHERE QtdePontos = 0

SELECT 
IdTransacao,
DtCriacao,
strftime('%w', datetime(substr(DtCriacao, 1, 19))) AS diaSemana
FROM
transacoes 
-- WHERE diaSemana IN ("6","0")
WHERE 
strftime('%w', datetime(substr(DtCriacao, 1, 19))) IN ("6","0")

