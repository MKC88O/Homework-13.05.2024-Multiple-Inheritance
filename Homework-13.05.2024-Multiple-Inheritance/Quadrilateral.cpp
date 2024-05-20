#include "Quadrilateral.h"

    Quadrilateral::Quadrilateral() : Polygon({ Point(0, 0), Point(4, 0), Point(4, 3), Point(4, 8) }) {}

    Quadrilateral::Quadrilateral(vector<Point> point) : Polygon({ Point(0, 0), Point(4, 0), Point(4, 3), Point(4, 8) }) {
        SetPoints(point);
    }

    Quadrilateral::~Quadrilateral() {}

    void Quadrilateral::SetPoints(vector<Point> points) {
        this->points = points;
    }

    void Quadrilateral::SetSideA(double sideA) {
        this->sideA = sideA;
    }

    void Quadrilateral::SetSideB(double sideB) {
        this->sideB = sideB;
    }

    void Quadrilateral::SetSideC(double sideC) {
        this->sideC = sideC;
    }

    void Quadrilateral::SetSideD(double sideD) {
        this->sideD = sideD;
    }

    void Quadrilateral::SetHeight(double height) {
        this->height = height;
    }

    vector<Point> Quadrilateral::GetPoints() const {
        return points;
    }

    double Quadrilateral::GetSideA() const {
        return sideA;
    }

    double Quadrilateral::GetSideB() const {
        return sideB;
    }

    double Quadrilateral::GetSideC() const {
        return sideC;
    }

    double Quadrilateral::GetSideD() const {
        return sideD;
    }

    double Quadrilateral::GetHeight() const {
        return height;
    }

    void Quadrilateral::Area() const {
        double area = 0;
        for (int i = 0; i < points.size(); i++) {
            int j = (i + 1) % points.size();
            area += (points[i].GetX() * points[j].GetY()) - (points[j].GetX() * points[i].GetY());
        }
        cout << "Area of quadrilateral: " << abs(area) / 2 << " m2\n";
    }

    void Quadrilateral::Perimeter() const {
        double perimeter = 0;
        for (int i = 0; i < points.size(); i++) {
            int j = (i + 1) % points.size();
            perimeter += sqrt(pow(points[j].GetX() - points[i].GetX(), 2) + pow(points[j].GetY() - points[i].GetY(), 2));
        }
        cout << "Perimeter of quadrilateral: " << perimeter << " m\n";
    }

    void Quadrilateral::Draw() const {
        cout << "Drawing a quadrilateral...\n";
    }
