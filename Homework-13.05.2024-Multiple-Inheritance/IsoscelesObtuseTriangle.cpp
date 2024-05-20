#include "IsoscelesObtuseTriangle.h"
    IsoscelesObtuseTriangle::IsoscelesObtuseTriangle() : IsoscelesObtuseTriangle(5, 5, 8) {}

    IsoscelesObtuseTriangle::IsoscelesObtuseTriangle(double sideA, double sideB, double sideC) {
        SetSideA(sideA);
        SetSideB(sideB);
        SetSideC(sideC);
    }

    IsoscelesObtuseTriangle::~IsoscelesObtuseTriangle(){}

    void IsoscelesObtuseTriangle::SetSideA(double sideA) {
        this->sideA = sideA;
    }

    void IsoscelesObtuseTriangle::SetSideB(double sideB) {
        this->sideB = sideB;
    }

    void IsoscelesObtuseTriangle::SetSideC(double sideC) {
        this->sideC = sideC;
    }

    double IsoscelesObtuseTriangle::GetSideA() const {
        return sideA;
    }

    double IsoscelesObtuseTriangle::GetSideB() const {
        return sideB;
    }

    double IsoscelesObtuseTriangle::GetSideC() const {
        return sideC;
    }

    void IsoscelesObtuseTriangle::Area() const {
        double h = sqrt((sideA * sideB) - pow((sideC / 2), 2));
        double area = sideC * h / 2;
        cout << "Area of isosceles obtuse triangle: " << area << " m2\n";
    }

    void IsoscelesObtuseTriangle::Perimeter() const {
        double perimeter = sideA + sideB + sideC;
        cout << "Perimeter of isosceles obtuse triangle: " << perimeter << " m\n";
    }

    void IsoscelesObtuseTriangle::Draw() const {
        cout << "Drawing a isosceles obtuse triangle...\n";
    }
