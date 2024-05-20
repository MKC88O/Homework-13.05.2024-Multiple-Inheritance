#pragma once
#include <iostream>
#include "Quadrilateral.h"
using namespace std;

class Deltoid : public Quadrilateral { // הוכüעמטה
private:
    double diagonal1;
    double diagonal2;
public:
    Deltoid();
    Deltoid(double sideA, double sideB, double diagonal1, double diagonal2);

    virtual~Deltoid();

    void SetSideA(double sideA);
    void SetSideB(double sideB);
    void SetDiagonal1(double diagonal1);
    void SetDiagonal2(double diagonal2);

    double GetSideA() const;
    double GetSideB() const;
    double GetDiagonal1() const;
    double GetDiagonal2() const;

    virtual void Area() const;
    virtual void Perimeter() const;
    virtual void Draw() const;
};

