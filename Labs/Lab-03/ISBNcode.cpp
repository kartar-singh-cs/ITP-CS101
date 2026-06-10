#include<iostream>
using namespace std;
int main(){
    int x;
    cout<<"Enter 9 digit (ISBN) number= ";
    cin>>x;
int d9=x%10;
int d8=(x/10)%10;
int d7=(x/100)%10;
int d6=(x/1000)%10;
int d5=(x/10000)%10;
int d4=(x/100000)%10;
int d3=(x/1000000)%10;
int d2=(x/10000000)%10;
int d1=(x/100000000)%10;

int w=((1*d1)+(2*d2)+(3*d3)+(4*d4)+(5*d5)+(6*d6)+(7*d7)+(8*d8)+(9*d9));
int d10=(11-(w%11))%11;
cout<<"The (10-digit) ISBN code is= "<<x;
if(d10==10){
    cout<<"X";
}
else{
    cout<<d10;
}
return 0;}
