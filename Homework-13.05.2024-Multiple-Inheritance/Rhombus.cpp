#include "Rhombus.h"
    Rhombus::Rhombus() : Rhombus(5, 6, 8) {}

    Rhombus::Rhombus(double sideA, double diagonal1, double diagonal2) {
        SetSideA(sideA);
        SetDiagonal1(diagonal1);
        SetDiagonal2(diagonal2);
    }

    Rhombus::~Rhombus() {}

    void Rhombus::SetSideA(double sideA) {
        this->sideA = sideA;
    }

    void Rhombus::SetDiagonal1(double diagonal1) {
        this->diagonal1 = diagonal1;
    }

    void Rhombus::SetDiagonal2(double diagonal2) {
        this->diagonal2 = diagonal2;
    }

    double Rhombus::GetSideA() const {
        return sideA;
    }

    double Rhombus::GetDiagonal1() const {
        return diagonal1;
    }

    double Rhombus::GetDiagonal2() const {
        return diagonal2;
    }

    void Rhombus::Area() const {
        double area = (diagonal1 * diagonal2) / 2;
        cout << "Area of rhombus: " << area << " m2\n";
    }

    void Rhombus::Perimeter() const {
        double perimeter = sideA * 4;
        cout << "Perimeter of rhombus: " << perimeter << " m\n";
    }

    void Rhombus::Draw() const {
        cout << "Drawing a rhombus...\n";
    }
