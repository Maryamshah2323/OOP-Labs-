#include <iostream>
using namespace std;

class BankAccount {
private:
    float* balance;  // pointer to dynamically allocated memory

public:
    // Constructor
    BankAccount(float initialBalance) {
        balance = new float;
        *balance = initialBalance;
        cout << "Constructor: Balance allocated at " << balance << " with value $" << *balance << endl;
    }

    // Destructor
    ~BankAccount() {
        cout << "Destructor: Releasing balance at " << balance << endl;
        delete balance; // Potential double delete if shallow copy exists
    }

    // Function to set balance
    void setBalance(float newBalance) {
        *balance = newBalance;
    }

    // Function to display balance
    void display() {
        cout << "Balance at " << balance << " is $" << *balance << endl;
    }
};

int main() {
    cout << "Creating original account...\n";
    BankAccount acc1(1000.0);  // Constructor called
    acc1.display();

    cout << "\nCopying account using default (shallow) copy constructor...\n";
    BankAccount acc2 = acc1;  // Shallow copy (default copy constructor)
    acc2.display();

    cout << "\nModifying copied account balance...\n";
    acc2.setBalance(5000.0);

    // Display both balances
    cout << "\nOriginal account:\n";
    acc1.display();  // Will also show updated balance due to shared memory

    cout << "\nCopied account:\n";
    acc2.display();

    // Destructor will be called for both objects
    // Leading to double delete and potential crash or undefined behavior

    return 0;
}

