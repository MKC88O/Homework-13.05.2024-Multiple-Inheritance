#include "Ellipse.h"

    Ellipse::Ellipse() : Ellipse(bigRadius, smallRadius) {}

    Ellipse::Ellipse(double bigRadius, double smallRadius) {
        SetBigRadius(bigRadius);
        SetSmallRadius(smallRadius);
    }

    Ellipse::~Ellipse() {}

    void Ellipse::SetBigRadius(double bigRadius) {
        this->bigRadius = bigRadius;
    }

    void Ellipse::SetSmallRadius(double smallRadius) {
        this->smallRadius = smallRadius;
    }

    double Ellipse::GetBigRadius() const {
        return bigRadius;
    }

    double Ellipse::GetSmallRadius() const {
        return smallRadius;
    }

    void Ellipse::Area() const {
        cout << "Area of ellipse: " << pi * bigRadius * smallRadius << " m2\n";
    }

    void Ellipse::Perimeter() const {
        cout << "Circumference of ellipse: " << 2 * pi * sqrt((pow(bigRadius, 2) + pow(smallRadius, 2)) / 2) << " m\n";
    }

    void Ellipse::Draw() const {
        cout << "Drawing a ellipse...\n";
    }
