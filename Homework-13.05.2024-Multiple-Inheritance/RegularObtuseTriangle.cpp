#include "RegularObtuseTriangle.h"

    RegularObtuseTriangle::RegularObtuseTriangle() : RegularObtuseTriangle(7, 10, 5) {}

    RegularObtuseTriangle::RegularObtuseTriangle(double sideA, double sideB, double sideC) {
        SetSideA(sideA);
        SetSideB(sideB);
        SetSideC(sideC);
    }

    RegularObtuseTriangle::~RegularObtuseTriangle() {}

    void RegularObtuseTriangle::SetSideA(double sideA) {
        this->sideA = sideA;
    }

    void RegularObtuseTriangle::SetSideB(double sideB) {
        this->sideB = sideB;
    }

    void RegularObtuseTriangle::SetSideC(double sideC) {
        this->sideC = sideC;
    }

    double RegularObtuseTriangle::GetSideA() const {
        return sideA;
    }

    double RegularObtuseTriangle::GetSideB() const {
        return sideB;
    }

    double RegularObtuseTriangle::GetSideC() const {
        return sideC;
    }

    void RegularObtuseTriangle::Area() const {
        double poluPerimeter = (sideA + sideB + sideC) / 2;
        double area = sqrt(poluPerimeter * (poluPerimeter - sideA) * (poluPerimeter - sideB) * (poluPerimeter - sideC));
        cout << "Area of regular obtuse triangle: " << area << " m2\n";
    }

    void RegularObtuseTriangle::Perimeter() const {
        double perimeter = sideA + sideB + sideC;
        cout << "Perimeter of regular obtuse triangle: " << perimeter << " m\n";
    }

    void RegularObtuseTriangle::Draw() const {
        cout << "Drawing a regular obtuse triangle...\n";
    }
