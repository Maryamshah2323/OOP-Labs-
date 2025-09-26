#include <iostream>
#include <cmath>  // For M_PI

// Base class
class Shape {
public:
    virtual double area() const = 0; // Pure virtual function
    virtual ~Shape() {}              // Virtual destructor for safety
};

// Derived class: Rectangle
class Rectangle : public Shape {
private:
    double width, height;

public:
    Rectangle(double w, double h) : width(w), height(h) {}

    double area() const override {
        return width * height;
    }
};

// Derived class: Circle
class Circle : public Shape {
private:
    double radius;

public:
    Circle(double r) : radius(r) {}

    double area() const override {
        return M_PI * radius * radius;
    }
};

int main() {
    // Shape pointer can point to different derived objects
    Shape* shape =NULL;

    // Rectangle
    Rectangle rect(10.0, 5.0);
    shape = &rect;
    std::cout << "Rectangle area: " << shape->area() << std::endl;

    // Circle
    Circle circ(7.0);
    shape = &circ;
    std::cout << "Circle area: " << shape->area() << std::endl;

    return 0;
}

