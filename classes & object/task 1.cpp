#include <iostream>
#include <string>
using namespace std;

class Student {
private:
    string name;
    int rollNumber;
    float marks;

public:
    // Function to get data from user
    void getData() {
        cout << "Enter student name: ";
        getline(cin, name);

        cout << "Enter roll number: ";
        cin >> rollNumber;

        cout << "Enter marks: ";
        cin >> marks;

        // Clear newline character from input buffer
        cin.ignore();
    }

    // Function to display student data
    void displayData() {
        cout << "\n--- Student Information ---" << endl;
        cout << "Name       : " << name << endl;
        cout << "Roll Number: " << rollNumber << endl;
        cout << "Marks      : " << marks << endl;
    }
};

int main() {
    Student student1;  // Create object of Student class

    student1.getData();       // Input student data
    student1.displayData();   // Display student data

    return 0;
}

