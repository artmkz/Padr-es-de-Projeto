#ifndef COMPUTER_H
#define COMPUTER_H

#include <string>

class Computer {
private:
    std::string cpu;
    std::string ram;
    std::string storage;
    std::string gpu;

public:
    Computer(const std::string& cpu, const std::string& ram, 
             const std::string& storage, const std::string& gpu)
        : cpu(cpu), ram(ram), storage(storage), gpu(gpu) {}

    void displaySpecs() const {
        std::cout << "=== Especificações do Computador ===" << std::endl;
        std::cout << "CPU: " << cpu << std::endl;
        std::cout << "RAM: " << ram << std::endl;
        std::cout << "Armazenamento: " << storage << std::endl;
        std::cout << "GPU: " << gpu << std::endl;
    }
};

#endif
