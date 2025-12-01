# Padrões de Projeto em C++

Repositório com implementação de **3 padrões de projeto** em C++, demonstrando conceitos essenciais de engenharia de software.

## ⚠️ Aviso Legal

Este repositório contém materiais educacionais baseados nos conceitos do **[Refactoring Guru](https://refactoring.guru/design-patterns)**, uma excelente referência sobre padrões de projeto. Recomendamos consultar o site para aprofundamento e créditos adequados.

## 🤖 Geração de Exemplos

Os exemplos de código foram implementados com assistência de **GitHub Copilot** para garantir qualidade e boas práticas de C++.

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

---

## 🚀 Como Compilar e Executar

### Requisitos
- Compilador C++ com suporte a C++17 (g++, clang, MSVC)
- Sistema operacional: Windows, Linux ou macOS

### Builder Pattern
```bash
cd Builder-Pattern
g++ -o bin/main.exe src/main.cpp -std=c++17
./bin/main.exe
```

### Bridge Pattern
```bash
cd Bridge-Pattern
g++ -o bin/main.exe src/main.cpp -std=c++17
./bin/main.exe
```

### Mediator Pattern
```bash
cd Mediator-Pattern
g++ -o bin/main.exe src/main.cpp -std=c++17
./bin/main.exe
```

---

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

### Implementação
- Exemplos implementados com assistência de **GitHub Copilot**
- Linguagem: **C++ 17**
- Compilador recomendado: GCC, Clang ou MSVC

---

## 🎯 Objetivos Educacionais

Este repositório foi criado para:

✅ Demonstrar padrões de projeto em contexto prático  
✅ Fornecer exemplos limpos e compreensíveis em C++  
✅ Facilitar o aprendizado de engenharia de software  
✅ Servir como referência para implementações futuras  

---

## 💻 Exemplos de Saída

### Builder Pattern - Construção de Computadores
```
--- Computador Gamer ---
=== Especificações do Computador ===
CPU: Intel i9-13900K
RAM: 32GB DDR5
Armazenamento: 2TB SSD NVMe
GPU: RTX 4090
```

### Bridge Pattern - Desenho em Dispositivos
```
Desenhando Círculo no
  Dispositivo: Monitor LED
  [Monitor] Pixel desenhado em (50, 50) com cor azul
```

### Mediator Pattern - Chat entre Usuários
```
[Alice] enviando: "Oi pessoal!"
  [Sala Tecnologia] Mediador transmitindo para todos os usuários...
[Bob] recebeu de Alice: "Oi pessoal!"
[Carlos] recebeu de Alice: "Oi pessoal!"
```

---

## 📝 Licença

Este projeto é de código aberto e pode ser utilizado para fins educacionais.

---

## 🤝 Contribuições

Sugestões de melhorias são bem-vindas! Sinta-se livre para:
- Abrir Issues com sugestões
- Fazer Pull Requests com melhorias
- Reportar erros ou bugs

---

## ✨ Agradecimentos

- **Refactoring Guru** - Pela excelente documentação sobre padrões
- **GitHub Copilot** - Pela assistência na implementação
- **Comunidade C++** - Pelos padrões e melhores práticas

---

**Última atualização**: Novembro 2025  
**Status**: ✅ Completo e funcional
