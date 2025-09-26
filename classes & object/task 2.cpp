#include <iostream>
using namespace std;

class Rectangle {
private:
    int length;
    int width;

public:
    // Function declarations
    void setDimensions();
    int area();
    int perimeter();
};

// Function definitions (outside the class)

// Set dimensions
void Rectangle::setDimensions() {
    cout << "Enter length: ";
    cin >> length;
    cout << "Enter width: ";
    cin >> width;
}

// Calculate area
int Rectangle::area() {
    return length * width;
}

// Calculate perimeter
int Rectangle::perimeter() {
    return 2 * (length + width);
}

// Main function to test the class
int main() {
    Rectangle rect; // create object

    rect.setDimensions();  // input values

    cout << "Area of rectangle: " << rect.area() << endl;
    cout << "Perimeter of rectangle: " << rect.perimeter() << endl;

    return 0;
}

