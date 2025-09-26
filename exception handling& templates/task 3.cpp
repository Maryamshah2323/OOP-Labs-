#include <iostream>
#include <stdexcept>  // for std::runtime_error
using namespace std;

// Template Calculator class
template <typename T>
class Calculator {
private:
    T num1, num2;

public:
    // Constructor
    Calculator(T a, T b) : num1(a), num2(b) {}

    T add() {
        return num1 + num2;
    }

    T subtract() {
        return num1 - num2;
    }

    T multiply() {
        return num1 * num2;
    }

    T divide() {
        if (num2 == 0) {
            throw runtime_error("Division by zero is not allowed!");
        }
        return num1 / num2;
    }
};

int main() {
    char op;
    double a, b;

    cout << "Enter first number: ";
    cin >> a;

    cout << "Enter second number: ";
    cin >> b;

    cout << "Enter operation (+, -, *, /): ";
    cin >> op;

    try {
        Calculator<double> calc(a, b);  // Use double as the type

        switch (op) {
            case '+':
                cout << "Result: " << calc.add() << endl;
                break;
            case '-':
                cout << "Result: " << calc.subtract() << endl;
                break;
            case '*':
                cout << "Result: " << calc.multiply() << endl;
                break;
            case '/':
                cout << "Result: " << calc.divide() << endl;
                break;
            default:
                cout << "Invalid operation!" << endl;
        }
    } catch (const exception& e) {
        cerr << "Exception caught: " << e.what() << endl;
    }

    return 0;
}

