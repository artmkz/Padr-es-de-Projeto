#ifndef DISPLAY_IMPLEMENTATION_H
#define DISPLAY_IMPLEMENTATION_H

#include <iostream>
#include <string>

class DisplayImplementation {
public:
    virtual ~DisplayImplementation() = default;
    virtual void drawPixel(int x, int y, const std::string& color) = 0;
    virtual void clearScreen() = 0;
    virtual void displayInfo() = 0;
};

class MonitorDisplay : public DisplayImplementation {
public:
    void drawPixel(int x, int y, const std::string& color) override {
        std::cout << "  [Monitor] Pixel desenhado em (" << x << ", " << y 
                  << ") com cor " << color << std::endl;
    }

    void clearScreen() override {
        std::cout << "  [Monitor] Tela limpa" << std::endl;
    }

    void displayInfo() override {
        std::cout << "  Dispositivo: Monitor LED" << std::endl;
    }
};

class SmartphoneDisplay : public DisplayImplementation {
public:
    void drawPixel(int x, int y, const std::string& color) override {
        std::cout << "  [Smartphone] Pixel renderizado em (" << x << ", " << y 
                  << ") com cor " << color << std::endl;
    }

    void clearScreen() override {
        std::cout << "  [Smartphone] Tela OLED apagada" << std::endl;
    }

    void displayInfo() override {
        std::cout << "  Dispositivo: Smartphone OLED" << std::endl;
    }
};

class PrinterDisplay : public DisplayImplementation {
public:
    void drawPixel(int x, int y, const std::string& color) override {
        std::cout << "  [Impressora] Tinta aplicada em (" << x << ", " << y 
                  << ") com cor " << color << std::endl;
    }

    void clearScreen() override {
        std::cout << "  [Impressora] Papel inserido" << std::endl;
    }

    void displayInfo() override {
        std::cout << "  Dispositivo: Impressora Jato de Tinta" << std::endl;
    }
};

#endif
