## Tipagem Intermediária e Avançada com TypeScript

O TypeScript oferece um sistema de tipagem robusto que vai além dos tipos básicos. A tipagem intermediária e avançada permite criar código mais seguro, flexível e expressivo.

**Tipagem Intermediária**

- **Tipos de União (Union Types):**
  - Permitem que uma variável ou parâmetro aceite múltiplos tipos.
  - Exemplo: `let valor: string | number;`
- **Tipos de Interseção (Intersection Types):**
  - Combinam múltiplos tipos em um único tipo.
  - Exemplo: `type PessoaContato = Pessoa & Contato;`
- **Tipos Literais (Literal Types):**
  - Restringem um tipo a um conjunto específico de valores.
  - Exemplo: `type Direcao = "Norte" | "Sul" | "Leste" | "Oeste";`
- **Tipos de Tupla (Tuple Types):**
  - Permitem criar arrays com um número fixo de elementos e tipos específicos.
  - Exemplo: `let ponto: [number, number];`
- **Enumerações (Enums):**
  - Definem um conjunto de constantes nomeadas.
  - Exemplo:
    ```typescript
    enum Cor {
      Vermelho,
      Verde,
      Azul,
    }
    ```
- **Generics:**
  - Permitem criar componentes e funções que funcionam com diversos tipos.
  - Torna o código mais reutilizável e flexível.
  - Exemplo:
    ```typescript
    function identidade<T>(arg: T): T {
      return arg;
    }
    ```

**Tipagem Avançada**

- **Tipos Condicionais (Conditional Types):**
  - Permitem criar tipos que dependem de outros tipos.
  - Exemplo: `type TipoRetorno<T> = T extends (...args: any) => infer R ? R : any;`
- **Tipos Mapeados (Mapped Types):**
  - Permitem transformar tipos existentes em novos tipos.
  - Exemplo: `type SomenteLeitura<T> = { readonly [K in keyof T]: T[K] };`
- **Tipos de Inferência (Type Inference):**
  - Permitem que o TypeScript infira o tipo de uma variável ou expressão.
  - A palavra chave `infer` é usada em tipos condicionais para inferir um tipo dentro da condição `extends`.
- **Type Guards:**
  - Permitem refinar o tipo de uma variável dentro de um bloco de código.
  - Exemplos:
    - `typeof`: Verifica o tipo de uma variável.
    - `instanceof`: Verifica se um objeto é uma instância de uma classe.
    - Predicados de tipo: Funções personalizadas que verificam o tipo de uma variável.
- **Tipos Utilitários (Utility Types):**
  - O TypeScript fornece um conjunto de tipos utilitários que facilitam a manipulação de tipos.
  - Exemplos:
    - `Partial<T>`: Torna todas as propriedades de um tipo opcionais.
    - `Required<T>`: Torna todas as propriedades de um tipo obrigatórias.
    - `Readonly<T>`: Torna todas as propriedades de um tipo somente leitura.
    - `Pick<T, K>`: Seleciona um conjunto de propriedades de um tipo.
    - `Record<K, T>`: Cria um tipo de objeto com chaves e valores especificados.

**Exemplos Práticos**

- **Tipos de união e interfaces:**
  - Crie uma função que aceita um parâmetro que pode ser uma string ou um número.
  - Crie uma interface que combine as propriedades de duas outras interfaces.
- **Generics e tipos condicionais:**
  - Crie uma função genérica que retorna o tipo de retorno de outra função.
  - Crie um tipo condicional que verifica se um tipo é um array.
- **Tipos mapeados e tipos utilitários:**
  - Crie um tipo que torna todas as propriedades de uma interface opcionais.
  - Crie um tipo que seleciona apenas algumas propriedades de uma interface.
