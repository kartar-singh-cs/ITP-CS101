#include<iostream>
using namespace std;
int main(){
 char d;
int r;
int n=10;
   int arr[n] ;
   cout<<"Enter 10 integers: ";
   for(int i =0; i<n; i++){
   cin>>arr[i];}

   cout<<"Enter rotation direction(L/R): ";
cin>>d;
cout<<"Enter number of rotations: ";
cin>>r;

if(d=='L' || d=='l'){
    cout<<"Array after "<<r<<" left rotations: ";
 
  for( int i =0; i<r;i++){
  int temp = arr[0];

  for( int j=0; j<n-1; j++)
   arr[j]=arr[j+1];

   arr[9]=temp;}

   for(int i=0; i<n; i++)
cout<<arr[i]<<" ";}



else if(d=='R' || d=='r'){
    cout<<"Array after "<<r<<" right rotations: ";
    for(int i = 0;i<r;i++){
     int temp=arr[n-1];

      for(int j=n-1; j > 0;j--)
       arr[j]=arr[j-1];
    
    arr[0]=temp;}



for(int i=0; i<n; i++)
cout<<arr[i]<<" ";}


else{
    cout<<"Invalid Direction!";
}


    
    
    
    return 0;
}