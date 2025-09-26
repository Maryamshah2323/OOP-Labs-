#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
    // Open the file in read mode
    ifstream file("notes.txt");

    // Check if the file is opened successfully
    if (!file.is_open()) {
        cout << "Failed to open notes.txt" << endl;
        return 1;
    }

    string line;
    int lineCount = 0;

    // Read line by line and count
    while (getline(file, line)) {
        lineCount++;
    }

    file.close(); // Close the file

    // Display total number of lines
    cout << "Total number of lines in notes.txt: " << lineCount << endl;

    return 0;
}

