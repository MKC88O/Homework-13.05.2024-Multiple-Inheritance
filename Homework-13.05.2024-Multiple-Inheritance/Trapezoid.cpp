#include "Trapezoid.h"
    Trapezoid::Trapezoid() : Trapezoid(5, 6, 5, 12, 4) {}

    Trapezoid::Trapezoid(double sideA, double sideB, double sideC, double sideD, double height) {
        SetSideA(sideA);
        SetSideB(sideB);
        SetSideC(sideC);
        SetSideD(sideD);
        SetHeight(height);
    }

    Trapezoid::~Trapezoid() {}

    void Trapezoid::SetSideA(double sideA) {
        this->sideA = sideA;
    }

    void Trapezoid::SetSideB(double sideB) {
        this->sideB = sideB;
    }

    void Trapezoid::SetSideC(double sideC) {
        this->sideC = sideC;
    }

    void Trapezoid::SetSideD(double sideD) {
        this->sideD = sideD;
    }

    void Trapezoid::SetHeight(double height) {
        this->height = height;
    }

    double Trapezoid::GetSideA() const {
        return sideA;
    }

    double Trapezoid::GetSideB() const {
        return sideB;
    }

    double Trapezoid::GetSideC() const {
        return sideC;
    }

    double Trapezoid::GetSideD() const {
        return sideD;
    }

    double Trapezoid::GetHeight() const {
        return height;
    }

    void Trapezoid::Area() const {
        double area = ((sideB + sideD) * height) / 2;
        cout << "Area of trapezoid: " << area << " m2\n";
    }

    void Trapezoid::Perimeter() const {
        double perimeter = sideA + sideB + sideC + sideD;
        cout << "Perimeter of trapezoid: " << perimeter << " m\n";
    }

    void Trapezoid::Draw() const {
        cout << "Drawing a trapezoid...\n";
    }