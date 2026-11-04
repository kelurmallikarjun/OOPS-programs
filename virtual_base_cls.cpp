#include <iostream>
using namespace std;

class A {
public:
    int value;
};

class B : virtual public A {};
class C : virtual public A {};

class D : public B, public C {};

int main() {
    D obj;
    obj.value = 10;
    cout << "Shared base value: " << obj.value << endl;
    return 0;
}
