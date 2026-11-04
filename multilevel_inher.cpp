#include <iostream>
using namespace std;

class Person {
public:
    void showPerson() {
        cout << "Person class" << endl;
    }
};

class Student : public Person {
public:
    void showStudent() {
        cout << "Student class" << endl;
    }
};

class EngineeringStudent : public Student {
public:
    void showEngineeringStudent() {
        cout << "Engineering student class" << endl;
    }
};

int main() {
    EngineeringStudent s;
    s.showPerson();
    s.showStudent();
    s.showEngineeringStudent();
    return 0;
}
