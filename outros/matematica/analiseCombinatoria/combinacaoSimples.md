# A orden não importa

Quando a **ordem não importa**, o problema de contagem é chamado de **combinação**. Ou seja, em uma **combinação**, estamos interessados apenas nos elementos selecionados, e não na ordem em que eles são organizados.

### Definição de Combinação
A **combinação** de \(k\) elementos retirados de um conjunto de \(n\) elementos, onde a ordem não importa, é dada pela fórmula:

\[
C(n, k) = \frac{n!}{k!(n - k)!}
\]

Onde:
- \(n!\) é o fatorial de \(n\), que representa o número total de formas de organizar os \(n\) elementos.
- \(k!\) é o fatorial de \(k\), que ajusta a fórmula para contar apenas as seleções de \(k\) elementos, sem considerar a ordem.
- \((n - k)!\) é o fatorial da diferença entre o total de elementos \(n\) e os elementos escolhidos \(k\), para corrigir a contagem.

### Diferença entre Arranjos e Combinações
- **Arranjo simples**: A ordem dos elementos **importa**.
- **Combinação**: A ordem dos elementos **não importa**.

### Exemplo 1: Combinações de 3 Elementos em um Conjunto de 5

Vamos calcular o número de **combinações** de 3 elementos retirados de um conjunto de 5 elementos (\(A = \{1, 2, 3, 4, 5\}\)).

A fórmula seria:

\[
C(5, 3) = \frac{5!}{3!(5 - 3)!} = \frac{5!}{3!2!} = \frac{5 \times 4 \times 3 \times 2 \times 1}{(3 \times 2 \times 1) \times (2 \times 1)} = \frac{120}{6 \times 2} = \frac{120}{12} = 10
\]

Portanto, o número de combinações de 3 elementos a partir de 5 elementos é **10**.

### Exemplo 2: Combinações de 2 Elementos em um Conjunto de 4

Agora, suponha que temos um conjunto \(B = \{a, b, c, d\}\) e queremos calcular o número de combinações de 2 elementos (\(k = 2\)).

A fórmula seria:

\[
C(4, 2) = \frac{4!}{2!(4 - 2)!} = \frac{4!}{2!2!} = \frac{4 \times 3 \times 2 \times 1}{(2 \times 1) \times (2 \times 1)} = \frac{24}{2 \times 2} = \frac{24}{4} = 6
\]

Então, o número de combinações de 2 elementos a partir de 4 elementos é **6**.

### Observação Importante:
- **Combinações**: A ordem **não importa**. Por exemplo, a combinação \( (1, 2) \) é a mesma que \( (2, 1) \), enquanto no caso de **arranjos** isso seria considerado diferente.

### Resumo da Fórmula:
\[
C(n, k) = \frac{n!}{k!(n - k)!}
\]

Onde:
- \(n\) = número total de elementos do conjunto.
- \(k\) = número de elementos a serem escolhidos, sem se importar com a ordem.
