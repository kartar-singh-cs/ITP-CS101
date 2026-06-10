#include<iostream>
using namespace std;
int main(){
    int a[9],b[9],c[9];


    cout<<"Enter the elements for Matrix A: ";
    for(int i=0; i<9;i++)
    cin>>a[i];

    cout<<"Enter the element for Matrix B: ";
    for(int i =0; i<9; i++)
    cin>>b[i];

    for(int i=0; i<9;i++)
    c[i]=a[i]+b[i];

    cout<<endl;

    cout<<"Matrix A (3x3):"<<endl;
    for(int i = 0; i<3;i++){
      for(int j=0; j<3; j++)
       cout<<a[i * 3 + j]<<" ";
       cout<<endl;}
       cout<<endl;


    cout<<"Matrix B (3x3): "<<endl;
    for(int i =0; i<3;i++){
    for(int j = 0; j<3; j++)
    cout<<b[i * 3 + j]<<" ";
    cout<<endl;}
    cout<<endl;

    cout<<"Resulting matrix C (3x3): "<<endl;
     for(int i =0; i<3;i++){
    for(int j = 0; j<3; j++)
    cout<<c[i * 3 + j]<<" ";
    cout<<endl;}
    




    return 0;
}