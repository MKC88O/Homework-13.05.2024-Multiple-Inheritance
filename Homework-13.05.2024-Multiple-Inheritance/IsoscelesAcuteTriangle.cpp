#include "IsoscelesAcuteTriangle.h"

    IsoscelesAcuteTriangle::IsoscelesAcuteTriangle() : IsoscelesAcuteTriangle(5, 5, 6) {}

    IsoscelesAcuteTriangle::IsoscelesAcuteTriangle(double sideA, double sideB, double sideC) {
        SetSideA(sideA);
        SetSideB(sideB);
        SetSideC(sideC);
    }

    IsoscelesAcuteTriangle::~IsoscelesAcuteTriangle() {}

    void IsoscelesAcuteTriangle::SetSideA(double sideA) {
        this->sideA = sideA;
    }

    void IsoscelesAcuteTriangle::SetSideB(double sideB) {
        this->sideB = sideB;
    }

    void IsoscelesAcuteTriangle::SetSideC(double sideC) {
        this->sideC = sideC;
    }

    double IsoscelesAcuteTriangle::GetSideA() const {
        return sideA;
    }

    double IsoscelesAcuteTriangle::GetSideB() const {
        return sideB;
    }

    double IsoscelesAcuteTriangle::GetSideC() const {
        return sideC;
    }

    void IsoscelesAcuteTriangle::Area() const {
        double h = sqrt((sideA * sideB) - pow((sideC / 2), 2));
        double area = sideC * h / 2;
        cout << "Area of isosceles acute triangle: " << area << " m2\n";
    }

    void IsoscelesAcuteTriangle::Perimeter() const {
        double perimeter = sideA + sideB + sideC;
        cout << "Perimeter of isosceles acute triangle: " << perimeter << " m\n";
    }

    void IsoscelesAcuteTriangle::Draw() const {
        cout << "Drawing a isosceles acute triangle...\n";
    }
