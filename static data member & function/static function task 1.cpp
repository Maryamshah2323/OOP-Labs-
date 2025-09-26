#include <iostream>
using namespace std;

class Counter {
private:
    static int count;  // Static data member

public:
    Counter() {
        count++;  // Increment static member in constructor
    }

    static void showCount() {  // Static function to access static member
        cout << "Number of objects created: " << count << endl;
    }
};

// Definition and initialization of static data member
int Counter::count = 0;

int main() {
    Counter::showCount();  // Show count before any object is created

    Counter obj1;
    Counter::showCount();  // After 1 object

    Counter obj2, obj3;
    Counter::showCount();  // After 3 objects

    return 0;
}

