O **Triângulo de Pascal** é uma ferramenta visual poderosa na análise combinatória e na álgebra, especialmente para trabalhar com **combinações** e **coeficientes binomiais**. Vamos explorar sua construção, propriedades e aplicações passo a passo:

---

### **1. Construção do Triângulo de Pascal**
Cada linha do triângulo corresponde aos coeficientes binomiais \( C(n, k) \), que representam o número de combinações de \( n \) elementos tomados \( k \) a \( k \).  
- **Regra**: Cada número é a soma dos dois números diretamente acima dele.  
- **Linha 0**: \( 1 \) (topo).  
- **Linha 1**: \( 1 \quad 1 \).  
- **Linha 2**: \( 1 \quad 2 \quad 1 \).  
- **Linha 3**: \( 1 \quad 3 \quad 3 \quad 1 \).  

**Exemplo de construção até a 4ª linha**:  
```
         1          ← Linha 0 (C(0,0))
       1   1        ← Linha 1 (C(1,0), C(1,1))
     1   2   1      ← Linha 2 (C(2,0), C(2,1), C(2,2))
   1   3   3   1    ← Linha 3 (C(3,0), ..., C(3,3))
 1   4   6   4   1  ← Linha 4 (C(4,0), ..., C(4,4))
```

---

### **2. Relação com Combinações \( C(n, k) \)**  
O número na posição \( k \) da linha \( n \) é igual a \( C(n, k) \).  
**Fórmula**:  
\[
C(n, k) = \frac{n!}{k!(n - k)!}
\]  
**Exemplo**:  
Na linha 4, posição 2:  
\[
C(4, 2) = \frac{4!}{2!2!} = 6 \quad (\text{valor no triângulo}).
\]

---

### **3. Propriedades do Triângulo de Pascal**
| **Propriedade**                  | **Exemplo**                          |  
|-----------------------------------|---------------------------------------|  
| **Simetria**                      | \( C(n, k) = C(n, n - k) \)           |  
| **Soma da linha \( n \)**         | \( C(n,0) + C(n,1) + ... + C(n,n) = 2^n \) |  
| **Números triangulares**          | Na terceira diagonal: 1, 3, 6, 10, ... |  
| **Relação de Stifel**             | \( C(n, k) + C(n, k+1) = C(n+1, k+1) \) |  

---

### **4. Aplicações na Análise Combinatória**
#### **a) Contagem de Combinações**  
Calcular quantas formas há de escolher \( k \) elementos de um conjunto de \( n \):  
- **Exemplo**: Quantas comissões de 3 pessoas em um grupo de 5?  
  Resposta: \( C(5, 3) = 10 \) (linha 5, posição 3).

#### **b) Expansão Binomial**  
Os coeficientes do triângulo são usados em expressões como \( (a + b)^n \):  
\[
(a + b)^4 = 1a^4 + 4a^3b + 6a^2b^2 + 4ab^3 + 1b^4
\]  
(Coeficientes da linha 4: 1, 4, 6, 4, 1).

#### **c) Probabilidade**  
Calcular probabilidades em experimentos binomiais (ex: lançamento de moedas).  
- **Exemplo**: Probabilidade de obter 2 caras em 4 lançamentos:  
  Casos favoráveis: \( C(4, 2) = 6 \); Total de casos: \( 2^4 = 16 \).  
  Probabilidade: \( \frac{6}{16} = \frac{3}{8} \).

---

### **5. Exemplo Prático: Resolvendo um Problema**
**Problema**: Quantos subconjuntos de 2 elementos existem no conjunto \( \{A, B, C, D\} \)?  

**Solução usando o triângulo**:  
- Linha 4 (correspondente a \( n = 4 \)): \( 1 \quad 4 \quad 6 \quad 4 \quad 1 \).  
- Posição 2 (correspondente a \( k = 2 \)): **6**.  
- Resposta: 6 subconjuntos (\( \{A,B\}, \{A,C\}, \{A,D\}, \{B,C\}, \{B,D\}, \{C,D\} \)).  

---

### **6. Tabela de Coeficientes Binomiais (Até a Linha 5)**
| **Linha (n)** | **Coeficientes \( C(n, k) \)** |  
|---------------|---------------------------------|  
| 0             | 1                              |  
| 1             | 1, 1                           |  
| 2             | 1, 2, 1                        |  
| 3             | 1, 3, 3, 1                     |  
| 4             | 1, 4, 6, 4, 1                  |  
| 5             | 1, 5, 10, 10, 5, 1             |  

---

### **7. Curiosidades**
- **Números de Fibonacci**: A soma das diagonais "quebradas" do triângulo gera a sequência de Fibonacci.  
- **Padrões geométricos**: O triângulo revela padrões como fractais e o Triângulo de Sierpinski.  

---

### **8. Exercícios para Praticar**
1. Qual é o valor de \( C(6, 3) \)?  
   **Resposta**: 20 (linha 6, posição 3).  

2. Expanda \( (x + y)^5 \) usando o triângulo.  
   **Resposta**: \( x^5 + 5x^4y + 10x^3y^2 + 10x^2y^3 + 5xy^4 + y^5 \).  

3. Quantos subconjuntos de 4 elementos existem em um conjunto de 7 elementos?  
   **Resposta**: \( C(7, 4) = 35 \).

---

O Triângulo de Pascal é uma ferramenta versátil que conecta combinatória, álgebra e probabilidade. Com prática, você dominará seus padrões e aplicações! 😊