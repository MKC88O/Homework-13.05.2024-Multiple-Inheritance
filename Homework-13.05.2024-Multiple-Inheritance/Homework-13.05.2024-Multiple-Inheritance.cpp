// Homework-13.05.2024-Multiple-Inheritance.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <cmath>
#include <vector>
#include "Figure.h"
#include "Point.h"
#include "Straight.h"
#include "Ellipse.h"
#include "Polygon.h"
#include "Circle.h"
#include "Triangle.h"
#include "Quadrilateral.h"
#include "RegularAcuteTriangle.h"
#include "IsoscelesAcuteTriangle.h"
#include "EquilateralAcuteTriangle.h"
#include "RegularObtuseTriangle.h"
#include "IsoscelesObtuseTriangle.h"
#include "OrdinaryRectangularTriangle.h"
#include "IsoscelesRectangularTriangle.h"
#include "Parallelogram.h"
#include "Trapezoid.h"
#include "Deltoid.h"
#include "Rectangle.h"
#include "Rhombus.h"
#include "Square.h"

int main()
{
    Point point(25, 34);
    point.Area();
    point.Perimeter();
    point.Draw();
    cout << "\n\n";

    Straight straight(115);
    straight.Area();
    straight.Perimeter();
    straight.Draw();
    cout << "\n\n";
    
    Ellipse ellipse(35, 25);
    ellipse.Area();
    ellipse.Perimeter();
    ellipse.Draw();
    cout << "\n\n";

    vector<Point> points = { {0, 0}, {4, 0}, {4, 3}, {4,6} };
    Polygon polygon(points);
    polygon.Area();
    polygon.Perimeter();
    polygon.Draw();
    cout << "\n\n";
    

    Circle circle(25);
    circle.Area();
    circle.Perimeter();
    circle.Draw();
    cout << "\n\n";

    Triangle triangle;
    triangle.Area();
    triangle.Perimeter();
    triangle.Draw();
    cout << "\n\n";

    Quadrilateral quadrilateral;
    quadrilateral.Area();
    quadrilateral.Perimeter();
    quadrilateral.Draw();
    cout << "\n\n";

    RegularAcuteTriangle regularAcuteTriangle;
    regularAcuteTriangle.Area();
    regularAcuteTriangle.Perimeter();
    regularAcuteTriangle.Draw();
    cout << "\n\n";

    IsoscelesAcuteTriangle isoscelesAcuteTriangle;
    isoscelesAcuteTriangle.Area();
    isoscelesAcuteTriangle.Perimeter();
    isoscelesAcuteTriangle.Draw();
    cout << "\n\n";

    EquilateralAcuteTriangle equilateralAcuteTriangle;
    equilateralAcuteTriangle.Area();
    equilateralAcuteTriangle.Perimeter();
    equilateralAcuteTriangle.Draw();
    cout << "\n\n";

    RegularObtuseTriangle regularObtuseTriangle;
    regularObtuseTriangle.Area();
    regularObtuseTriangle.Perimeter();
    regularObtuseTriangle.Draw();
    cout << "\n\n";

    IsoscelesObtuseTriangle isoscelesObtuseTriangle;
    isoscelesObtuseTriangle.Area();
    isoscelesObtuseTriangle.Perimeter();
    isoscelesObtuseTriangle.Draw();
    cout << "\n\n";

    OrdinaryRectangularTriangle ordinaryRectangularTriangle;
    ordinaryRectangularTriangle.Area();
    ordinaryRectangularTriangle.Perimeter();
    ordinaryRectangularTriangle.Draw();
    cout << "\n\n";

    IsoscelesRectangularTriangle isoscelesRectangularTriangle;
    isoscelesRectangularTriangle.Area();
    isoscelesRectangularTriangle.Perimeter();
    isoscelesRectangularTriangle.Draw();
    cout << "\n\n";

    Parallelogram parallelogram;
    parallelogram.Area();
    parallelogram.Perimeter();
    parallelogram.Draw();
    cout << "\n\n";

    Trapezoid trapezoid;
    trapezoid.Area();
    trapezoid.Perimeter();
    trapezoid.Draw();
    cout << "\n\n";

    Deltoid deltoid;
    deltoid.Area();
    deltoid.Perimeter();
    deltoid.Draw();
    cout << "\n\n";

    Rectangle rectangle;
    rectangle.Area();
    rectangle.Perimeter();
    rectangle.Draw();
    cout << "\n\n";

    Rhombus rhombus;
    rhombus.Area();
    rhombus.Perimeter();
    rhombus.Draw();
    cout << "\n\n";

    Square square;
    square.Area();
    square.Perimeter();
    square.Draw();
    cout << "\n\n";
}
