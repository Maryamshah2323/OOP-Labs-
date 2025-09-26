#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
    // Step 1 & 2: Create file and write student details using pointer
    ofstream* outFile = new ofstream("students.txt"); // dynamically allocated output file stream

    if (outFile->is_open()) {
        *outFile << "Name: Alice, Roll No: 101\n";
        *outFile << "Name: Bob, Roll No: 102\n";
        *outFile << "Name: Charlie, Roll No: 103\n";
        outFile->close(); // close the file
        cout << "Student details written to students.txt successfully.\n";
    } else {
        cout << "Unable to open students.txt for writing.\n";
        delete outFile; // free memory
        return 1;
    }

    delete outFile; // cleanup memory

    // Step 3: Read and display the file contents using pointer
    ifstream* inFile = new ifstream("students.txt"); // dynamically allocated input file stream
    string* line = new string; // dynamically allocated string for reading lines

    cout << "\nStudent Details from students.txt:\n";
    if (inFile->is_open()) {
        while (getline(*inFile, *line)) {
            cout << *line << endl;
        }
        inFile->close(); // close the file
    } else {
        cout << "Unable to open students.txt for reading.\n";
        delete inFile;
        delete line;
        return 1;
    }

    // Cleanup dynamically allocated memory
    delete inFile;
    delete line;

    return 0;
}

