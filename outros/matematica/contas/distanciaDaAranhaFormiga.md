# problema

Considere um poste perpendicular ao plano do chão. Uma aranha está no chão, a 2 m do poste, e começa a se aproximar dele no mesmo instante em que uma formiga começa a subir no poste. A velocidade da aranha é de 16 cm por segundo e a da formiga é de 10 cm por segundo. Após 5 segundos do início dos movimentos, a menor distância entre a aranha e a formiga é


## primero jeito de resolver

Vamos resolver o problema passo a passo.

### Dados fornecidos:

* **Distância inicial da aranha ao poste**: 2 metros = 200 cm
* **Velocidade da aranha**: 16 cm/s
* **Velocidade da formiga**: 10 cm/s
* **Tempo após o início dos movimentos**: 5 segundos

### Passo 1: Determinar as posições após 5 segundos

1. **Posição da aranha após 5 segundos**:
   A aranha começa a 200 cm de distância do poste e se aproxima dele a uma velocidade de 16 cm/s. Em 5 segundos, ela terá percorrido:

   $$
   \text{Distância percorrida pela aranha} = 16 \, \text{cm/s} \times 5 \, \text{s} = 80 \, \text{cm}
   $$

   Logo, a aranha estará a uma distância de:

   $$
   200 \, \text{cm} - 80 \, \text{cm} = 120 \, \text{cm}
   $$

   Portanto, após 5 segundos, a aranha estará a 120 cm do poste.

2. **Posição da formiga após 5 segundos**:
   A formiga começa a subir o poste a uma velocidade de 10 cm/s. Em 5 segundos, ela terá subido:

   $$
   \text{Distância percorrida pela formiga} = 10 \, \text{cm/s} \times 5 \, \text{s} = 50 \, \text{cm}
   $$

   Então, a formiga estará a 50 cm acima do chão.

### Passo 2: Calcular a menor distância entre a aranha e a formiga

Agora, temos que calcular a menor distância entre a aranha (a 120 cm do poste no chão) e a formiga (a 50 cm de altura no poste). Como a aranha está a uma distância horizontal do poste e a formiga está em uma altura vertical, podemos usar o **Teorema de Pitágoras** para calcular a distância entre elas. A fórmula é:

$$
d = \sqrt{x^2 + y^2}
$$

Onde:

* $x$ é a distância horizontal da aranha até o poste (120 cm),
* $y$ é a altura da formiga no poste (50 cm).

Substituindo os valores:

$$
d = \sqrt{120^2 + 50^2} = \sqrt{14400 + 2500} = \sqrt{16900} \approx 130 \, \text{cm}
$$

### Resposta:

A menor distância entre a aranha e a formiga após 5 segundos é **130 cm**.



## segundo jeito de resolver

analisa esse raciocinio: t(s)... Ea(cm) <= distancia da aranha ao pé do poste
0........ 200,0
1.........184;0
2.........168,0
t..........Ea = 200-16t (sem dúvida até aqui)

t(s)...... Ef(cm) <= distancia da formiga ao pé do poste
0..........,00,0
1.......... 10,0
2...........20,0
t............Ef = 10t

Vamos fazer um esboço:
d²=Ea² + Ef²
d² =(200-16t)² + (10t)²
d² = 40000+256t² -6400t +100t²
d² = 356t² - 6400t + 40000
Para t=5s...
d² =356*25-6400*5+40000= 8900-32000+40000 = 16900
d=raiz(16900) = 130 cm= 1,3 m