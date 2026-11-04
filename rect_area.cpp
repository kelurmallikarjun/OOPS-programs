#include <iostream>
using namespace std;

class Rectangle {
    double length, width;
public:
    void setValues(double l, double w) {
        length = l;
        width = w;
    }
    double area() {
        return length * width;
    }
};

int main() {
    Rectangle r;
    double l, w;
    cout << "Enter length and width: ";
    cin >> l >> w;
    r.setValues(l, w);
    cout << "Area: " << r.area() << endl;
    return 0;
}
