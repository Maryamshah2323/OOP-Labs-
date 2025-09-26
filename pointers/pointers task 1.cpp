#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
    // Step 1 & 2: Create and write three lines to notes.txt using pointer
    ofstream* outFile = new ofstream("notes.txt"); // creates file and opens in write mode
    if (outFile->is_open()) {
        *outFile << "Line 1: Welcome to File Handling in C++.\n";
        *outFile << "Line 2: This is a sample text file.\n";
        *outFile << "Line 3: We are writing multiple lines.\n";
        outFile->close();
        cout << "File created and written successfully.\n";
    } else {
        cout << "Unable to open file for writing.\n";
        delete outFile;
        return 1;
    }
    delete outFile; // Free memory

    // Step 3: Open file in read mode and display contents using pointer
    ifstream* inFile = new ifstream("notes.txt");
    string line;
    cout << "\nContents of notes.txt:\n";
    if (inFile->is_open()) {
        while (getline(*inFile, line)) {
            cout << line << endl;
        }
        inFile->close();
    } else {
        cout << "Unable to open file for reading.\n";
        delete inFile;
        return 1;
    }
    delete inFile;

    // Step 4: Append name and roll number using pointer
    ofstream* appendFile = new ofstream("notes.txt", ios::app); // append mode
    if (appendFile->is_open()) {
        *appendFile << "Name: John Doe, Roll No: 12345\n";
        appendFile->close();
        cout << "\nName and Roll No appended successfully.\n";
    } else {
        cout << "Unable to open file for appending.\n";
        delete appendFile;
        return 1;
    }
    delete appendFile;

    return 0;
}

