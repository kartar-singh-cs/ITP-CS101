#include <iostream>
using namespace std;

void printArray(int* arr, int size) {
    for(int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    int n;
    cout << "How many integers? ";
    cin >> n;

    int* arr = new int[n];  // dynamic allocation

    cout << "Enter values:\n";
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << "You entered: ";
    printArray(arr, n);

    delete[] arr;  // free memory
    return 0;
}
