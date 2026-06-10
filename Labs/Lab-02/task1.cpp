#include <iostream>
using namespace std;

int main() {
    int a, b;
    cout << "Enter first integer: ";
    cin >> a;
    cout << "Enter second integer: ";
    cin >> b;

    a = a + b;
    b = a - b;
    a = a - b;

    cout << "After swapping:" << endl;
    cout << "First integer = " << a << endl;
    cout << "Second integer = " << b << endl;
    return 0;
}