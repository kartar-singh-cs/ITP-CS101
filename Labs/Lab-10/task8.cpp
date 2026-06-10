#include<iostream>
using namespace std;
int sum(int* arr,int size){   // taking address of first integer taking size
int s = 0;
for(int i = 0; i<size; i++){
    s= s + *(arr + i);   // Doing sum by loop
}
return s;   // returing sum

}

int main(){

    int arr[5] = {1,2,3,4,5}; 
 cout<<"Sum of array is: "<<sum(arr,5);  // passing address of first integer and passing size  and printing sum



}