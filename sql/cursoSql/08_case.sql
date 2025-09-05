-- SELECT 
-- IdCliente,
-- QtdePontos

-- FROM 
-- clientes
-- ORDER BY QtdePontos DESC

-- SELECT 
-- IdCliente,
-- QtdePontos,
-- CASE
--     WHEN QtdePontos <= 500 THEN 'Ponei'
--     WHEN QtdePontos <= 1000 THEN 'Ponei Premium'
--     WHEN QtdePontos <= 5000 THEN 'Mago Aprendis'
--     WHEN QtdePontos <= 10000 THEN 'Mago Mestre'
--     ELSE 'Mago Supremo'
-- END AS nomeGrupo
-- FROM 
-- clientes
-- ORDER BY QtdePontos DESC

SELECT 
IdCliente,
QtdePontos,
CASE
    WHEN QtdePontos <= 500 THEN 'Ponei'
    WHEN QtdePontos <= 1000 THEN 'Ponei Premium'
    WHEN QtdePontos <= 5000 THEN 'Mago Aprendis'
    WHEN QtdePontos <= 10000 THEN 'Mago Mestre'
    ELSE 'Mago Supremo'
END AS nomeGrupo,
CASE 
    WHEN QtdePontos <= 1000 THEN 1
    ELSE 0
END AS FlPonei,

CASE 
    WHEN QtdePontos > 1000 THEN 1
    ELSE 0 
END AS flMago

FROM 
clientes
WHERE FlPonei = 1
ORDER BY QtdePontos DESC