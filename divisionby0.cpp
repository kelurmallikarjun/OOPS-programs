#include <iostream>
using namespace std;

double divide(double a, double b) {
    if (b == 0) {
        throw "Division by zero is not allowed";
    }
    return a / b;
}

int main() {
    try {
        cout << divide(50, 0) << endl;
    } catch (const char *message) {
        cout << message << endl;
    }
    return 0;
}
