#include <iostream>
using namespace std;

class Base {
public:
    virtual void show() {
        cout << "Base class" << endl;
    }
    virtual ~Base() = default;
};

class Derived : public Base {
public:
    void show() override {
        cout << "Derived class" << endl;
    }
};

int main() {
    Derived d;
    Base *ptr = &d;
    ptr->show();
    return 0;
}
