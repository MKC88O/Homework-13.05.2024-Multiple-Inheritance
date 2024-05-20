#pragma once
#include <iostream>
#include "Figure.h"
using namespace std;

class Straight : public Figure { // прямая
private:
    double length = 0;

public:
    Straight();
    Straight(double length);

    virtual ~Straight();

    void SetLength(double length);

    double GetLength() const;

    virtual void Area() const;
    virtual void Perimeter() const;
    virtual void Draw() const;
};

