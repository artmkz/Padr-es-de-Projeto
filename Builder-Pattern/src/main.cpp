#include <iostream>
#include "ComputerBuilder.h"

int main() {
    std::cout << "Exemplo do Padrão Builder em C++" << std::endl;
    std::cout << std::endl;

    // Criando um computador gamer
    std::cout << "--- Computador Gamer ---" << std::endl;
    Computer gamer = ComputerBuilder()
        .setCPU("Intel i9-13900K")
        .setRAM("32GB DDR5")
        .setStorage("2TB SSD NVMe")
        .setGPU("RTX 4090")
        .build();

    gamer.displaySpecs();
    std::cout << std::endl;

    // Criando um computador para escritório
    std::cout << "--- Computador Escritório ---" << std::endl;
    Computer office = ComputerBuilder()
        .setCPU("Intel i5-13500")
        .setRAM("16GB DDR4")
        .setStorage("512GB SSD")
        .setGPU("Intel Integrada")
        .build();

    office.displaySpecs();
    std::cout << std::endl;

    // Criando um computador básico
    std::cout << "--- Computador Básico ---" << std::endl;
    Computer basic = ComputerBuilder()
        .setCPU("Intel i3-13100")
        .setRAM("8GB DDR4")
        .setStorage("256GB SSD")
        .setGPU("Intel Integrada")
        .build();

    basic.displaySpecs();

    return 0;
}
