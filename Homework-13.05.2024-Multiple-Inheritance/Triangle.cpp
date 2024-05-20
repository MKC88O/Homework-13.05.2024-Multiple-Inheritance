#include "Triangle.h"

    Triangle::Triangle() : Polygon({ Point(0, 0), Point(4, 0), Point(4, 3) }) {}

    Triangle::Triangle(Point point1, Point point2, Point point3) : Polygon({ point1, point2, point3 }) {}

    Triangle::~Triangle() {}

    void Triangle::Area() const {
        double area = 0;
        for (int i = 0; i < points.size(); i++) {
            int j = (i + 1) % points.size();
            area += (points[i].GetX() * points[j].GetY()) - (points[j].GetX() * points[i].GetY());
        }
        cout << "Area of triangle: " << abs(area) / 2 << " m2\n";
    }

    void Triangle::Perimeter() const {
        double perimeter = 0;
        for (int i = 0; i < points.size(); i++) {
            int j = (i + 1) % points.size();
            perimeter += sqrt(pow(points[j].GetX() - points[i].GetX(), 2) + pow(points[j].GetY() - points[i].GetY(), 2));
        }
        cout << "Perimeter of triangle: " << perimeter << " m\n";
    }

    void Triangle::Draw() const {
        cout << "Drawing a triangle...\n";
    }
