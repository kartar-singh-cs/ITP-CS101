#include<iostream>
using namespace std;
int main(){
    int arr[5] = {1,2,3,4,5};

    int* ptr = arr;     // Declaring pointer with address of first array element

    cout<<"Array with pointer is: ";
    for(int i = 0; i<5; i++){
        cout<<*(ptr+i)<<" ";      // Printing with derefrencing and traversing in arrar address with help of i
    }
}