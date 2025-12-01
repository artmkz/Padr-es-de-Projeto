#ifndef COMPUTER_BUILDER_H
#define COMPUTER_BUILDER_H

#include "Computer.h"

class ComputerBuilder {
private:
    std::string cpu;
    std::string ram;
    std::string storage;
    std::string gpu;

public:
    ComputerBuilder() : cpu(""), ram(""), storage(""), gpu("") {}

    ComputerBuilder& setCPU(const std::string& cpuType) {
        cpu = cpuType;
        return *this;
    }

    ComputerBuilder& setRAM(const std::string& ramSize) {
        ram = ramSize;
        return *this;
    }

    ComputerBuilder& setStorage(const std::string& storageSize) {
        storage = storageSize;
        return *this;
    }

    ComputerBuilder& setGPU(const std::string& gpuType) {
        gpu = gpuType;
        return *this;
    }

    Computer build() const {
        return Computer(cpu, ram, storage, gpu);
    }
};

#endif
