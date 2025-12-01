# Padrões de Projeto em C++

Repositório com implementação de **3 padrões de projeto** em C++, demonstrando conceitos essenciais de engenharia de software.

## ⚠️ Aviso Legal

Este repositório contém materiais educacionais baseados nos conceitos do **[Refactoring Guru](https://refactoring.guru/design-patterns)**, uma excelente referência sobre padrões de projeto. Recomendamos consultar o site para aprofundamento e créditos adequados.

## 🤖 Assistência utilizada

Os exemplos de código foram implementados com assistência de **GitHub Copilot** para garantir o funcionamentodo código em  C++.

---

## 📋 Padrões Implementados

### 1. [Builder Pattern](./Builder-Pattern/README.md)
**Propósito**: Construir objetos complexos passo a passo

- **Problema**: Construtores com muitos parâmetros
- **Solução**: Classe separada para construção passo a passo
- **Exemplo**: Construção de computadores com diferentes configurações

### 2. [Bridge Pattern](./Bridge-Pattern/README.md)
**Propósito**: Desacoplar abstração de implementação

- **Problema**: Explosão de subclasses com múltiplas dimensões
- **Solução**: Separa hierarquias de abstração e implementação
- **Exemplo**: Desenho de formas em diferentes dispositivos

### 3. [Mediator Pattern](./Mediator-Pattern/README.md)
**Propósito**: Centralizar comunicação entre objetos

- **Problema**: Acoplamento excessivo entre múltiplos objetos
- **Solução**: Mediador gerencia toda comunicação
- **Exemplo**: Sistema de chat com usuários

---

## 🗂️ Estrutura do Repositório

```
Padroes-de-Projeto/
├── README.md (este arquivo)
├── Builder-Pattern/
│   ├── README.md
│   ├── src/
│   │   ├── Computer.h
│   │   ├── ComputerBuilder.h
│   │   └── main.cpp
│   └── bin/
├── Bridge-Pattern/
│   ├── README.md
│   ├── src/
│   │   ├── DisplayImplementation.h
│   │   ├── Shape.h
│   │   └── main.cpp
│   └── bin/
└── Mediator-Pattern/
    ├── README.md
    ├── src/
    │   ├── Mediator.h
    │   └── main.cpp
    └── bin/
```


## 📖 Documentação de Cada Padrão

Cada padrão possui um README detalhado contendo:

1. **Para que serve?** - Explicação clara do propósito
2. **Problema que resolve** - Contexto do problema
3. **Solução** - Como o padrão resolve
4. **Diagrama UML** - Representação visual
5. **Código Explicado** - Exemplos com explicações

Clique no padrão para ver a documentação completa:

- **[Builder Pattern - README](./Builder-Pattern/README.md)**
- **[Bridge Pattern - README](./Bridge-Pattern/README.md)**
- **[Mediator Pattern - README](./Mediator-Pattern/README.md)**

---

## 📚 Referências e Créditos

### Conceitos e Educação
- [Refactoring Guru - Design Patterns](https://refactoring.guru/design-patterns) - Referência principal
- [Design Patterns: Elements of Reusable Object-Oriented Software](https://en.wikipedia.org/wiki/Design_Patterns) - Gang of Four

## 📝 Licença

Este projeto é de código aberto e pode ser utilizado para fins educacionais.
