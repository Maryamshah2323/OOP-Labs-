#include <iostream>
#include <cmath>

// Abstract base class
class Shape {
public:
    virtual void draw() const = 0;  // Pure virtual function
    virtual ~Shape() {}             // Virtual destructor
};

// Forward declaration of friend function
class Circle;
class Rectangle;
void displayShapeInfo(const Circle& c);
void displayShapeInfo(const Rectangle& r);

// Derived class: Circle
class Circle : public Shape {
private:
    double radius;

public:
    Circle(double r) : radius(r) {}

    // Override draw
    void draw() const override {
        std::cout << "Drawing a Circle with radius " << radius << std::endl;
    }

    // Friend function can access private members
    friend void displayShapeInfo(const Circle& c);
};

// Derived class: Rectangle
class Rectangle : public Shape {
private:
    double width;
    double height;

public:
    Rectangle(double w, double h) : width(w), height(h) {}

    // Override draw
    void draw() const override {
        std::cout << "Drawing a Rectangle with width " << width << " and height " << height << std::endl;
    }

    // Friend function can access private members
    friend void displayShapeInfo(const Rectangle& r);
};

// Friend function definition
void displayShapeInfo(const Circle& c) {
    std::cout << "[Friend Function] Circle Area: " << M_PI * c.radius * c.radius << std::endl;
}

void displayShapeInfo(const Rectangle& r) {
    std::cout << "[Friend Function] Rectangle Area: " << r.width * r.height << std::endl;
}

// Main function
int main() {
    Shape* shape1 = new Circle(5.0);
    Shape* shape2 = new Rectangle(4.0, 6.0);

    // Runtime polymorphism
    shape1->draw();
    shape2->draw();

    // Access private data via friend functions
    displayShapeInfo(*static_cast<Circle*>(shape1));
    displayShapeInfo(*static_cast<Rectangle*>(shape2));

    // Cleanup
    delete shape1;
    delete shape2;

    return 0;
}

