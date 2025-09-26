#include <iostream>
using namespace std;

class BankAccount {
private:
    float* balance;

public:
    // Constructor
    BankAccount(float initialBalance) {
        balance = new float;
        *balance = initialBalance;
        cout << "Constructor: Balance allocated at " << balance << " with value $" << *balance << endl;
    }

    // Deep Copy Constructor
    BankAccount(const BankAccount& other) {
        balance = new float;                 // allocate new memory
        *balance = *(other.balance);         // copy value, not pointer
        cout << "Copy Constructor (Deep): New balance allocated at " << balance
             << " with copied value $" << *balance << endl;
    }

    // Destructor
    ~BankAccount() {
        cout << "Destructor: Releasing balance at " << balance << endl;
        delete balance;
    }

    // Set new balance
    void setBalance(float newBalance) {
        *balance = newBalance;
    }

    // Display current balance
    void display() const {
        cout << "Balance at " << balance << " is $" << *balance << endl;
    }
};

int main() {
    cout << "Creating original account...\n";
    BankAccount acc1(1000.0);  // Original account
    acc1.display();

    cout << "\nCreating a deep copy of the original account...\n";
    BankAccount acc2 = acc1;  // Deep copy
    acc2.display();

    cout << "\nModifying copied account balance...\n";
    acc2.setBalance(5000.0);  // Modify copy

    // Display both accounts to show they are independent
    cout << "\nOriginal account:\n";
    acc1.display();

    cout << "\nCopied account (after modification):\n";
    acc2.display();

    return 0;
}

