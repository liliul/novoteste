-- SELECT
-- count(*),
-- count(1),
-- count(IdCliente),
-- count(DtCriacao),
-- count(DtAtualizacao)
-- FROM clientes

-- SELECT
-- DISTINCT FlTwitch,FlEmail
-- FROM clientes

-- SELECT
-- count(DISTINCT IdCliente)
-- FROM clientes

-- SELECT
-- DISTINCT FlTwitch,FlEmail
-- FROM clientes

SELECT 
count(*),
count(DISTINCT IdTransacao),
count(DISTINCT IdCliente)
FROM transacoes
WHERE DtCriacao >= '2025-07-01'
AND DtCriacao < '2025-08-01'

ORDER BY DtCriacao DESC