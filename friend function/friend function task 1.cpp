#include <iostream>
#include <cmath> // For M_PI

class Circle; // Forward declaration

class Rectangle {
private:
    double length;
    double width;

public:
    // Constructor
    Rectangle(double l, double w) : length(l), width(w) {}

    // Declare friend function
    friend double totalArea(const Rectangle& rect, const Circle& circ);
};

class Circle {
private:
    double radius;

public:
    // Constructor
    Circle(double r) : radius(r) {}

    // Declare friend function
    friend double totalArea(const Rectangle& rect, const Circle& circ);
};

// Friend function definition
double totalArea(const Rectangle& rect, const Circle& circ) {
    double rectArea = rect.length * rect.width;
    double circArea = M_PI * circ.radius * circ.radius;
    return rectArea + circArea;
}

int main() {
    Rectangle rect(10.0, 5.0);
    Circle circ(3.0);

    double area = totalArea(rect, circ);
    std::cout << "Combined Area of Rectangle and Circle: " << area << std::endl;

    return 0;
}

