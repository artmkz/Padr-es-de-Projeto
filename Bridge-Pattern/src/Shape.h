#ifndef SHAPE_H
#define SHAPE_H

#include "DisplayImplementation.h"

class Shape {
protected:
    DisplayImplementation* display;

public:
    Shape(DisplayImplementation* disp) : display(disp) {}
    virtual ~Shape() = default;
    virtual void draw() = 0;
    virtual void erase() = 0;
};

class Circle : public Shape {
private:
    int centerX, centerY, radius;

public:
    Circle(DisplayImplementation* disp, int x, int y, int r)
        : Shape(disp), centerX(x), centerY(y), radius(r) {}

    void draw() override {
        std::cout << "Desenhando Círculo no " << std::endl;
        display->displayInfo();
        for (int i = 0; i < 4; i++) {
            display->drawPixel(centerX + i, centerY, "azul");
        }
    }

    void erase() override {
        std::cout << "Apagando Círculo" << std::endl;
        display->clearScreen();
    }
};

class Square : public Shape {
private:
    int x, y, size;

public:
    Square(DisplayImplementation* disp, int px, int py, int s)
        : Shape(disp), x(px), y(py), size(s) {}

    void draw() override {
        std::cout << "Desenhando Quadrado no " << std::endl;
        display->displayInfo();
        for (int i = 0; i < size; i++) {
            display->drawPixel(x + i, y, "vermelho");
        }
    }

    void erase() override {
        std::cout << "Apagando Quadrado" << std::endl;
        display->clearScreen();
    }
};

#endif
