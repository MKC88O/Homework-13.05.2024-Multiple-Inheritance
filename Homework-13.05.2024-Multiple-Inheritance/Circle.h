#pragma once
#include <iostream>
#include "Ellipse.h"
using namespace std;

class Circle : public Ellipse { // круг
private:
    double radius;
public:
    Circle();
    Circle(double radius);

    virtual ~Circle();

    void SetRadius(double radius);

    double GetRadius() const;

    virtual void Area() const;
    virtual void Perimeter() const;
    virtual void Draw() const;
};

