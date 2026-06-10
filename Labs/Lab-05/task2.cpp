#include<iostream>
using namespace std;
int main(){
    int n,i,j;
    cout<<"Enter the size of multiplication table(n): ";
    cin>>n;
for(i=1;i<=n;i++){
cout<<"\t";
cout<<i;}
cout<<endl;
for(i=1;i<5*n;i++){
cout<<"--";}
cout<<endl;


    for(i=1;i<=n;i++){
        cout<<i<<" | "<<"\t";

    for(j=1;j<=n;j++)
    cout<<i*j<<"\t";
    cout<<endl;}

    
    
    
    
    return 0;}