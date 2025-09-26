#include <iostream>
using namespace std;

class Rectangle {
private:
    float length;
    float width;

public:
    // Default constructor
    Rectangle() {
        length = 1.0;
        width = 1.0;
    }

    // Two-parameter constructor
    Rectangle(float l, float w) {
        length = l;
        width = w;
    }

    // Single-parameter constructor (for square)
    Rectangle(float side) {
        length = side;
        width = side;
    }

    // Method to calculate area
    float area() {
        return length * width;
    }

    // Method to display details
    void display() {
        cout << "Length: " << length << ", Width: " << width << endl;
        cout << "Area: " << area() << endl;
    }
};

int main() {
    // Object using default constructor
    Rectangle rect1;
    cout << "=== Default Constructor ===" << endl;
    rect1.display();

    // Object using two-parameter constructor
    Rectangle rect2(4.5, 3.2);
    cout << "\n=== Two-Parameter Constructor ===" << endl;
    rect2.display();

    // Object using single-parameter constructor (square)
    Rectangle rect3(5.0);
    cout << "\n=== Single-Parameter Constructor (Square) ===" << endl;
    rect3.display();

    return 0;
}

