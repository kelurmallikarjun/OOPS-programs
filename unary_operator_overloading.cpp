#include <iostream>
using namespace std;

class Counter {
    int value;
public:
    Counter(int v = 0) : value(v) {}

    Counter& operator++() {
        ++value;
        return *this;
    }

    Counter operator++(int) {
        Counter old = *this;
        value++;
        return old;
    }

    int getValue() const {
        return value;
    }
};

int main() {
    Counter c(5);
    cout << "Post-increment: " << c++.getValue() << endl;
    cout << "After post-increment: " << c.getValue() << endl;
    cout << "Pre-increment: " << (++c).getValue() << endl;
    return 0;
}
