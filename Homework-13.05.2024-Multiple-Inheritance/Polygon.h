#pragma once
#include <iostream>
#include <cmath>
#include <vector>
#include "Figure.h"
#include "Point.h"
using namespace std;

class Polygon : public Figure { // многоугольник
protected:
    vector<Point> points;
public:
    Polygon();
    Polygon(vector<Point> points);

    virtual ~Polygon();

    void SetPoints(vector<Point> points);

    vector<Point> GetPoints() const;

    virtual void Area() const;
    virtual void Perimeter() const;
    virtual void Draw() const;
};

