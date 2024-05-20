#include "RegularAcuteTriangle.h"

    RegularAcuteTriangle::RegularAcuteTriangle() : RegularAcuteTriangle(5, 6, 7) {}

    RegularAcuteTriangle::RegularAcuteTriangle(double sideA, double sideB, double sideC) {
        SetSideA(sideA);
        SetSideB(sideB);
        SetSideC(sideC);
    }

    RegularAcuteTriangle::~RegularAcuteTriangle() {}

    void RegularAcuteTriangle::SetSideA(double sideA) {
        this->sideA = sideA;
    }

    void RegularAcuteTriangle::SetSideB(double sideB) {
        this->sideB = sideB;
    }

    void RegularAcuteTriangle::SetSideC(double sideC) {
        this->sideC = sideC;
    }

    double RegularAcuteTriangle::GetSideA() const {
        return sideA;
    }

    double RegularAcuteTriangle::GetSideB() const {
        return sideB;
    }

    double RegularAcuteTriangle::GetSideC() const {
        return sideC;
    }

    void RegularAcuteTriangle::Area() const {
        double poluPerimeter = (sideA + sideB + sideC) / 2;
        double area = sqrt(poluPerimeter * (poluPerimeter - sideA) * (poluPerimeter - sideB) * (poluPerimeter - sideC));
        cout << "Area of regular acute triangle: " << area << " m2\n";
    }

    void RegularAcuteTriangle::Perimeter() const {
        double perimeter = sideA + sideB + sideC;
        cout << "Perimeter of regular acute triangle: " << perimeter << " m\n";
    }

    void RegularAcuteTriangle::Draw() const {
        cout << "Drawing a regular acute triangle...\n";
    }
