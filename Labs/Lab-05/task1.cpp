#include<iostream>
using namespace std;
int main(){
    int i,arr[10],sum=0,min1,max1;
    
cout<<"Enter 10 numbers: "<<endl;
    for(i=0;i<10;i++){
        cin>>arr[i];
        sum=sum+arr[i];
        min1=arr[0];
        max1=arr[0];
        if(min1>arr[i]){
        min1=arr[i];}

        if(max1<arr[i]){
        max1=arr[i];}
        
        
    }
    cout<<"Minimum: "<<min1<<endl;
    cout<<"Maximum: "<<max1<<endl;
double avg=sum/10.0;
cout<<"Average: "<<avg<<endl;
cout<<"Number in reverse order: "<<endl;
for(i=9;i>=0;i--){
cout<<arr[i]<<" ";}
cout<<endl;


   

    }


