#include <iostream>
using namespace std;

int divide(int numerator, int denominator) {
    if (denominator == 0) {
        throw "Division by zero error!";  // Throwing a string literal as an exception
    }
    return numerator / denominator;
}

int main() {
    int a, b;
    cout << "Enter numerator: ";
    cin >> a;
    cout << "Enter denominator: ";
    cin >> b;

    try {
        int result = divide(a, b);
        cout << "Result: " << result << endl;
    } catch (const char* msg) {
        cerr << "Exception caught: " << msg << endl;
    }

    return 0;
}

