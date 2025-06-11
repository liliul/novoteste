Para resolver **expoentes com números decimais**, siga estas regras e métodos passo a passo, cobrindo os principais casos:

---

### **1. Base decimal e expoente INTEIRO**
#### **Caso 1: Expoente positivo**  
- **Calcule a potência normalmente** e ajuste as casas decimais.  
  **Exemplo**: \( (0,3)^2 \)  
  \[
  0,3 \times 0,3 = 0,09
  \]

#### **Caso 2: Expoente negativo**  
- **Inverta a base** e **torne o expoente positivo**, depois calcule.  
  **Exemplo**: \( (0,5)^{-2} \)  
  \[
  \left(\frac{1}{0,5}\right)^2 = \left(\frac{1}{\frac{1}{2}}\right)^2 = 2^2 = 4
  \]

---

### **2. Base INTEIRA e expoente DECIMAL**  
Transforme o expoente decimal em fração:  
\[
a^{m/n} = \sqrt[n]{a^m}
\]

**Exemplos**:  
- \( 8^{0,5} = 8^{1/2} = \sqrt{8} \approx 2,828 \)  
- \( 4^{1,5} = 4^{3/2} = \sqrt{4^3} = \sqrt{64} = 8 \)

---

### **3. Base DECIMAL e expoente DECIMAL**  
#### **Método 1: Converter em fração**  
**Exemplo**: \( (0,25)^{0,5} \)  
\[
0,25 = \frac{1}{4} \quad \Rightarrow \quad \left(\frac{1}{4}\right)^{0,5} = \sqrt{\frac{1}{4}} = \frac{1}{2} = 0,5
\]

#### **Método 2: Usar logaritmos**  
\[
a^b = 10^{b \cdot \log_{10}(a)}
\]  
**Exemplo**: \( (1,5)^{1,2} \)  
\[
\log_{10}(1,5) \approx 0,1761 \quad \Rightarrow \quad 10^{(1,2 \times 0,1761)} \approx 10^{0,2113} \approx 1,628
\]

---

### **4. Regras Práticas e Dicas**  
#### **a) Potências de 10**:  
- \( (0,1)^n = 10^{-n} \)  
  Ex: \( (0,01)^2 = (10^{-2})^2 = 10^{-4} = 0,0001 \)

#### **b) Potências de 0,5**:  
- \( (0,5)^2 = 0,25 \), \( (0,5)^3 = 0,125 \) (metade do valor a cada expoente inteiro).

#### **c) Estimativa rápida**:  
- Se \( 0 < a < 1 \) e \( b > 0 \): resultado é menor que \( a \) (ex: \( (0,6)^{1,5} \approx 0,465 \)).  
- Se \( a > 1 \) e \( b > 0 \): resultado é maior que \( a \) (ex: \( (1,2)^{1,5} \approx 1,314 \)).

---

### **5. Tabela de Exemplos Comuns**
| Expressão             | Método de Resolução          | Resultado               |
|-----------------------|------------------------------|-------------------------|
| \( (0,2)^3 \)         | Multiplicação direta         | \( 0,008 \)             |
| \( (1,1)^2 \)         | \( 1,1 \times 1,1 \)         | \( 1,21 \)              |
| \( 9^{0,5} \)         | \( \sqrt{9} \)               | \( 3 \)                 |
| \( (0,04)^{-0,5} \)   | \( \frac{1}{\sqrt{0,04}} = \frac{1}{0,2} \) | \( 5 \)       |
| \( (2,5)^{1,2} \)     | Calculadora/logaritmo        | \( \approx 3,003 \)     |

---

### **6. Aplicações Práticas**  
- **Juros compostos**: \( C \cdot (1 + i)^t \) (ex: \( R\$ 1000 \cdot (1,05)^{2,5} \)).  
- **Crescimento exponencial**: População = \( P_0 \cdot e^{rt} \) (usa exponencial natural).

---

### **Exercício Resolvido**  
**Calcule \( (0,8)^{-1,5} \):**  
1. Converta o expoente: \(-1,5 = -\frac{3}{2}\).  
2. Inverta a base:  
   \[
   \left(\frac{1}{0,8}\right)^{1,5} = (1,25)^{1,5}
   \]  
3. Resolva:  
   \[
   1,25^{3/2} = \sqrt{1,25^3} = \sqrt{(1,25 \times 1,25 \times 1,25)} = \sqrt{1,953125} \approx 1,397
   \]

---
