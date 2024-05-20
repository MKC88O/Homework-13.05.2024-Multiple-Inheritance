#pragma once
#include <iostream>
#include "Figure.h"
using namespace std;

class Point : public Figure { // точка
protected:
    double x = 0;
    double y = 0;
public:
    Point();
    Point(double x, double y);
    
    virtual~Point();

    void SetX(double x);
    void SetY(double y);

    double GetX() const;
    double GetY() const;

    virtual void Area() const;
    virtual void Perimeter() const;
    virtual void Draw() const;
};

