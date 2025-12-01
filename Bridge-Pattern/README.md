# Padrão Bridge

## Para que serve?

O padrão Bridge é utilizado para **desacoplar uma abstração de sua implementação**, permitindo que ambas variem independentemente. Ele cria uma "ponte" entre a hierarquia de abstrações e a hierarquia de implementações.

## Problema que resolve

Sem o padrão Bridge, teríamos uma explosão de subclasses quando precisássemos de múltiplas formas geométricas em múltiplos dispositivos:

```
Shape
├── CircleMonitor
├── CircleSmartphone
├── CirclePrinter
├── SquareMonitor
├── SquareSmartphone
└── SquarePrinter
```

Isso viola o princípio da separação de responsabilidades e torna o código difícil de manter.

## Diagrama UML

```
         Abstração
         ┌──────────┐
         │  Shape   │
         ├──────────┤
         │ * display├──────┐
         │+ draw()  │      │
         │+ erase() │      │
         └──────────┘      │
              ▲             │ uses
           ┌──┴──┐          │
           │     │          ▼
         Circle Square  ┌────────────────────────┐
                        │DisplayImplementation   │
                        ├────────────────────────┤
                        │+ drawPixel()           │
                        │+ clearScreen()         │
                        │+ displayInfo()         │
                        └──┬────────┬────────────┘
                           │        │
                    ┌──────┴──┐ ┌──┴──────┐
                    │ Monitor │ │Smartphone
                    └─────────┘ └─────────┘
```

A ponte permite desenhar qualquer forma em qualquer dispositivo sem criar subclasses combinadas.
