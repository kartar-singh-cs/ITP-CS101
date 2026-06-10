#include <iostream>
using namespace std;

int main() {
    int rawData;
    int shift_amount;

    
    cout << "Enter raw sensor data (unsigned int): ";
    cin >> rawData;
    cout << "Enter shift amount: ";
    cin >> shift_amount;

    int result;

    
    if (rawData >= 100 && rawData <= 500) {
       
        result = rawData >> shift_amount;
        cout << "Normalized value (right shift): " << result << endl;
    } else {
       
        result = rawData << shift_amount;
        cout << "Amplified value (left shift): " << result << endl;
    }

    return 0;
}
