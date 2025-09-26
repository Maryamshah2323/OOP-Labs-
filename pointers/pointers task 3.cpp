#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
    // Open the file in read mode using a pointer
    ifstream* file = new ifstream("notes.txt");

    // Check if the file is opened successfully
    if (!file->is_open()) {
        cout << "Failed to open notes.txt" << endl;
        delete file; // Free memory
        return 1;
    }

    string* line = new string; // Pointer to store each line
    int lineCount = 0;

    // Read line by line and count
    while (getline(*file, *line)) {
        lineCount++;
    }

    file->close(); // Close the file
    delete file;   // Free file stream memory
    delete line;   // Free line memory

    // Display total number of lines
    cout << "Total number of lines in notes.txt: " << lineCount << endl;

    return 0;
}

