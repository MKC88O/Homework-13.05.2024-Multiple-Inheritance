#include "OrdinaryRectangularTriangle.h"

    OrdinaryRectangularTriangle::OrdinaryRectangularTriangle() : OrdinaryRectangularTriangle(3, 4, 5) {}

    OrdinaryRectangularTriangle::OrdinaryRectangularTriangle(double sideA, double sideB, double sideC) {
        SetSideA(sideA);
        SetSideB(sideB);
        SetSideC(sideC);
    }

    OrdinaryRectangularTriangle::~OrdinaryRectangularTriangle() {}

    void OrdinaryRectangularTriangle::SetSideA(double sideA) {
        this->sideA = sideA;
    }

    void OrdinaryRectangularTriangle::SetSideB(double sideB) {
        this->sideB = sideB;
    }

    void OrdinaryRectangularTriangle::SetSideC(double sideC) {
        this->sideC = sideC;
    }

    double OrdinaryRectangularTriangle::GetSideA() const {
        return sideA;
    }

    double OrdinaryRectangularTriangle::GetSideB() const {
        return sideB;
    }

    double OrdinaryRectangularTriangle::GetSideC() const {
        return sideC;
    }

    void OrdinaryRectangularTriangle::Area() const {
        double area = sideA * sideB / 2;
        cout << "Area of ordinary rectangular triangle: " << area << " m2\n";
    }

    void OrdinaryRectangularTriangle::Perimeter() const {
        double perimeter = sideA + sideB + sideC;
        cout << "Perimeter of ordinary rectangular triangle: " << perimeter << " m\n";
    }

    void OrdinaryRectangularTriangle::Draw() const {
        cout << "Drawing a ordinary rectangular triangle...\n";
    }
