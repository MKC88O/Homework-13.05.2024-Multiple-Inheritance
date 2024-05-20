#pragma once
#include <iostream>
#include "Polygon.h"
using namespace std;

class Triangle : public Polygon { // треугольник
protected:
    double sideA = 0;
    double sideB = 0;
    double sideC = 0;
public:
    Triangle();
    Triangle(Point point1, Point point2, Point point3);

    virtual ~Triangle();

    virtual void Area() const;
    virtual void Perimeter() const;
    virtual void Draw() const;
};

