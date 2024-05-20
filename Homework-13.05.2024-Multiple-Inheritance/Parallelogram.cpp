#include "Parallelogram.h"
    Parallelogram::Parallelogram() : Parallelogram(5, 7, 4) {}

    Parallelogram::Parallelogram(double sideA, double sideB, double height) {
        SetSideA(sideA);
        SetSideB(sideB);
        SetHeight(height);
    }

    Parallelogram::~Parallelogram() {}

    void Parallelogram::SetSideA(double sideA) {
        this->sideA = sideA;
    }

    void Parallelogram::SetSideB(double sideB) {
        this->sideB = sideB;
    }

    void Parallelogram::SetHeight(double height) {
        this->height = height;
    }

    double Parallelogram::GetSideA() const {
        return sideA;
    }

    double Parallelogram::GetSideB() const {
        return sideB;
    }

    double Parallelogram::GetHeight() const {
        return height;
    }

    void Parallelogram::Area() const {
        double area = sideB * height;
        cout << "Area of parallelogram: " << area << " m2\n";
    }

    void Parallelogram::Perimeter() const {
        double perimeter = (sideA + sideB) * 2;
        cout << "Perimeter of parallelogram: " << perimeter << " m\n";
    }

    void Parallelogram::Draw() const {
        cout << "Drawing a parallelogram...\n";
    }
