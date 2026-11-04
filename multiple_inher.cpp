#include <iostream>
#include <string>
using namespace std;

class Student {
protected:
    string name;
public:
    Student(string n) : name(n) {}
};

class Marks {
protected:
    int m1, m2;
public:
    void setMarks(int a, int b) {
        m1 = a;
        m2 = b;
    }
};

class Result : public Student, public Marks {
public:
    Result(string n) : Student(n) {}
    void display() {
        cout << "Name: " << name << endl;
        cout << "Total: " << m1 + m2 << endl;
    }
};

int main() {
    Result r("Sparsha");
    r.setMarks(85, 90);
    r.display();
    return 0;
}
