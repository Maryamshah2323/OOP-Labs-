#include <iostream>

class Display {
private:
    double lastResult;

public:
    Display() : lastResult(0.0) {}

    void show(double result) {
        lastResult = result;
        std::cout << "Result: " << result << std::endl;
    }

    void showLastResult() const {
        std::cout << "Last Result: " << lastResult << std::endl;
    }

    double getLastResult() const {
        return lastResult;
    }
};

class Calculator {
private:
    Display display;

public:
    void add(double a, double b) {
        double result = a + b;
        display.show(result);
    }

    void subtract(double a, double b) {
        double result = a - b;
        display.show(result);
    }

    void multiply(double a, double b) {
        double result = a * b;
        display.show(result);
    }

    void divide(double a, double b) {
        if (b != 0) {
            double result = a / b;
            display.show(result);
        } else {
            std::cout << "Error: Division by zero!" << std::endl;
        }
    }

    void showLastResult() const {
        display.showLastResult();
    }

    double getLastResult() const {
        return display.getLastResult();
    }
};

int main() {
    Calculator calc;

    calc.add(10, 5);         // Result: 15
    calc.showLastResult();   // Last Result: 15

    calc.multiply(3, 7);     // Result: 21
    calc.showLastResult();   // Last Result: 21

    calc.divide(10, 0);      // Error
    calc.showLastResult();   // Still shows: 21

    return 0;
}

