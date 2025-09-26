#include <iostream>
using namespace std;

class Temperature {
public:
    // Public data member to store temperature in Celsius
    float celsius;

private:
    // Private data member to store converted Fahrenheit
    float fahrenheit;

public:
    // Constructor
    Temperature(float c) {
        celsius = c;
        fahrenheit = 0.0;
    }

    // Function to convert Celsius to Fahrenheit
    void convertToFahrenheit() {
        fahrenheit = (celsius * 9.0 / 5.0) + 32;
    }

    // Function to display the converted value
    void display() {
        cout << "Temperature in Fahrenheit: " << fahrenheit << "°F" << endl;
    }
};

int main() {
    // Create an object with temperature in Celsius
    Temperature temp(25.0);     // 25°C

    temp.convertToFahrenheit(); // Convert to Fahrenheit
    temp.display();             // Display the result

    return 0;
}

