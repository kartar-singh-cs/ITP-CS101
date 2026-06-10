#include<iostream>
using namespace std;
int sumarray(int arr[],int size){

int sum = 0;
for(int i = 0; i<size; i++){
sum = sum + arr[i];
}
return sum;
}

int main(){
    int n;
    cout<<"Enter size of array: ";
    cin>>n;
   int arr[n];
   cout<<"Enter "<<n<<" elements for array: ";
    for(int i = 0; i<n; i++){
        cin>>arr[i];}
cout<<"The sum of array is: "<<sumarray(arr,n);

    return 0;
}