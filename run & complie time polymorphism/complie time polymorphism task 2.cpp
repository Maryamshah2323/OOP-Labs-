#include <iostream>

class Distance {
private:
    int feet;
    int inches;

    // Normalize distance: 12 inches = 1 foot
    void normalize() {
        if (inches >= 12) {
            feet += inches / 12;
            inches %= 12;
        }
    }

public:
    // Constructor
    Distance(int f = 0, int in = 0) : feet(f), inches(in) {
        normalize();
    }

    // Overload the == operator
    bool operator==(const Distance& other) const {
        return (feet == other.feet) && (inches == other.inches);
    }

    // Display function
    void display() const {
        std::cout << feet << " feet " << inches << " inches" << std::endl;
    }
};

int main() {
    Distance d1(5, 8);
    Distance d2(6, 0);
    Distance d3(5, 20); // Will normalize to 6 feet 8 inches

    std::cout << "Distance 1: ";
    d1.display();

    std::cout << "Distance 2: ";
    d2.display();

    std::cout << "Distance 3: ";
    d3.display();

    // Compare d1 and d2
    if (d1 == d2)
        std::cout << "Distance 1 is equal to Distance 2" << std::endl;
    else
        std::cout << "Distance 1 is NOT equal to Distance 2" << std::endl;

    // Compare d2 and d3
    if (d2 == d3)
        std::cout << "Distance 2 is equal to Distance 3" << std::endl;
    else
        std::cout << "Distance 2 is NOT equal to Distance 3" << std::endl;

    return 0;
}

