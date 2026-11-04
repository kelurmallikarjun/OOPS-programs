#include <iostream>
using namespace std;

class Shape {
public:
    virtual double area() = 0;
    virtual ~Shape() = default;
};

class Rectangle : public Shape {
    double length, width;
public:
    Rectangle(double l, double w) : length(l), width(w) {}
    double area() override {
        return length * width;
    }
};

int main() {
    Rectangle r(4, 5);
    cout << "Area: " << r.area() << endl;
    return 0;
}
