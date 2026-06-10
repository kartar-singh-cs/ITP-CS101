#include<iostream>
using namespace std;
int main(){
    int size=5;
    int arr[size],target=4,i,count=0;
    for(i=0;i<size;i++){
        cout<<"Enter the value: ";
        cin>>arr[i];
        if(arr[i]==target){
            count++;
        }
        }
if(count>0)
        cout<<"Target appear is = "<<count;
        else {
            cout<<"Target not appear!";
        }

    }
   
