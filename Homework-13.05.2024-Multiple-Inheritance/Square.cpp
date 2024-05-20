#include "Square.h"
    Square::Square() : Square(6) {}

    Square::Square(double sideA) {
        SetSideA(sideA);
    }

Square::~Square() {}

    void Square::SetSideA(double sideA) {
        this->sideA = sideA;
    }

    double Square::GetSideA() const {
        return sideA;
    }

    void Square::Area() const {
        double area = pow(sideA, 2);
        cout << "Area of square: " << area << " m2\n";
    }

    void Square::Perimeter() const {
        double perimeter = sideA * 4;
        cout << "Perimeter of square: " << perimeter << " m\n";
    }

    void Square::Draw() const {
        cout << "Drawing a square...\n";
    }
