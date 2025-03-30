O **desvio padrão** é uma medida estatística que quantifica a **dispersão** ou variação de um conjunto de dados em relação à sua média. Quanto maior o desvio padrão, mais espalhados estão os dados. Vamos explorar passo a passo, com exemplos práticos:

---

### **1. Conceito e Fórmula**
O desvio padrão (\(\sigma\) para população, \(s\) para amostra) é calculado como a **raiz quadrada da variância**.  
**Fórmula para população**:
\[
\sigma = \sqrt{\frac{\sum_{i=1}^{n} (x_i - \mu)^2}{n}}
\]
**Fórmula para amostra**:
\[
s = \sqrt{\frac{\sum_{i=1}^{n} (x_i - \bar{x})^2}{n - 1}}
\]
- \(x_i\): Cada valor do conjunto.
- \(\mu\) ou \(\bar{x}\): Média dos dados.
- \(n\): Número de observações.

---

### **2. Passo a Passo para Calcular**
**Exemplo**: Calcule o desvio padrão dos números [4, 8, 6, 5, 7] (tratando como **amostra**).

#### **Passo 1: Calcule a média (\(\bar{x}\))**
\[
\bar{x} = \frac{4 + 8 + 6 + 5 + 7}{5} = \frac{30}{5} = 6
\]

#### **Passo 2: Calcule os desvios em relação à média**
| \(x_i\) | \(x_i - \bar{x}\) | \((x_i - \bar{x})^2\) |
|---------|--------------------|------------------------|
| 4       | \(4 - 6 = -2\)     | 4                      |
| 8       | 2                  | 4                      |
| 6       | 0                  | 0                      |
| 5       | -1                 | 1                      |
| 7       | 1                  | 1                      |

#### **Passo 3: Some os quadrados dos desvios**
\[
\sum (x_i - \bar{x})^2 = 4 + 4 + 0 + 1 + 1 = 10
\]

#### **Passo 4: Calcule a variância**
\[
\text{Variância (amostra)} = \frac{10}{5 - 1} = 2,5
\]

#### **Passo 5: Tire a raiz quadrada para obter o desvio padrão**
\[
s = \sqrt{2,5} \approx 1,58
\]

---

### **3. Interpretação**
- **Desvio padrão baixo** (ex: 1,58): Os dados estão próximos da média.  
- **Desvio padrão alto** (ex: 10): Os dados estão mais dispersos.  

**No exemplo acima**, os números [4, 8, 6, 5, 7] variam, em média, **1,58 unidades** em torno da média 6.

---

### **4. Aplicações Práticas**
- **Qualidade**: Controle de variação em processos industriais.  
- **Finanças**: Medida de risco em investimentos (alta volatilidade = alto desvio padrão).  
- **Ciências**: Análise de precisão em experimentos.  

---

### **5. Desvio Padrão vs. Variância**
| **Medida**       | **Fórmula**                          | **Unidade**            |  
|------------------|--------------------------------------|------------------------|  
| **Variância**    | \(\frac{\sum (x_i - \bar{x})^2}{n}\) | Unidades ao quadrado   |  
| **Desvio Padrão**| \(\sqrt{\text{Variância}}\)          | Mesma unidade dos dados|  

---

### **6. Exemplo com Dados Agrupados**
**Problema**: Calcule o desvio padrão para a tabela abaixo (amostra):

| **Notas** | **Frequência (\(f_i\))** |
|-----------|--------------------------|
| 5         | 2                        |
| 6         | 3                        |
| 7         | 4                        |

**Solução**:  
1. Calcule a média ponderada (\(\bar{x} = 6,2\)).  
2. Use a fórmula para dados agrupados:  
   \[
   s = \sqrt{\frac{\sum f_i (x_i - \bar{x})^2}{n - 1}}
   \]  
3. Resultado: \(s \approx 0,87\).

---

### **7. Dicas para Cálculo**
1. **Use calculadoras científicas** ou planilhas (Excel: `=DESVPAD.A()` para amostra).  
2. **Para população**, divida por \(n\) em vez de \(n-1\).  
3. **Dados extremos** afetam significativamente o desvio padrão.  

---

Compreender o desvio padrão ajuda a tomar decisões baseadas na consistência ou variabilidade dos dados. Pratique com exemplos reais! 😊