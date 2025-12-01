# Padrão Mediator

## Para que serve?

O padrão Mediator é utilizado para **centralizar a comunicação entre múltiplos objetos**, reduzindo as dependências caóticas entre eles. Ele promove um design mais limpo facilitando a manutenção.

## Problema que resolve

Sem o padrão Mediator, teríamos um acoplamento excessivo onde cada objeto precisa conhecer e comunicar-se diretamente com todos os outros:

```
User1 ←→ User2
  ↕      ↕
User3 ←→ User4
```

Isso resulta em:
- Código complexo e difícil de seguir
- Mudanças em um objeto afetam muitos outros
- Difícil adicionar ou remover objetos

## Solução

O padrão Mediator introduz um objeto centralizador (Mediator) que gerencia toda a comunicação:

```
User1    User2    User3
   ↓      ↓      ↓
   └──────┬──────┘
         │
      ChatRoom (Mediator)
```

Os objetos comunicam-se apenas através do mediador, reduzindo acoplamento.

## Diagrama UML

```
┌──────────────────────┐
│   ChatMediator       │
├──────────────────────┤
│+ sendMessage()       │
│+ addUser()           │
└──────────────────────┘
         ▲
         │ implements
         │
┌──────────────────────┐
│    ChatRoom          │
├──────────────────────┤
│- users: List<User>   │
│- roomName: string    │
├──────────────────────┤
│+ addUser(User)       │
│+ sendMessage()       │
│+ displayUsers()      │
└──────────────────────┘
         ▲
         │ uses
         │
    ┌────┴────┐
    │          │
  User1      User2
┌────────┐  ┌────────┐
│- name  │  │- name  │
│- med*  │  │- med*  │
├────────┤  ├────────┤
│+ send()│  │+ send()│
│+ recv()│  │+ recv()│
└────────┘  └────────┘
```

O mediador intercepta todas as mensagens e as roteia para os destinatários apropriados, mantendo os usuários desacoplados.
