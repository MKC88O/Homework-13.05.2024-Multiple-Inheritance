#pragma once
#include <iostream>
#include "Parallelogram.h"
using namespace std;

class Rhombus : public Parallelogram { // ромб
protected:
    double diagonal1;
    double diagonal2;
public:
    Rhombus();
    Rhombus(double sideA, double diagonal1, double diagonal2);

    virtual~Rhombus();

    void SetSideA(double sideA);
    void SetDiagonal1(double diagonal1);
    void SetDiagonal2(double diagonal2);

    double GetSideA() const;
    double GetDiagonal1() const;
    double GetDiagonal2() const;

    virtual void Area() const;
    virtual void Perimeter() const;
    virtual void Draw() const;
};

