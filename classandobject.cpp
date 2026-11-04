#include <iostream>
#include <string>
using namespace std;

class Student {
    string name;
    int age;
public:
    void setData(string n, int a) {
        name = n;
        age = a;
    }
    void display() {
        cout << "Name: " << name << "\nAge: " << age << endl;
    }
};

int main() {
    Student s;
    s.setData("Sparsha", 21);
    s.display();
    return 0;
}
