#include "Polygon.h"

    Polygon::Polygon() : Polygon(points) {}

    Polygon::Polygon(vector<Point> points) {
        SetPoints(points);
    }

    Polygon::~Polygon() {}

    void Polygon::SetPoints(vector<Point> points) {
        this->points = points;
    }

    vector<Point> Polygon::GetPoints() const {
        return points;
    }

    void Polygon::Area() const {
        double area = 0;
        for (int i = 0; i < points.size(); i++) {
            int j = (i + 1) % points.size();
            area += (points[i].GetX() * points[j].GetY()) - (points[j].GetX() * points[i].GetY());
        }
        cout << "Area of polygon: " << abs(area) / 2 << " m2\n";
    }

    void Polygon::Perimeter() const {
        double perimeter = 0;
        for (int i = 0; i < points.size(); i++) {
            int j = (i + 1) % points.size();
            perimeter += sqrt(pow(points[j].GetX() - points[i].GetX(), 2) + pow(points[j].GetY() - points[i].GetY(), 2));
        }
        cout << "Perimeter of polygon: " << perimeter << " m\n";
    }

    void Polygon::Draw() const {
        cout << "Drawing a polygon...\n";
    }
