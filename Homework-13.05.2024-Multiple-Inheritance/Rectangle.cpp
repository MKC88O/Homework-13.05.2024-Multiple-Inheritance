#include "Rectangle.h"
    Rectangle::Rectangle() : Rectangle(6, 8) {}

    Rectangle::Rectangle(double sideA, double sideB) {
        SetSideA(sideA);
        SetSideB(sideB);
    }

    Rectangle::~Rectangle() {}

    void Rectangle::SetSideA(double sideA) {
        this->sideA = sideA;
    }

    void Rectangle::SetSideB(double sideB) {
        this->sideB = sideB;
    }

    double Rectangle::GetSideA() const {
        return sideA;
    }

    double Rectangle::GetSideB() const {
        return sideB;
    }

    void Rectangle::Area() const {
        double area = sideA * sideB;
        cout << "Area of rectangle: " << area << " m2\n";
    }

    void Rectangle::Perimeter() const {
        double perimeter = 2 * (sideA + sideB);
        cout << "Perimeter of rectangle: " << perimeter << " m\n";
    }

    void Rectangle::Draw() const {
        cout << "Drawing a rectangle...\n";
    }
