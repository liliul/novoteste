Para calcular a **raiz quadrada de monômios com expoentes ímpares**, siga estas regras passo a passo. A chave é separar os expoentes ímpares em uma parte par (que forma um quadrado perfeito) e outra parte unitária (que fica sob o radical). Assumimos que as variáveis são **não negativas** (\(x \geq 0\)) para evitar valores absolutos.

---

### **Regras Gerais para Variáveis com Expoentes Ímpares**
Seja \(x^k\) uma variável com expoente ímpar (\(k\) ímpar):
1. **Separe o expoente em um número par e 1**:  
   \[
   x^k = x^{(k-1)} \cdot x^1
   \]
   - \((k-1)\) é **par** → forma um quadrado perfeito.  
2. **Aplique a raiz quadrada**:  
   \[
   \sqrt{x^k} = \sqrt{x^{(k-1)} \cdot x} = \sqrt{x^{(k-1)}} \cdot \sqrt{x} = x^{(k-1)/2} \cdot \sqrt{x}
   \]

---

### **Passo a Passo para Monômios**
**Exemplo**: \(\sqrt{72x^5 y^3}\)  
#### **Passo 1: Simplifique o coeficiente**  
- Fatorize o coeficiente em quadrados perfeitos:  
  \[
  72 = 36 \times 2 = \mathbf{6^2 \times 2} \quad \Rightarrow \quad \sqrt{72} = \sqrt{6^2 \times 2} = 6\sqrt{2}
  \]

#### **Passo 2: Simplifique as variáveis com expoentes ímpares**  
- **Para \(x^5\)** (expoente 5 é ímpar):  
  \[
  x^5 = x^{4} \cdot x^{1} = (x^2)^2 \cdot x \quad \Rightarrow \quad \sqrt{x^5} = x^{2} \sqrt{x}
  \]  
- **Para \(y^3\)** (expoente 3 é ímpar):  
  \[
  y^3 = y^{2} \cdot y^{1} \quad \Rightarrow \quad \sqrt{y^3} = y \sqrt{y}
  \]

#### **Passo 3: Combine tudo**  
\[
\sqrt{72x^5 y^3} = 6\sqrt{2} \cdot x^2 \sqrt{x} \cdot y \sqrt{y} = \mathbf{6x^2 y \sqrt{2xy}}
\]

---

### **Mais Exemplos**
#### **Exemplo 1**: \(\sqrt{18a^7}\)  
- Coeficiente: \(\sqrt{18} = \sqrt{9 \times 2} = 3\sqrt{2}\)  
- Variável: \(\sqrt{a^7} = \sqrt{a^{6} \cdot a} = a^{3} \sqrt{a}\)  
- Resultado: \(\mathbf{3a^3 \sqrt{2a}}\)  

#### **Exemplo 2**: \(\sqrt{50b^3 c^9}\)  
- Coeficiente: \(\sqrt{50} = \sqrt{25 \times 2} = 5\sqrt{2}\)  
- \(b^3\): \(\sqrt{b^3} = b \sqrt{b}\)  
- \(c^9\): \(\sqrt{c^9} = \sqrt{c^{8} \cdot c} = c^4 \sqrt{c}\)  
- Resultado: \(\mathbf{5b c^4 \sqrt{2bc}}\)  

---

### **Casos Especiais**
#### **1. Expoente ímpar negativo**:  
Transforme em fração.  
- Exemplo: \(\sqrt{x^{-3}} = \sqrt{\frac{1}{x^3}} = \frac{1}{x \sqrt{x}}\)  

#### **2. Coeficiente fracionário**:  
Aplique a raiz ao numerador e denominador.  
- Exemplo: \(\sqrt{\frac{1}{8}x^5} = \frac{\sqrt{x^5}}{\sqrt{8}} = \frac{x^2 \sqrt{x}}{2\sqrt{2}} = \frac{x^2 \sqrt{2x}}{4}\)  

---

### **Tabela Resumo**
| Monômio          | Passo de Simplificação              | Resultado Final       |
|------------------|-------------------------------------|-----------------------|
| \(\sqrt{x^3}\)   | \(x^{(3-1)/2} \sqrt{x} = x \sqrt{x}\) | \(x \sqrt{x}\)        |
| \(\sqrt{a^7}\)   | \(a^{(7-1)/2} \sqrt{a} = a^3 \sqrt{a}\) | \(a^3 \sqrt{a}\)      |
| \(\sqrt{8y^5}\)  | \(2\sqrt{2} \cdot y^2 \sqrt{y}\)    | \(2y^2 \sqrt{2y}\)    |

---

### **Atenção!**
- **Domínio**: Em \(\sqrt{x}\), \(x \geq 0\) (em números reais).  
- **Expoentes pares**: Se houver variáveis com expoentes pares, simplifique normalmente (ex: \(\sqrt{x^4} = x^2\)).  
- **Monômios mistos**: Separe cada parte do monômio (coeficiente e variáveis).

---

### **Exercício Prático**
Simplifique \(\sqrt{200z^9}\):  
- **Solução**:  
  \(\sqrt{200} = 10\sqrt{2}\),  
  \(\sqrt{z^9} = z^{4} \sqrt{z}\) (pois \(9-1=8\), e \(8/2=4\)),  
  Resultado: \(\mathbf{10z^4 \sqrt{2z}}\).
