#pragma once
#include <iostream>
#include "Quadrilateral.h"
using namespace std;

class Parallelogram : public Quadrilateral { // параллелограм
public:
    Parallelogram();
    Parallelogram(double sideA, double sideB, double height);

    virtual~Parallelogram();

    void SetSideA(double sideA);
    void SetSideB(double sideB);
    void SetHeight(double height);

    double GetSideA() const;
    double GetSideB() const;
    double GetHeight() const;

    virtual void Area() const;
    virtual void Perimeter() const;
    virtual void Draw() const;
};

