#include "Deltoid.h"

    Deltoid::Deltoid() : Deltoid(5, 5, 6, 8) {}

    Deltoid::Deltoid(double sideA, double sideB, double diagonal1, double diagonal2) {
        SetSideA(sideA);
        SetSideB(sideB);
        SetDiagonal1(diagonal1);
        SetDiagonal2(diagonal2);
    }

    Deltoid::~Deltoid() {}

    void Deltoid::SetSideA(double sideA) {
        this->sideA = sideA;
    }

    void Deltoid::SetSideB(double sideB) {
        this->sideB = sideB;
    }

    void Deltoid::SetDiagonal1(double diagonal1) {
        this->diagonal1 = diagonal1;
    }

    void Deltoid::SetDiagonal2(double diagonal2) {
        this->diagonal2 = diagonal2;
    }

    double Deltoid::GetSideA() const {
        return sideA;
    }

    double Deltoid::GetSideB() const {
        return sideB;
    }

    double Deltoid::GetDiagonal1() const {
        return diagonal1;
    }

    double Deltoid::GetDiagonal2() const {
        return diagonal2;
    }

    void Deltoid::Area() const {
        double area = (diagonal1 * diagonal2) / 2;
        cout << "Area of deltoid: " << area << " m2\n";
    }

    void Deltoid::Perimeter() const {
        double perimeter = 2 * (sideA + sideB);
        cout << "Perimeter of deltoid: " << perimeter << " m\n";
    }

    void Deltoid::Draw() const {
        cout << "Drawing a deltoid...\n";
    }