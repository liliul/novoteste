SELECT *
FROM
clientes
-- ORDER BY QtdePontos 
-- ORDER BY QtdePontos DESC
-- ORDER BY QtdePontos, QtdePontos DESC
-- ORDER BY QtdePontos ASC, QtdePontos DESC

WHERE FlTwitch = 1
ORDER BY DtCriacao ASC, QtdePontos DESC
LIMIT 5
