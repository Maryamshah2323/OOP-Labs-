#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
    // Create a pointer to ifstream and open the file
    ifstream* file = new ifstream("notes.txt"); // Open file in read mode using pointer
    string line;
    int lineCount = 0;

    if (file->is_open()) {
        while (getline(*file, line)) {
            lineCount++; // Count each line
        }
        file->close(); // Close the file
        cout << "Total number of lines in notes.txt: " << lineCount << endl;
    } else {
        cout << "Unable to open notes.txt\n";
    }

    delete file; // Free the memory
    return 0;
}

