#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
    // Step 1 & 2: Create file and write student details
    ofstream outFile("students.txt");
    if (outFile.is_open()) {
        outFile << "Name: Alice, Roll No: 101\n";
        outFile << "Name: Bob, Roll No: 102\n";
        outFile << "Name: Charlie, Roll No: 103\n";
        outFile.close();
        cout << "Student details written to students.txt successfully.\n";
    } else {
        cout << "Unable to open students.txt for writing.\n";
        return 1;
    }

    // Step 3: Read and display the file contents
    ifstream inFile("students.txt");
    string line;
    cout << "\nStudent Details from students.txt:\n";
    if (inFile.is_open()) {
        while (getline(inFile, line)) {
            cout << line << endl;
        }
        inFile.close();
    } else {
        cout << "Unable to open students.txt for reading.\n";
        return 1;
    }

    return 0;
}

