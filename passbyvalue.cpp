#include <iostream>
using namespace std;

void change(int x) {
    x = 100;
}

int main() {
    int a = 10;
    change(a);
    cout << "Value after function call: " << a << endl;
    return 0;
}
