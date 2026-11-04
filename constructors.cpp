#include <iostream>
using namespace std;

class Rectangle {
    int length, width;
public:
    Rectangle() : length(1), width(1) {}
    Rectangle(int l, int w) : length(l), width(w) {}
    Rectangle(const Rectangle &r) : length(r.length), width(r.width) {}

    void display() {
        cout << "Length: " << length
             << ", Width: " << width
             << ", Area: " << length * width << endl;
    }
};

int main() {
    Rectangle r1;
    Rectangle r2(4, 5);
    Rectangle r3(r2);
    r1.display();
    r2.display();
    r3.display();
    return 0;
}
