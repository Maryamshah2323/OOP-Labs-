#include <iostream>
#include <stdexcept>  // Required for std::out_of_range
using namespace std;

// Template function to insert value into array with bounds checking
template <typename T>
void insertValue(T arr[], int index, T value) {
    if (index < 0 || index >= 3) {
        throw out_of_range("Index out of bounds! Valid indices: 0, 1, 2.");
    }
    arr[index] = value;
}

int main() {
    int arr[3] = {0, 0, 0};  // Initialize array with 0
    int index, value;

    cout << "Array initialized as: [0, 0, 0]" << endl;
    cout << "Enter the index (0 to 2) where you want to insert a value: ";
    cin >> index;
    cout << "Enter the value you want to insert: ";
    cin >> value;

    try {
        insertValue<int>(arr, index, value);
        cout << "Updated array: [";
        for (int i = 0; i < 3; ++i) {
            cout << arr[i];
            if (i < 2) cout << ", ";
        }
        cout << "]" << endl;
    } catch (const exception& e) {
        cerr << "Exception caught: " << e.what() << endl;
    }

}

