#pragma once
#include <iostream>
#include "Rectangle.h"
using namespace std;

class Square : public Rectangle { // квадрат
public:
    Square();
    Square(double sideA);

    virtual~Square();

    void SetSideA(double sideA);

    double GetSideA() const;

    virtual void Area() const;
    virtual void Perimeter() const;
    virtual void Draw() const;
};

