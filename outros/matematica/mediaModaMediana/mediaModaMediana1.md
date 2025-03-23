Para dominar **média, moda e mediana** do zero ao avançado, você precisa entender conceitos básicos, propriedades, fórmulas e aplicações práticas. Vamos explorar tudo isso passo a passo:

---

### **1. Conceitos Básicos**
#### **a) Média (Média Aritmética)**
- **Definição**: Soma de todos os valores dividida pelo número de valores.
- **Fórmula**:
  \[
  \text{Média} = \frac{\sum_{i=1}^{n} x_i}{n}
  \]
  Onde \(x_i\) são os valores e \(n\) é o número de valores.
- **Exemplo**: Para os números 2, 4, 6:
  \[
  \text{Média} = \frac{2 + 4 + 6}{3} = 4.
  \]

#### **b) Moda**
- **Definição**: Valor que aparece com maior frequência em um conjunto de dados.
- **Exemplo**: No conjunto 2, 4, 4, 6, a moda é **4**.
- **Observação**: Um conjunto pode ter mais de uma moda (bimodal) ou nenhuma moda.

#### **c) Mediana**
- **Definição**: Valor central de um conjunto de dados ordenado.
- **Passo a passo**:
  1. Ordene os valores em ordem crescente ou decrescente.
  2. Se o número de valores (\(n\)) for ímpar, a mediana é o valor central.
  3. Se \(n\) for par, a mediana é a média dos dois valores centrais.
- **Exemplo 1**: Para 2, 4, 6 (ímpar), a mediana é **4**.
- **Exemplo 2**: Para 2, 4, 6, 8 (par), a mediana é \(\frac{4 + 6}{2} = 5\).

---

### **2. Propriedades e Aplicações**
#### **a) Média**
- **Sensível a valores extremos**: Um valor muito alto ou baixo pode distorcer a média.
- **Aplicações**: Calcular notas, salários médios, etc.

#### **b) Moda**
- **Útil para dados categóricos**: Identifica a categoria mais comum.
- **Aplicações**: Moda de cores, tamanhos, etc.

#### **c) Mediana**
- **Robusta a valores extremos**: Não é afetada por outliers.
- **Aplicações**: Salários medianos, preços de imóveis, etc.

---

### **3. Cálculos Avançados**
#### **a) Média Ponderada**
- **Definição**: Média onde cada valor tem um peso diferente.
- **Fórmula**:
  \[
  \text{Média Ponderada} = \frac{\sum_{i=1}^{n} (x_i \times w_i)}{\sum_{i=1}^{n} w_i}
  \]
  Onde \(w_i\) são os pesos.
- **Exemplo**: Notas com pesos: 5 (peso 2), 7 (peso 3), 9 (peso 1):
  \[
  \text{Média Ponderada} = \frac{5 \times 2 + 7 \times 3 + 9 \times 1}{2 + 3 + 1} = \frac{10 + 21 + 9}{6} = \frac{40}{6} \approx 6,67.
  \]

#### **b) Mediana para Dados Agrupados**
- **Passo a passo**:
  1. Calcule a frequência acumulada.
  2. Identifique a classe mediana.
  3. Use a fórmula:
     \[
     \text{Mediana} = L + \left(\frac{\frac{n}{2} - F}{f}\right) \times h
     \]
     Onde:
     - \(L\): Limite inferior da classe mediana.
     - \(n\): Número total de dados.
     - \(F\): Frequência acumulada antes da classe mediana.
     - \(f\): Frequência da classe mediana.
     - \(h\): Amplitude da classe mediana.

#### **c) Moda para Dados Agrupados**
- **Fórmula de Czuber**:
  \[
  \text{Moda} = L + \left(\frac{d_1}{d_1 + d_2}\right) \times h
  \]
  Onde:
  - \(L\): Limite inferior da classe modal.
  - \(d_1\): Diferença entre a frequência da classe modal e a anterior.
  - \(d_2\): Diferença entre a frequência da classe modal e a posterior.
  - \(h\): Amplitude da classe modal.

---

### **4. Exemplos Práticos**
#### **a) Média**
- **Dados**: 10, 20, 30, 40, 50.
- **Cálculo**:
  \[
  \text{Média} = \frac{10 + 20 + 30 + 40 + 50}{5} = \frac{150}{5} = 30.
  \]

#### **b) Moda**
- **Dados**: 2, 4, 4, 6, 8.
- **Moda**: 4 (aparece duas vezes).

#### **c) Mediana**
- **Dados**: 2, 4, 6, 8, 10.
- **Mediana**: 6 (valor central).

---

### **5. Tabela Comparativa**
| **Medida** | **Definição**                          | **Vantagens**                     | **Desvantagens**                  |  
|------------|----------------------------------------|------------------------------------|------------------------------------|  
| **Média**  | Soma dos valores dividida por \(n\).   | Fácil de calcular e interpretar.  | Sensível a valores extremos.       |  
| **Moda**   | Valor mais frequente.                 | Útil para dados categóricos.      | Pode não existir ou ser múltipla. |  
| **Mediana**| Valor central dos dados ordenados.    | Robusta a valores extremos.       | Menos informativa para pequenos conjuntos. |  

---

### **6. Exercícios para Praticar**
1. **Problema**: Calcule a média, moda e mediana de 5, 7, 7, 8, 10.  
   **Resposta**:  
   - Média: \(\frac{5 + 7 + 7 + 8 + 10}{5} = 7,4\).  
   - Moda: 7.  
   - Mediana: 7.

2. **Problema**: Encontre a mediana de 12, 15, 18, 20, 22, 25.  
   **Resposta**: \(\frac{18 + 20}{2} = 19\).

3. **Problema**: Calcule a média ponderada de 5 (peso 2), 7 (peso 3), 9 (peso 1).  
   **Resposta**: \(\frac{5 \times 2 + 7 \times 3 + 9 \times 1}{2 + 3 + 1} = \frac{40}{6} \approx 6,67\).

---

### **7. Dicas para Aprender**
1. **Pratique com dados reais**: Use exemplos do cotidiano, como notas ou preços.  
2. **Domine as fórmulas**: Memorize as principais para cálculos rápidos.  
3. **Use gráficos**: Visualize os dados para entender melhor a distribuição.  

---
