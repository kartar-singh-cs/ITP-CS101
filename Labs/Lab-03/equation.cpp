#include<iostream>
#include<cmath>
using namespace std;
int main(){
    double a,b;
    cout<<"Enter the a and b values= ";
    cin>>a>>b;
    double d=pow(a,2);
    double e=pow(b,2);
    double t1=(d+(a*b)+(sqrt(a*b)));
    double t2=((a*e)-(2*a)+(5*b));
    if((a<b) && (a<10)){
        cout<<"the value of t1 is= "<<t1;
    }
else if((a=b)||(b>10)){
    cout<<"The value of t2 is= "<<t2;
}
    return 0;
}