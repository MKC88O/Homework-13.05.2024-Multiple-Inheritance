#pragma once
#include <iostream>
#include "Polygon.h"
using namespace std;

class Quadrilateral : public Polygon { // четырехугольник
protected:
    vector<Point> point;
    double sideA = 0;
    double sideB = 0;
    double sideC = 0;
    double sideD = 0;
    double height = 0;
public:
    Quadrilateral();
    Quadrilateral(vector<Point> point);

    virtual~Quadrilateral();

    void SetPoints(vector<Point> points);
    void SetSideA(double sideA);
    void SetSideB(double sideB);
    void SetSideC(double sideC);
    void SetSideD(double sideD);
    void SetHeight(double height);

    vector<Point> GetPoints() const;
    double GetSideA() const;
    double GetSideB() const;
    double GetSideC() const;
    double GetSideD() const;
    double GetHeight() const;

    virtual void Area() const;
    virtual void Perimeter() const;
    virtual void Draw() const;
};

