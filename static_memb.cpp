#include <iostream>
using namespace std;

class Item {
    static int count;
public:
    Item() {
        count++;
    }
    static void displayCount() {
        cout << "Number of objects: " << count << endl;
    }
};

int Item::count = 0;

int main() {
    Item a, b, c;
    Item::displayCount();
    return 0;
}
