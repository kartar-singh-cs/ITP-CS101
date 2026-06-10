#include <iostream>
#include <ctime>
#include <cstdlib>
#include <utility>
using namespace std;

int main() {

    srand(time(0));
    const int n = 10;
    int arr[n];
    int scount = 0,icount=0;

    
    for (int i = 0; i < n; i++)
        arr[i] = rand() % 100;

    cout << "Original Array for Insertion Sort is: ";
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;

    for (int i = 1; i < n; i++) {
        int key = arr[i];
        int j = i - 1;
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j--;
            icount++;
        }
        arr[j + 1] = key;
    }

    cout << "Insertion Sorting Array is: ";
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;
    cout << "The number of sorting is: " << icount << endl;

    
    scount = 0; 
    for (int i = 0; i < n; i++)
        arr[i] = rand() % 100;

    cout << "\nOriginal Array for Selection Sort is: ";
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;

    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (arr[i] > arr[j]) {
                swap(arr[i], arr[j]);
                scount++;
            }
        }
    }

    cout << "Selection Sorting Array is: ";
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;
    cout << "The number of sorting is: " << scount << endl;

   
    if(scount>icount)
    cout<<"Insertion is more efficient";
    else{
        cout<<"Selectionis more Efficient";
    }

    return 0;
}
