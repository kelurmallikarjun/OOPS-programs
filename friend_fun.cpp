#include <iostream>
using namespace std;

class Number {
    int value;
public:
    Number(int v) : value(v) {}
    friend int sum(Number, Number);
};

int sum(Number a, Number b) {
    return a.value + b.value;
}

int main() {
    Number a(10), b(20);
    cout << "Sum: " << sum(a, b) << endl;
    return 0;
}
