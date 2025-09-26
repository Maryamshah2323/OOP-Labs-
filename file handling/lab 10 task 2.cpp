#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
    ifstream file("notes.txt"); // Open file in read mode
    string line;
    int lineCount = 0;

    if (file.is_open()) {
        while (getline(file, line)) {
            lineCount++; // Count each line
        }
        file.close();

        cout << "Total number of lines in notes.txt: " << lineCount << endl;
    } else {
        cout << "Unable to open notes.txt\n";
    }

    return 0;
}

