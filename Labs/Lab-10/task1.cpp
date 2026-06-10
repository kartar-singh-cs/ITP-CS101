#include<iostream>
using namespace std;
int main(){
   int arr[5] = {1,2,3,4,5};
   int * ptr[5];    // initializing pointer array

   for(int i = 0; i<5; i++){
    ptr[i] = &arr[i];    ////   insereting values in pointer array of integer array
   }

   cout<<"Array with derefernece is: ";
for(int i = 0; i<5; i++){         
    cout<< *ptr[i]<<" ";             // Printing pointer array elements
   }
}