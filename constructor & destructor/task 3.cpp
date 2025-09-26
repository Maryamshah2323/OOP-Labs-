#include <iostream>
using namespace std;

class Locker {
public:
    // Constructor
    Locker() {
        cout << "Locker allocated to customer." << endl;
    }

    // Destructor
    ~Locker() {
        cout << "Locker returned by customer." << endl;
    }
};

int main() {
    cout << "Entering block...\n";

    // Object created on stack (automatic storage)
    {
        Locker locker1;  // Constructor is called here
    }                   // Destructor is called here (end of block)

    cout << "Exited block.\n\n";

    // Object created on heap (dynamic storage)
    Locker* locker2 = new Locker(); // Constructor is called
    delete locker2;                 // Destructor is called manually using delete

    return 0;
}

