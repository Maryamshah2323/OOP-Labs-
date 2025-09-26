#include <iostream>
#include <string>
using namespace std;

// Logger class using templates
template <typename T>
class Logger {
public:
    void log(const string& message, const T& value) {
        cout << "[LOG] " << message << ": " << value << endl;
    }
};

int main() {
    Logger<int> intLogger;
    Logger<string> stringLogger;
    Logger<float> floatLogger;

    intLogger.log("Integer value", 42);
    floatLogger.log("Float value", 3.1415f);
    stringLogger.log("User message", "Hello, world!");

    return 0;
}

