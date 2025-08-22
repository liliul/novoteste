Para um **desenvolvedor júnior** (dev júnior) se sair bem no mundo dos bancos de dados, há várias competências e conceitos essenciais que ele deve entender. Abaixo está um guia de tópicos fundamentais que todo dev júnior deveria saber sobre banco de dados:

### 1. **Conceitos Básicos de Banco de Dados**

* **O que é um banco de dados?**

  * Um banco de dados é um sistema organizado para armazenar, gerenciar e acessar dados de forma eficiente.
* **O que são tabelas, registros e campos?**

  * **Tabela**: Estrutura onde os dados são armazenados.
  * **Campo**: Uma coluna dentro de uma tabela que define um tipo específico de dado (ex: nome, idade).
  * **Registro**: Uma linha dentro de uma tabela que contém dados reais (ex: um usuário com nome, idade, etc.).

### 2. **SQL (Structured Query Language)**

* **Consultas SQL Básicas:**

  * **SELECT**: Para recuperar dados.

    ```sql
    SELECT * FROM usuarios;
    ```
  * **INSERT**: Para inserir novos dados.

    ```sql
    INSERT INTO usuarios (nome, idade) VALUES ('João', 25);
    ```
  * **UPDATE**: Para atualizar dados existentes.

    ```sql
    UPDATE usuarios SET idade = 26 WHERE nome = 'João';
    ```
  * **DELETE**: Para excluir dados.

    ```sql
    DELETE FROM usuarios WHERE nome = 'João';
    ```

* **Filtros e Condições:**

  * **WHERE**: Para filtrar os dados.

    ```sql
    SELECT * FROM usuarios WHERE idade > 18;
    ```
  * **AND/OR**: Para combinar condições.

    ```sql
    SELECT * FROM usuarios WHERE idade > 18 AND cidade = 'São Paulo';
    ```

* **Ordenação e Limitação:**

  * **ORDER BY**: Para ordenar os resultados.

    ```sql
    SELECT * FROM usuarios ORDER BY idade DESC;
    ```
  * **LIMIT**: Para limitar o número de resultados.

    ```sql
    SELECT * FROM usuarios LIMIT 10;
    ```

### 3. **Relacionamentos entre Tabelas**

* **Relacionamentos 1\:N (um-para-muitos), N:1 (muitos-para-um) e N\:N (muitos-para-muitos)**:

  * **1\:N**: Um item em uma tabela pode estar relacionado a vários itens em outra tabela. Exemplo: um usuário pode ter muitos posts.
  * **N:1**: Muitos itens em uma tabela podem estar relacionados a um item em outra tabela.
  * **N\:N**: Muitos itens em uma tabela podem estar relacionados a muitos itens em outra tabela (geralmente implementado com uma tabela intermediária).

* **Chaves primárias e estrangeiras:**

  * **Chave primária** (PRIMARY KEY): Identificador único para cada registro em uma tabela.
  * **Chave estrangeira** (FOREIGN KEY): Um campo em uma tabela que faz referência à chave primária de outra tabela, estabelecendo o relacionamento entre elas.

Exemplo de relacionamento:

```sql
CREATE TABLE usuarios (
    id INT PRIMARY KEY,
    nome VARCHAR(100)
);

CREATE TABLE posts (
    id INT PRIMARY KEY,
    usuario_id INT,
    texto TEXT,
    FOREIGN KEY (usuario_id) REFERENCES usuarios(id)
);
```

### 4. **Normalização de Banco de Dados**

* **O que é normalização?**

  * Processo de organizar os dados para evitar redundâncias e inconsistências.
* **Formas Normais:**

  * **1NF**: Eliminar grupos repetitivos.
  * **2NF**: Eliminar dependências parciais.
  * **3NF**: Eliminar dependências transitivas.
* Normalização ajuda a melhorar a estrutura do banco, tornando as consultas mais rápidas e os dados mais consistentes.

### 5. **Transações e Controle de Concurrency**

* **O que são transações?**

  * Uma transação é uma sequência de operações que deve ser completada com sucesso ou revertida, garantindo que o banco de dados se mantenha consistente.
* **ACID:**

  * **Atomicidade**: Toda a transação é executada como uma unidade indivisível.
  * **Consistência**: O banco de dados deve ser consistente antes e depois da transação.
  * **Isolamento**: As transações são isoladas, ou seja, não há interferência entre transações simultâneas.
  * **Durabilidade**: Uma vez confirmada, a transação persiste, mesmo em caso de falhas.

### 6. **Tipos de Banco de Dados**

* **Banco de dados relacional (RDBMS):**

  * Bancos como **MySQL**, **PostgreSQL**, **SQL Server**, etc.
  * Utilizam SQL e armazenam dados em tabelas com relacionamentos definidos.
* **Banco de dados não relacional (NoSQL):**

  * Bancos como **MongoDB**, **Cassandra**, **Redis**, etc.
  * São mais flexíveis e podem usar formatos como JSON ou chave-valor. Útil para dados não estruturados ou altamente escaláveis.

### 7. **Índices**

* **O que são índices?**

  * Índices são estruturas de dados que melhoram a velocidade das operações de consulta (especialmente `SELECT`), mas podem aumentar o custo de **inserções** e **atualizações**.
* **Quando usar índices?**

  * Usados em colunas que são frequentemente filtradas ou ordenadas.

Exemplo:

```sql
CREATE INDEX idx_nome ON usuarios(nome);
```

### 8. **Backups e Recuperação**

* **Importância dos backups**:

  * Backups regulares são essenciais para a integridade dos dados. A falta de um bom plano de backup pode resultar em perda de dados.
* **Como realizar backups em SQL?**

  * Cada banco de dados tem sua própria estratégia de backup (ex: `pg_dump` no PostgreSQL, `mysqldump` no MySQL).

### 9. **Consultas Complexas e Agregações**

* **Funções agregadas:**

  * Funções como **COUNT()**, **SUM()**, **AVG()**, **MAX()**, e **MIN()** são usadas para realizar cálculos sobre dados.

  ```sql
  SELECT COUNT(*) FROM usuarios WHERE idade > 18;
  ```
* **GROUP BY**: Agrupa resultados por uma coluna.

  ```sql
  SELECT cidade, COUNT(*) FROM usuarios GROUP BY cidade;
  ```

### 10. **Boas Práticas e Otimização**

* **Escrever consultas eficientes**: Evitar o uso excessivo de `SELECT *`, usar índices corretamente, evitar subconsultas desnecessárias.
* **Evitar SQL Injection**: Sempre usar **prepared statements** ou **query builders** para evitar a injeção de SQL.

---

### Resumo: O que um dev júnior deve saber

* **Entender os conceitos básicos de banco de dados**: tabelas, registros, campos, relacionamentos.
* **Dominar SQL**: consultas básicas (`SELECT`, `INSERT`, `UPDATE`, `DELETE`), filtros, ordenação e agregações.
* **Compreender relacionamentos entre tabelas**: chaves primárias, estrangeiras e normalização.
* **Entender o básico de transações e controle de concorrência** (ACID).
* **Ter noções de bancos de dados relacionais e não relacionais**.
* **Conhecer a importância dos índices e quando usá-los**.
* **Estar ciente de boas práticas de segurança**: SQL Injection, backups, otimização de consultas.

Isso ajudará bastante um dev júnior a dar os primeiros passos em projetos que envolvem bancos de dados e construir uma base sólida para aprofundar seus conhecimentos à medida que ganha experiência.
