#include <iostream>
using namespace std;

int main() {
    int number = -5;

    try {
        if (number < 0) {
            throw number;
        }
        cout << "Number is valid" << endl;
    } catch (int value) {
        cout << "Exception caught: " << value << endl;
    }

    return 0;
}
