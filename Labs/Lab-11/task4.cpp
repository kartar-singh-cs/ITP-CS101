#include <iostream>
using namespace std;

int** create2D(int rows, int cols) {
    int** arr = new int*[rows];
    for(int i = 0; i < rows; i++) {
        arr[i] = new int[cols];
    }
    return arr;
}

void input2D(int** arr, int rows, int cols) {
    cout << "Enter matrix values:\n";
    for(int i = 0; i < rows; i++) {
        for(int j = 0; j < cols; j++) {
            cin >> arr[i][j];
        }
    }
}

void print2D(int** arr, int rows, int cols) {
    cout << "Matrix:\n";
    for(int i = 0; i < rows; i++) {
        for(int j = 0; j < cols; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}

void free2D(int** arr, int rows) {
    for(int i = 0; i < rows; i++) {
        delete[] arr[i];
    }
    delete[] arr;
}

int main() {
    int r, c;
    cout << "Enter rows and columns: ";
    cin >> r >> c;

    int** arr = create2D(r, c);
    input2D(arr, r, c);
    print2D(arr, r, c);

    free2D(arr, r);
    return 0;
}
