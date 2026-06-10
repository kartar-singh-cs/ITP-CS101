#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter an integer: ";
    cin >> n;

    int bit = n - ((n >> 1) << 1);

    if (bit == 1) {
        cout << n<< " is Odd" << endl;
    } else {
        cout << n << " is Even" << endl;
    }

    return 0;
}
