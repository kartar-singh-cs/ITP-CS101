#include<iostream>
#include<cmath>
using namespace std;
int main(){
double a,b,c;
cout<<"Enter the values of a,b and c= ";
cin>>a>>b>>c;
double d=pow(b,2);
double e=d-(4*a*c);
double x1=(-b+sqrt(e))/2*a;
double x2=(-b-sqrt(e))/2*a;

if(a==0){
    cout<<"Divided by zero";
}
else if(d<(4*a*c)){
    cout<<"No real roots";
}
else if(d==(4*a*c)){
    cout<<"Equal roots"<<x1<<x2;
}
else if(d>(4*a*c)){
cout<<"real roots"<<x1<<x2;}
    return 0;
}