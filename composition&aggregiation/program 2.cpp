#include <iostream>
#include <string>

// Calculator class
class Calculator {
public:
    double add(double a, double b) {
        return a + b;
    }

    double subtract(double a, double b) {
        return a - b;
    }

    double multiply(double a, double b) {
        return a * b;
    }

    double divide(double a, double b) {
        if (b != 0)
            return a / b;
        std::cerr << "Error: Division by zero!" << std::endl;
        return 0;
    }
};

// Student class uses Calculator (aggregation)
class Student {
private:
    std::string name;
    Calculator* calculator;  // Aggregation: shared pointer to external Calculator

public:
    Student(const std::string& studentName, Calculator* calc)
        : name(studentName), calculator(calc) {}

    void doCalculation(double a, double b, char op) {
        if (!calculator) {
            std::cout << name << " has no calculator assigned!" << std::endl;
            return;
        }

        double result = 0;
        switch (op) {
            case '+': result = calculator->add(a, b); break;
            case '-': result = calculator->subtract(a, b); break;
            case '*': result = calculator->multiply(a, b); break;
            case '/': result = calculator->divide(a, b); break;
            default:
                std::cout << "Invalid operator." << std::endl;
                return;
        }

        std::cout << name << "'s Result: " << result << std::endl;
    }
};

int main() {
    Calculator sharedCalculator;

    Student alice("Alice", &sharedCalculator);
    Student bob("Bob", &sharedCalculator);
    Student charlie("Charlie", &sharedCalculator);

    alice.doCalculation(5, 3, '+');     // Alice's Result: 8
    bob.doCalculation(10, 2, '/');      // Bob's Result: 5
    charlie.doCalculation(4, 6, '*');   // Charlie's Result: 24

    return 0;
}

