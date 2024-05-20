#include "EquilateralAcuteTriangle.h"

    EquilateralAcuteTriangle::EquilateralAcuteTriangle() : EquilateralAcuteTriangle(6, 6, 6) {}

    EquilateralAcuteTriangle::EquilateralAcuteTriangle(double sideA, double sideB, double sideC) {
        SetSideA(sideA);
        SetSideB(sideB);
        SetSideC(sideC);
    }

    EquilateralAcuteTriangle::~EquilateralAcuteTriangle() {}

    void EquilateralAcuteTriangle::SetSideA(double sideA) {
        this->sideA = sideA;
    }

    void EquilateralAcuteTriangle::SetSideB(double sideB) {
        this->sideB = sideB;
    }

    void EquilateralAcuteTriangle::SetSideC(double sideC) {
        this->sideC = sideC;
    }

    double EquilateralAcuteTriangle::GetSideA() const {
        return sideA;
    }

    double EquilateralAcuteTriangle::GetSideB() const {
        return sideB;
    }

    double EquilateralAcuteTriangle::GetSideC() const {
        return sideC;
    }

    void EquilateralAcuteTriangle::Area() const {
        double area = pow(sideA, 2) * (sqrt(3) / 4);
        cout << "Area of equilateral acute triangle: " << area << " m2\n";
    }

    void EquilateralAcuteTriangle::Perimeter() const {
        double perimeter = sideA + sideB + sideC;
        cout << "Perimeter of equilateral acute triangle: " << perimeter << " m\n";
    }

    void EquilateralAcuteTriangle::Draw() const {
        cout << "Drawing a equilateral acute triangle...\n";
    }
