#include <iostream>
using namespace std;

int main() {
    double temperature;
    cout << "Enter the current temperature in Celsius: ";
    cin >> temperature;

    if (temperature < 15) {
        cout << "Cold" << endl;
    } else if (temperature <= 25) {
        cout << "Moderate" << endl;
    } else {
        cout << "Hot" << endl;
    }
    return 0;
}