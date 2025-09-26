#include <iostream>
#include <string>
using namespace std;

class Employee {
private:
    int id;
    string name;
    float salary;

public:
    // Default constructor
    Employee() {
        id = 0;
        name = "Not Assigned";
        salary = 0.0;
    }

    // Method to display employee details
    void displayDetails() {
        cout << "Employee ID: " << id << endl;
        cout << "Employee Name: " << name << endl;
        cout << "Employee Salary: $" << salary << endl;
    }
};

int main() {
    // Create object using default constructor
    Employee emp;

    // Display employee details
    cout << "=== Employee Details ===" << endl;
    emp.displayDetails();

    return 0; // Make sure main returns 0
}

