#pragma once
#include <iostream>
#include "Quadrilateral.h"
using namespace std;

class Trapezoid : public Quadrilateral { // трапеция
public:
    Trapezoid();
    Trapezoid(double sideA, double sideB, double sideC, double sideD, double height);

    virtual~Trapezoid();

    void SetSideA(double sideA);
    void SetSideB(double sideB);
    void SetSideC(double sideC);
    void SetSideD(double sideD);
    void SetHeight(double height);

    double GetSideA() const;
    double GetSideB() const;
    double GetSideC() const;
    double GetSideD() const;
    double GetHeight() const;

    virtual void Area() const;
    virtual void Perimeter() const;
    virtual void Draw() const;
};

