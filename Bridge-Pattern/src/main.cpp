#include <iostream>
#include "Shape.h"

int main() {
    std::cout << "=== Exemplo do Padrao Bridge em C++ ===" << std::endl;
    std::cout << std::endl;

    MonitorDisplay monitor;
    SmartphoneDisplay smartphone;
    PrinterDisplay printer;

    std::cout << "--- Desenhando Circulo ---" << std::endl;
    Circle circleMonitor(&monitor, 50, 50, 10);
    circleMonitor.draw();
    std::cout << std::endl;

    Circle circlePhone(&smartphone, 100, 100, 15);
    circlePhone.draw();
    std::cout << std::endl;

    Circle circlePrinter(&printer, 200, 200, 20);
    circlePrinter.draw();
    std::cout << std::endl;

    std::cout << "--- Desenhando Quadrado ---" << std::endl;
    Square squareMonitor(&monitor, 30, 30, 5);
    squareMonitor.draw();
    std::cout << std::endl;

    Square squarePhone(&smartphone, 60, 60, 8);
    squarePhone.draw();
    std::cout << std::endl;

    Square squarePrinter(&printer, 120, 120, 10);
    squarePrinter.draw();
    squarePrinter.draw();
    std::cout << std::endl;

    std::cout << "--- Limpando Telas ---" << std::endl;
    squarePhone.erase();

    return 0;
}
