#include <iostream>
using namespace std;

// Function that checks which number is greater
// Returns the memory address of 'a' if a > b, otherwise returns nullptr
int* isGreater(int &a, int &b) {
    if(a > b) {
        return &a;  // Returning the address of a because a > b
    } else {
        return nullptr;  // Returning nullptr because a is not greater
    }
}

int main() {
    int a, b;

    cout << "Enter value of a: ";
    cin >> a;

    cout << "Enter value of b: ";
    cin >> b;

    // Call isGreater() and check if it returned a valid address
    if(isGreater(a, b) != nullptr) {
        cout << "a > b, address of a: " << isGreater(a, b) << endl; // Printing the memory address of a
    } else {
        cout << "a <= b, returned nullptr: " << isGreater(a, b) << endl; // Printing nullptr (no address)
    }

    return 0;
}
