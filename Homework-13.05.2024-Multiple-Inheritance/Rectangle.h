#pragma once
#include <iostream>
#include "Parallelogram.h"
using namespace std;

class Rectangle : public Parallelogram { // прямоугольник
public:
    Rectangle();
    Rectangle(double sideA, double sideB);

    virtual~Rectangle();

    void SetSideA(double sideA);
    void SetSideB(double sideB);

    double GetSideA() const;
    double GetSideB() const;

    virtual void Area() const;
    virtual void Perimeter() const;
    virtual void Draw() const;
};

