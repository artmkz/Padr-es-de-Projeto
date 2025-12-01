#include <iostream>
#include "Mediator.h"

int main() {
    std::cout << "=== Exemplo do Padrao Mediator em C++ ===" << std::endl;
    std::cout << std::endl;

    ChatRoom chatRoom("Sala Tecnologia");

    User user1("Alice", &chatRoom);
    User user2("Bob", &chatRoom);
    User user3("Carlos", &chatRoom);

    std::cout << "--- Adicionando Usuarios ---" << std::endl;
    chatRoom.addUser(&user1);
    chatRoom.addUser(&user2);
    chatRoom.addUser(&user3);

    chatRoom.displayUsers();

    std::cout << "\n--- Enviando Mensagens ---" << std::endl;
    user1.send("Oi pessoal! Como estao?");

    user2.send("Ola! Tudo bem!");

    user3.send("Ei, viram o novo C++20?");

    user1.send("Sim! As features sao incriveis!");

    std::cout << "\n--- Fim da Comunicacao ---" << std::endl;

    return 0;
}
