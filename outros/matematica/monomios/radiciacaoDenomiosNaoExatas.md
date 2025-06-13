Para realizar a **radiciação de monômios com raízes não exatas**, siga os passos abaixo. O objetivo é simplificar ao máximo, extraindo fatores que são potências perfeitas do índice do radical. Quando a raiz não é exata (ou seja, não resulta em um número inteiro ou expoente inteiro), parte da expressão permanece sob o radical.

---

### **Passo a Passo para Simplificar**
#### **1. Fatorar o coeficiente numérico e extrair fatores perfeitos**
- Decomponha o coeficiente em fatores primos e identifique grupos de fatores que formem potências perfeitas do índice do radical.
- **Exemplo**: \(\sqrt[3]{16}\)  
  \(16 = 2^4 = 2^3 \cdot 2\) → \(\sqrt[3]{16} = \sqrt[3]{2^3 \cdot 2} = 2 \sqrt[3]{2}\).

#### **2. Simplificar as variáveis**
- Para cada variável, divida o expoente pelo índice da raiz:
  - **Quociente (\(q\))**: Expoente fora do radical.
  - **Resto (\(r\))**: Expoente dentro do radical (onde \(0 \leq r < \text{índice}\)).
- Fórmula geral:  
  \[
  \sqrt[n]{x^k} = x^{k/n} = x^q \cdot \sqrt[n]{x^r} \quad \text{com} \quad k = q \cdot n + r.
  \]

#### **3. Combinar todos os fatores**
- Junte os coeficientes e variáveis simplificados, mantendo os fatores não perfeitos sob o mesmo radical.

---

### **Exemplos Práticos**
#### **Exemplo 1**: \(\sqrt{50x^4 y^3}\) (raiz quadrada, índice 2)  
- **Coeficiente**: \(\sqrt{50} = \sqrt{25 \cdot 2} = 5\sqrt{2}\).
- **Variáveis**:
  - \(x^4\): \(\sqrt{x^4} = x^{4/2} = x^2\) (expoente par → sai totalmente).
  - \(y^3\): \(\sqrt{y^3} = y^{3/2} = y \sqrt{y}\) (expoente ímpar → \(q = 1\), \(r = 1\)).
- **Resultado**: \(5\sqrt{2} \cdot x^2 \cdot y \sqrt{y} = \mathbf{5x^2 y \sqrt{2y}}\).

#### **Exemplo 2**: \(\sqrt[3]{54a^5 b^2}\) (raiz cúbica, índice 3)  
- **Coeficiente**: \(\sqrt[3]{54} = \sqrt[3]{27 \cdot 2} = 3\sqrt[3]{2}\).
- **Variáveis**:
  - \(a^5\): \(5 \div 3 = 1\) (quociente), resto \(2\) → \(\sqrt[3]{a^5} = a \sqrt[3]{a^2}\).
  - \(b^2\): \(2 \div 3 = 0\) (quociente), resto \(2\) → \(\sqrt[3]{b^2} = \sqrt[3]{b^2}\).
- **Resultado**: \(3\sqrt[3]{2} \cdot a \sqrt[3]{a^2} \cdot \sqrt[3]{b^2} = \mathbf{3a \sqrt[3]{2a^2 b^2}}\).

#### **Exemplo 3**: \(\sqrt{7x^3 y}\) (raiz não exata)  
- **Coeficiente**: \(\sqrt{7}\) (não pode ser simplificado).
- **Variáveis**:
  - \(x^3\): \(\sqrt{x^3} = x \sqrt{x}\).
  - \(y\): \(\sqrt{y}\) (mantido).
- **Resultado**: \(\sqrt{7} \cdot x \sqrt{x} \cdot \sqrt{y} = \mathbf{x \sqrt{7xy}}\).

---

### **Casos Especiais**
#### **1. Expoentes negativos**
- Transforme em fração e aplique as regras:  
  \[
  \sqrt{x^{-k}} = \frac{1}{\sqrt{x^k}} \quad \text{ou} \quad x^{-k/n} = \frac{1}{x^{k/n}}.
  \]
- **Exemplo**: \(\sqrt{x^{-3}} = \frac{1}{\sqrt{x^3}} = \frac{1}{x \sqrt{x}}\).

#### **2. Índice par e variáveis negativas**
- Em \(\mathbb{R}\), a raiz de índice par só é definida se as variáveis forem **não negativas** (\(x \geq 0\)).
- **Exemplo**: \(\sqrt{x^2} = |x|\), mas se \(x \geq 0\), \(\sqrt{x^2} = x\).

---

### **Tabela Resumo para Variáveis**
| Expressão          | Índice | Expoente (\(k\)) | Quociente (\(q\)) | Resto (\(r\)) | Simplificação               |
|--------------------|--------|------------------|-------------------|---------------|-----------------------------|
| \(\sqrt{x^5}\)     | 2      | 5                | 2                 | 1             | \(x^2 \sqrt{x}\)           |
| \(\sqrt[3]{y^7}\)  | 3      | 7                | 2                 | 1             | \(y^2 \sqrt[3]{y}\)        |
| \(\sqrt[4]{z^{10}}\)| 4      | 10               | 2                 | 2             | \(z^2 \sqrt[4]{z^2}\)      |
| \(\sqrt{w^3}\)     | 2      | 3                | 1                 | 1             | \(w \sqrt{w}\)             |

---

### **Dicas Importantes**
1. **Simplifique antes de extrair**:  
   Reduza frações nos expoentes (ex: \(\sqrt[4]{x^2} = \sqrt{x}\)).  
2. **Combine radicais**:  
   \(\sqrt{a} \cdot \sqrt{b} = \sqrt{ab}\).  
3. **Monômios complexos**:  
   Aplique as regras a cada variável separadamente.  
4. **Use fatoração**:  
   Sempre decomponha coeficientes grandes (ex: 72 = 36 × 2).

---

### **Exercício Prático**
Simplifique \(\sqrt[3]{250 m^4 n^9}\):  
- **Solução**:  
  - Coeficiente: \(\sqrt[3]{250} = \sqrt[3]{125 \cdot 2} = 5\sqrt[3]{2}\).  
  - \(m^4\): \(4 \div 3 = 1\) (quociente), resto \(1\) → \(m \sqrt[3]{m}\).  
  - \(n^9\): \(9 \div 3 = 3\) (quociente), resto \(0\) → \(n^3\).  
  - Resultado: \(\mathbf{5m n^3 \sqrt[3]{2m}}\).

---

Se precisar de valores numéricos aproximados, use uma calculadora, mas em álgebra, a forma simplificada com radicais é a resposta exata!