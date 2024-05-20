#include "Straight.h"

    Straight::Straight() : Straight(length) {}

    Straight::Straight(double length) {
        SetLength(length);
    }

    Straight::~Straight() {}

    void Straight::SetLength(double length) {
        this->length = length;
    }

    double Straight::GetLength() const {
        return length;
    }

    void Straight::Area() const {
        cout << "No area in straight." << "\n";
    }

    void Straight::Perimeter() const {
        cout << "Length: " << length << "\n";
    }

    void Straight::Draw() const {
        cout << "Drawing a straight...\n";
    }
