#include <iostream>
using namespace std;

int main() {
    // Encoded integers
    int numbers[4] = {1869440333, 1109424498, 1801678700, 115};

    // Cast the int array to char* using C-style cast
    char* message = (char*)numbers; // pointer to the first byte of numbers

    // Print the message starting from the memory address
    cout << "Decoded message: " << message << endl;

    return 0;
}
