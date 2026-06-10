#include<iostream>
using namespace std;
int main(){
    int n;
int arr[5][9]={};
int sum=0;
cout<<"Enter your 'ID' and 'Marsk': "<<endl;
for(int i=0;i<5;i++){
   for(int j=0;j<6;j++){
   cin>>arr[i][j];
      }}

      for(int i=0;i<5;i++){
        int sum=0;
        double per=0.0;
       for(int j=1;j<6;j++){
         sum =sum+arr[i][j];}
         arr[i][7]=sum;
         per=(sum/500.0)*100.0;
         arr[i][8]=per;
        }


      for(int i=0;i<5;i++){
       arr[i][6]=500;}


      

cout<<"-------------------------------------------"<<endl;
cout<<"ErpID"<<" "<<"C1"<<" "<<"C2"<<" "<<"C3"<<" "<<"C4"<<" "<<"C5 "<<"Total-"<<"Sum "<<"Percentage"<<endl;
cout<<"-------------------------------------------"<<endl;
for(int i=0;i<5;i++){
   for(int j=0;j<9;j++){
   cout<<arr[i][j]<<" ";
      }

      
    cout<<endl;}



return 0;}


