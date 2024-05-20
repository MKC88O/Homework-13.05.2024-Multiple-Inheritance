#pragma once
#include <iostream>
#include "Triangle.h"
using namespace std;

class IsoscelesAcuteTriangle : public Triangle { // равнобедренный остроугольный треугольник
public:
    IsoscelesAcuteTriangle();

    IsoscelesAcuteTriangle(double sideA, double sideB, double sideC);

    virtual ~IsoscelesAcuteTriangle();

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

