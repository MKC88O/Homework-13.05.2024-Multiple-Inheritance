#include "IsoscelesRectangularTriangle.h"
    IsoscelesRectangularTriangle::IsoscelesRectangularTriangle() : IsoscelesRectangularTriangle(5, 5, 7) {}

    IsoscelesRectangularTriangle::IsoscelesRectangularTriangle(double sideA, double sideB, double sideC) {
        SetSideA(sideA);
        SetSideB(sideB);
        SetSideC(sideC);
    }

    IsoscelesRectangularTriangle::~IsoscelesRectangularTriangle() {}

    void IsoscelesRectangularTriangle::SetSideA(double sideA) {
        this->sideA = sideA;
    }

    void IsoscelesRectangularTriangle::SetSideB(double sideB) {
        this->sideB = sideB;
    }

    void IsoscelesRectangularTriangle::SetSideC(double sideC) {
        this->sideC = sideC;
    }

    double IsoscelesRectangularTriangle::GetSideA() const {
        return sideA;
    }

    double IsoscelesRectangularTriangle::GetSideB() const {
        return sideB;
    }

    double IsoscelesRectangularTriangle::GetSideC() const {
        return sideC;
    }

    void IsoscelesRectangularTriangle::Area() const {
        double area = sideA * sideB / 2;
        cout << "Area of isosceles rectangular triangle: " << area << " m2\n";
    }

    void IsoscelesRectangularTriangle::Perimeter() const {
        double perimeter = sideA + sideB + sideC;
        cout << "Perimeter of isosceles rectangular triangle: " << perimeter << " m\n";
    }

    void IsoscelesRectangularTriangle::Draw() const {
        cout << "Drawing a isosceles rectangular triangle...\n";
    }
