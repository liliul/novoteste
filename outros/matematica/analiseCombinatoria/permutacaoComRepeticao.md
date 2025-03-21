# Permutação com repetição

Vamos calcular o número de **anagramas** da palavra **"BANANA"**, ou seja, o número de diferentes arranjos das letras dessa palavra, levando em conta as repetições.

### Passo 1: Identificar os elementos da palavra
A palavra **"BANANA"** tem 6 letras: B, A, N, A, N, A.

- A letra **B** aparece 1 vez.
- A letra **A** aparece 3 vezes.
- A letra **N** aparece 2 vezes.

### Passo 2: Fórmula de permutação com repetição
A fórmula para calcular permutações com repetição é:

\[
P = \frac{n!}{k_1! \cdot k_2! \cdot \cdots \cdot k_r!}
\]

Onde:
- \( n \) é o número total de elementos (neste caso, 6 letras).
- \( k_1, k_2, \dots, k_r \) são as frequências de repetição de cada elemento distinto.

### Passo 3: Aplicar a fórmula à palavra "BANANA"

Na palavra "BANANA":
- O número total de letras (\( n \)) é 6 (porque temos B, A, N, A, N, A).
- A letra **B** se repete 1 vez, então \( k_1 = 1 \).
- A letra **A** se repete 3 vezes, então \( k_2 = 3 \).
- A letra **N** se repete 2 vezes, então \( k_3 = 2 \).

Aplicando na fórmula:

\[
P = \frac{6!}{1! \cdot 3! \cdot 2!}
\]

### Passo 4: Calcular os fatoriais

Agora, vamos calcular os fatoriais:

- \( 6! = 6 \times 5 \times 4 \times 3 \times 2 \times 1 = 720 \)
- \( 1! = 1 \)
- \( 3! = 3 \times 2 \times 1 = 6 \)
- \( 2! = 2 \times 1 = 2 \)

Então, a expressão fica:

\[
P = \frac{720}{1 \times 6 \times 2} = \frac{720}{12} = 60
\]

### Passo 5: Resultado

Portanto, o número de **anagramas** distintos da palavra **"BANANA"** é **60**.

### Conclusão

O número de anagramas de "BANANA" é **60**. Ou seja, existem 60 maneiras diferentes de rearranjar as letras da palavra "BANANA", levando em consideração as repetições das letras.



# Mais

Vamos calcular o número de **anagramas** da palavra **"ESSA"**, ou seja, o número de diferentes arranjos das letras da palavra, levando em conta as repetições.

### Passo 1: Identificar os elementos da palavra
A palavra **"ESSA"** tem 4 letras: E, S, S e A.

- A letra **E** aparece 1 vez.
- A letra **S** aparece 2 vezes.
- A letra **A** aparece 1 vez.

### Passo 2: Fórmula de permutação com repetição
A fórmula para calcular permutações com repetição é:

\[
P = \frac{n!}{k_1! \cdot k_2! \cdot \cdots \cdot k_r!}
\]

Onde:
- \( n \) é o número total de elementos (neste caso, 4 letras).
- \( k_1, k_2, \dots, k_r \) são as frequências de repetição de cada elemento distinto.

### Passo 3: Aplicar a fórmula à palavra "ESSA"

Na palavra "ESSA":
- O número total de letras (\( n \)) é 4 (porque temos E, S, S e A).
- A letra **E** se repete 1 vez, então \( k_1 = 1 \).
- A letra **S** se repete 2 vezes, então \( k_2 = 2 \).
- A letra **A** se repete 1 vez, então \( k_3 = 1 \).

Aplicando na fórmula:

\[
P = \frac{4!}{1! \cdot 2! \cdot 1!}
\]

### Passo 4: Calcular os fatoriais

Agora, vamos calcular os fatoriais:

- \( 4! = 4 \times 3 \times 2 \times 1 = 24 \)
- \( 1! = 1 \)
- \( 2! = 2 \times 1 = 2 \)

Então, a expressão fica:

\[
P = \frac{24}{1 \times 2 \times 1} = \frac{24}{2} = 12
\]

### Passo 5: Resultado

Portanto, o número de **anagramas** distintos da palavra **"ESSA"** é **12**.

Ou seja, existem 12 maneiras diferentes de rearranjar as letras da palavra "ESSA".

### Conclusão

O número de anagramas de "ESSA" é **12**. Isso significa que é possível criar 12 palavras distintas a partir das letras de "ESSA", considerando as repetições das letras.


# Mais

A análise combinatória com permutação com repetição é um conceito utilizado quando temos um conjunto de elementos em que alguns se repetem, e queremos saber quantas maneiras diferentes podemos organizar esses elementos. No caso da palavra "ASA", temos letras que se repetem, e queremos calcular o número de permutações distintas.

Vamos analisar passo a passo a permutação da palavra **"ASA"**.

### Passo 1: Identificar os elementos da palavra
A palavra "ASA" possui 3 letras: A, S e A. Porém, observe que a letra **A** se repete.

- **A** aparece 2 vezes.
- **S** aparece 1 vez.

### Passo 2: Fórmula de permutação com repetição
A fórmula para calcular permutações com repetição é:

\[
P = \frac{n!}{k_1! \cdot k_2! \cdot \cdot \cdot k_r!}
\]

Onde:
- \( n \) é o número total de elementos (neste caso, o número total de letras).
- \( k_1, k_2, \dots, k_r \) são as frequências de repetição de cada elemento distinto.

### Passo 3: Aplicar a fórmula à palavra "ASA"

No caso de "ASA":
- O número total de letras (\( n \)) é 3 (porque temos as letras A, S e A).
- A letra A se repete 2 vezes, então \( k_1 = 2 \).
- A letra S se repete 1 vez, então \( k_2 = 1 \).

Aplicando na fórmula:

\[
P = \frac{3!}{2! \cdot 1!}
\]

### Passo 4: Calcular os fatoriais

Agora, vamos calcular os fatoriais:

- \( 3! = 3 \times 2 \times 1 = 6 \)
- \( 2! = 2 \times 1 = 2 \)
- \( 1! = 1 \)

Então, a expressão fica:

\[
P = \frac{6}{2 \times 1} = \frac{6}{2} = 3
\]

### Passo 5: Resultado

Portanto, o número de permutações distintas da palavra "ASA" é **3**. Ou seja, existem 3 maneiras diferentes de organizar as letras da palavra "ASA".

Essas 3 permutações são:
1. **ASA**
2. **SAA**
3. **ASA** (mas já contada, por isso a duplicação não altera o resultado final)

Assim, as permutações distintas são:
1. **ASA**
2. **SAA**

### Conclusão

A permutação com repetição nos mostrou que a palavra "ASA" pode ser rearranjada de 3 maneiras distintas, levando em consideração que a letra "A" se repete.


# Mais

Vamos calcular o número de **anagramas** da palavra **"FFFFFM"**, levando em consideração as repetições das letras.

### Passo 1: Identificar os elementos da palavra
A palavra **"FFFFFM"** possui 6 letras: F, F, F, F, F, M.

- A letra **F** aparece 5 vezes.
- A letra **M** aparece 1 vez.

### Passo 2: Fórmula de permutação com repetição
A fórmula para calcular permutações com repetição é:

\[
P = \frac{n!}{k_1! \cdot k_2! \cdot \cdots \cdot k_r!}
\]

Onde:
- \( n \) é o número total de elementos (neste caso, 6 letras).
- \( k_1, k_2, \dots, k_r \) são as frequências de repetição de cada elemento distinto.

### Passo 3: Aplicar a fórmula à palavra "FFFFFM"

Na palavra "FFFFFM":
- O número total de letras (\( n \)) é 6 (porque temos F, F, F, F, F e M).
- A letra **F** se repete 5 vezes, então \( k_1 = 5 \).
- A letra **M** se repete 1 vez, então \( k_2 = 1 \).

Aplicando na fórmula:

\[
P = \frac{6!}{5! \cdot 1!}
\]

### Passo 4: Calcular os fatoriais

Agora, vamos calcular os fatoriais:

- \( 6! = 6 \times 5 \times 4 \times 3 \times 2 \times 1 = 720 \)
- \( 5! = 5 \times 4 \times 3 \times 2 \times 1 = 120 \)
- \( 1! = 1 \)

Então, a expressão fica:

\[
P = \frac{720}{120 \times 1} = \frac{720}{120} = 6
\]

### Passo 5: Resultado

Portanto, o número de **anagramas** distintos da palavra **"FFFFFM"** é **6**.

### Conclusão

O número de anagramas de "FFFFFM" é **6**. Ou seja, existem 6 maneiras diferentes de rearranjar as letras da palavra "FFFFFM", levando em consideração as repetições da letra "F".