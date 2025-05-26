O **Git Flow** é uma estratégia de ramificação (branching model) criada para organizar e padronizar o fluxo de trabalho com Git em projetos de desenvolvimento de software. Ele define um conjunto de regras para como e quando criar, atualizar e mesclar branches.

---

### 🔧 Estrutura do Git Flow

Git Flow define 5 principais tipos de branches:

1. **main (ou master)**

   * Contém a versão estável do código (pronta para produção).
   * Só recebe código via merge de release ou hotfix.

2. **develop**

   * Contém o código da próxima versão em desenvolvimento.
   * Serve como base para novas features.

3. **feature/**

   * Criada a partir de `develop` para desenvolver novas funcionalidades.
   * Ex: `feature/login`, `feature/dashboard`.
   * Após finalizada, é mesclada de volta para `develop`.

4. **release/**

   * Criada a partir de `develop` quando se está preparando uma nova versão para produção.
   * Permite testes, correções de bugs e ajustes de última hora.
   * Após finalizada, é mesclada em `main` e `develop`.

5. **hotfix/**

   * Criada a partir de `main` para corrigir rapidamente um problema em produção.
   * Após finalizada, é mesclada em `main` e `develop`.

---

### 🔁 Fluxo Resumido

```plaintext
main ───────────●────────────●───▶ produção
                 ▲          ▲
                 │          │
            hotfix     release
                 │          │
develop ─────●───●───●──────●────▶ próximo release
              │   │
           feature
```

---

### ✅ Vantagens

* Organização clara para equipes.
* Separação de código estável, em teste e em desenvolvimento.
* Ideal para projetos com versões bem definidas.

---

### ⚠️ Desvantagens

* Pode ser complexo para equipes pequenas ou projetos simples.
* Muitas branches simultâneas podem dificultar o gerenciamento.
* Não recomendado para metodologias ágeis que fazem deploy contínuo (como trunk-based development).

---
