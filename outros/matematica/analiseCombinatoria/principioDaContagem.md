O **Princípio Fundamental da Contagem** (ou regra do produto) é um dos conceitos mais simples, mas poderosos, na análise combinatória. Ele afirma que, se um evento pode ocorrer de **m** maneiras e um segundo evento pode ocorrer de **n** maneiras, então o número total de formas de os dois eventos ocorrerem em sequência é **m × n**.

Ou seja, se você tem duas ou mais escolhas que acontecem em sequência, você multiplica o número de opções de cada uma delas.

Aqui estão alguns exemplos simples para ilustrar o uso desse princípio:

---

### **Exemplo 1: Formas de escolher uma roupa**

Imagine que você tem:

* 3 camisetas (C1, C2, C3)
* 2 calças (P1, P2)
* 2 pares de sapatos (S1, S2)

Quantas diferentes combinações de roupas você pode usar?

**Solução:**

* Você pode escolher 1 camiseta de 3 opções.
* Para cada camiseta que você escolher, você pode escolher 1 calça de 2 opções.
* Para cada combinação de camiseta e calça, você pode escolher 1 par de sapatos de 2 opções.

Usando o **Princípio Fundamental da Contagem**:

$$
\text{Total de combinações} = 3 \times 2 \times 2 = 12
$$

Portanto, existem 12 combinações diferentes de roupas que você pode usar.

---

### **Exemplo 2: Configuração de um número de telefone**

Suponha que você está criando um número de telefone com 3 dígitos. Cada dígito pode ser qualquer número de 0 a 9. Quantos números diferentes de telefone podem ser formados?

**Solução:**

* Para o primeiro dígito, você tem 10 opções (0 a 9).
* Para o segundo dígito, você tem também 10 opções (0 a 9).
* Para o terceiro dígito, você tem 10 opções (0 a 9).

Assim, o número total de números de telefone possíveis será:

$$
\text{Total de números de telefone} = 10 \times 10 \times 10 = 1.000
$$

Portanto, você pode formar **1.000** números de telefone diferentes.

---

### **Exemplo 3: Escolhendo um sabor de sorvete e uma cobertura**

Imagine que você está em uma sorveteria e pode escolher entre:

* 4 sabores de sorvete
* 3 tipos de cobertura

Quantas diferentes combinações de sorvete e cobertura você pode escolher?

**Solução:**

* Para o sorvete, você tem 4 opções.
* Para cada sabor de sorvete, você tem 3 opções de cobertura.

Usando o Princípio Fundamental da Contagem:

$$
\text{Total de combinações} = 4 \times 3 = 12
$$

Portanto, existem 12 combinações possíveis de sorvete e cobertura.

---

### **Exemplo 4: Escolha de um time de futebol**

Imagine que você precisa escolher 1 goleiro, 2 zagueiros e 3 atacantes para formar um time de futebol. O time tem:

* 5 opções de goleiros
* 6 opções de zagueiros
* 8 opções de atacantes

Quantas formas diferentes de escolher o time você pode ter?

**Solução:**

* Você tem 5 opções para escolher o goleiro.
* Você tem 6 opções para escolher os zagueiros, mas como precisa escolher 2, o número de formas de fazer isso é dado pela multiplicação das 6 opções para o primeiro zagueiro e 5 para o segundo zagueiro: $6 \times 5$.
* Você tem 8 opções para escolher os atacantes, e precisa escolher 3, então o número de formas é dado por $8 \times 7 \times 6$.

Portanto, o número total de maneiras de escolher o time é:

$$
\text{Total de maneiras} = 5 \times (6 \times 5) \times (8 \times 7 \times 6) = 5 \times 30 \times 336 = 50.400
$$

Existem **50.400** maneiras diferentes de formar o time de futebol.

---

### **Exemplo 5: Planejando um evento**

Você está organizando um evento e precisa fazer uma combinação de 3 coisas:

* Escolher 1 prato (3 opções)
* Escolher 1 bebida (2 opções)
* Escolher 1 sobremesa (4 opções)

Quantas maneiras diferentes de planejar o cardápio para o evento você tem?

**Solução:**

* Você tem 3 opções para o prato.
* Você tem 2 opções para a bebida.
* Você tem 4 opções para a sobremesa.

Usando o Princípio Fundamental da Contagem:

$$
\text{Total de opções} = 3 \times 2 \times 4 = 24
$$

Portanto, existem **24** maneiras diferentes de planejar o cardápio.

---

### Resumo:

O Princípio Fundamental da Contagem funciona muito bem em situações onde você precisa contar o número total de formas de ocorrerem dois ou mais eventos, desde que eles sejam independentes. Se você tiver **m opções** para um evento e **n opções** para outro evento, o número total de combinações possíveis será **m × n**. Essa regra pode ser estendida a mais eventos, multiplicando o número de opções de cada evento.
