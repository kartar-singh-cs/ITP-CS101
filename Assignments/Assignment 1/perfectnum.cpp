#include<iostream>
using namespace std;
int main(){
int i,sum=0,n;

cout<<"Enter the number: ";
cin>>n;
cout<<"Divisors are= ";
for(i=1;i<n;i++){
if((n%i)==0){
cout<<i<<" ";
sum=sum+i;
}
}
cout<<endl;



if(sum==n){
cout<<n<<" "<<" = "<<sum<<"\n"<<"That's why this is 'Perfect number'!"<<endl;}
else{
cout<<"This is not perfect numeber!";}








return 0;}
