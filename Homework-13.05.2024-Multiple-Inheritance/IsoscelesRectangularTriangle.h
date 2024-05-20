#pragma once
#include <iostream>
#include "Triangle.h"
using namespace std;

class IsoscelesRectangularTriangle : public Triangle { // равнобедренный прямоугольный треугольник
public:
    IsoscelesRectangularTriangle();
    IsoscelesRectangularTriangle(double sideA, double sideB, double sideC);

    virtual~IsoscelesRectangularTriangle();

    void SetSideA(double sideA);
    void SetSideB(double sideB);
    void SetSideC(double sideC);

    double GetSideA() const;
    double GetSideB() const;
    double GetSideC() const;

    virtual void Area() const;
    virtual void Perimeter() const;
    virtual void Draw() const;
};

