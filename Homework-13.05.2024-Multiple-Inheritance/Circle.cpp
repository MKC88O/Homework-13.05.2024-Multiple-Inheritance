#include "Circle.h"

    Circle::Circle() : Circle(radius) {}

    Circle::Circle(double radius) {
        SetRadius(radius);
    }

    Circle::~Circle() {}

    void Circle::SetRadius(double radius) {
        this->radius = radius;
    }

    double Circle::GetRadius() const {
        return radius;
    }

    void Circle::Area() const {
        cout << "Area of circle: " << pi * pow(radius, 2) << " m2\n";
    }

    void Circle::Perimeter() const {
        cout << "Circumference: " << 2 * pi * radius << " m\n";
    }

    void Circle::Draw() const {
        cout << "Drawing a circle...\n";
    }
