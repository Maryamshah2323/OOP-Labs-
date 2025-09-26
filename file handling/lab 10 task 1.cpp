#include <iostream>
#include <fstream>
using namespace std;

int main() {
    // Step 1 & 2: Create and write three lines to notes.txt
    ofstream outFile("notes.txt"); // creates file and opens in write mode
    if (outFile.is_open()) {
        outFile << "Line 1: Welcome to File Handling in C++.\n";
        outFile << "Line 2: This is a sample text file.\n";
        outFile << "Line 3: We are writing multiple lines.\n";
        outFile.close();
        cout << "File created and written successfully.\n";
    } else {
        cout << "Unable to open file for writing.\n";
        return 1;
    }

    // Step 3: Open file in read mode and display contents
    ifstream inFile("notes.txt");
    string line;
    cout << "\nContents of notes.txt:\n";
    if (inFile.is_open()) {
        while (getline(inFile, line)) {
            cout << line << endl;
        }
        inFile.close();
    } else {
        cout << "Unable to open file for reading.\n";
        return 1;
    }

    // Step 4: Append name and roll number
    ofstream appendFile("notes.txt", ios::app); // append mode
    if (appendFile.is_open()) {
        appendFile << "Name: John Doe, Roll No: 12345\n";
        appendFile.close();
        cout << "\nName and Roll No appended successfully.\n";
    } else {
        cout << "Unable to open file for appending.\n";
        return 1;
    }

    return 0;
}

