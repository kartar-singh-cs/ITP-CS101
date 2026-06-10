#include<iostream>
#include<vector>
using namespace std;
int main(){
int n,r; 
cout<<"Enter number of integers: ";
cin>>n;
if(n==0){
cout<<" no numbers."<<endl;
return 0;}
    
    cout<<"Enter "<<n<<" integers: ";
    vector<int>nums(n);
    for(int i=0;i<n;i++){
    cin>> nums[i];
}

cout<<"Enter number of rows: ";
cin>>r;
if(r <= 0){
cout<<"Number of rows must be greater than Zero."<<endl;
return 0;}

for(int i =0; i<r;i++){

for(int j =i; j<n;j++){
  if(j % r == i)
  cout<<nums[j]<<" ";}

  

cout<<endl;}

    return 0;
}

