#include "Point.h"

    Point::Point() : Point(x, y) {}

    Point::Point(double x, double y) {
        SetX(x);
        SetY(y);
    }

    Point::~Point() {}

    void Point::SetX(double x) {
        this->x = x;
    }

    void Point::SetY(double y) {
        this->y = y;
    }

    double Point::GetX() const {
        return x;
    }

    double Point::GetY() const {
        return y;
    }

    void Point::Area() const {
        cout << "A point has no area...\n";
    }

    void Point::Perimeter() const {
        cout << "A point has no perimeter...\n";
    }

    void Point::Draw() const {
        cout << "Drawing a point at coordinates: \n";
        cout << "At 'X': " << x << "\n";
        cout << "At 'Y': " << y << "\n";
    }

