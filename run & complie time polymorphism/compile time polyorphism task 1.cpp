#include <iostream>

class Calculator {
public:
    // Additions
    int add(int a, int b) {
        return a + b;
    }

    double add(double a, double b) {
        return a + b;
    }

    // Subtractions
    int subtract(int a, int b) {
        return a - b;
    }

    double subtract(double a, double b) {
        return a - b;
    }

    // Multiplications
    int multiply(int a, int b) {
        return a * b;
    }

    double multiply(double a, double b) {
        return a * b;
    }

    // Divisions
    double divide(int a, int b) {
        if (b == 0) {
            std::cerr << "Error: Division by zero!" << std::endl;
            return 0;
        }
        return static_cast<double>(a) / b;
    }

    double divide(double a, double b) {
        if (b == 0.0) {
            std::cerr << "Error: Division by zero!" << std::endl;
            return 0;
        }
        return a / b;
    }
};
int main() {
    Calculator calc;

    // Add
    std::cout << "Add (int): " << calc.add(10, 5) << std::endl;
    std::cout << "Add (double): " << calc.add(10.5, 5.3) << std::endl;

    // Subtract
    std::cout << "Subtract (int): " << calc.subtract(10, 5) << std::endl;
    std::cout << "Subtract (double): " << calc.subtract(10.5, 5.3) << std::endl;

    // Multiply
    std::cout << "Multiply (int): " << calc.multiply(4, 3) << std::endl;
    std::cout << "Multiply (double): " << calc.multiply(4.5, 2.0) << std::endl;

    // Divide
    std::cout << "Divide (int): " << calc.divide(10, 2) << std::endl;
    std::cout << "Divide (double): " << calc.divide(10.5, 2.5) << std::endl;

    return 0;
}
