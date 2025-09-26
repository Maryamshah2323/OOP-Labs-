#include <iostream>
using namespace std;

class Counter {
private:
    static int count;  // Static data member to track number of objects

public:
    Counter() {
        count++;  // Increment count each time an object is created
    }

    // Static member function to print the total object count
    static void print() {
        cout << "Total number of objects created: " << count << endl;
    }
};

// Definition and initialization of static data member outside the class
int Counter::count = 0;

int main() {
    // Call static function without creating any object
    Counter::print();  // Output: 0

    Counter obj1;
    Counter::print();  // Output: 1

    Counter obj2, obj3;
    Counter::print();  // Output: 3

    return 0;
}

