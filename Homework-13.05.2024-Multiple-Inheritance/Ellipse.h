#pragma once
#include <iostream>
#include "Figure.h"
using namespace std;

class Ellipse : public Figure { // ύλθορ
protected:
    double pi = 3.14;
    double bigRadius = 0;
    double smallRadius = 0;
public:
    Ellipse();
    Ellipse(double bigRadius, double smallRadius);

    virtual~Ellipse();

    void SetBigRadius(double bigRadius);
    void SetSmallRadius(double smallRadius);

    double GetBigRadius() const;
    double GetSmallRadius() const;

    virtual void Area() const;
    virtual void Perimeter() const;
    virtual void Draw() const;
};

