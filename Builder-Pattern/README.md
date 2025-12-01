# Padrão Builder

## Para que serve?

O padrão Builder é utilizado para **construir objetos complexos passo a passo**, permitindo criar diferentes representações de um objeto usando o mesmo processo de construção.

## Problema que resolve

Quando uma classe possui muitos parâmetros de construtor ou quando sua construção envolve múltiplos passos, o código fica difícil de ler e manter. Sem o padrão Builder, você teria:

- Construtores com muitos parâmetros (confuso)
- Muitas variações de construtores sobrecarregados
- Código de construção espalhado pela aplicação

## Diagrama UML

```
┌─────────────────┐
│   Computer      │
├─────────────────┤
│ - cpu: string   │
│ - ram: string   │
│ - storage: str  │
│ - gpu: string   │
├─────────────────┤
│ + displaySpecs()│
└─────────────────┘
        ▲
        │ cria
        │
┌─────────────────────────┐
│  ComputerBuilder        │
├─────────────────────────┤
│ - cpu: string           │
│ - ram: string           │
│ - storage: string       │
│ - gpu: string           │
├─────────────────────────┤
│ + setCPU(string)        │
│ + setRAM(string)        │
│ + setStorage(string)    │
│ + setGPU(string)        │
│ + build(): Computer     │
└─────────────────────────┘
```
Cada método encadeado configura um atributo e retorna a referência do builder, permitindo encadear múltiplas chamadas de forma fluida e legível.
