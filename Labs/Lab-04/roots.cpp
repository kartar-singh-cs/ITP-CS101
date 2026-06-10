#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int a,b,c;
    cout<<"Enter the coefficients (a,b and c): ";
    cin>>a>>b>>c;
    double d=pow(b,2);
    double e=(4*a*c);
    double dis=sqrt(d-e);
     if(dis>0){
        double r1=-b+dis/(2*a);
    double r2=-b-dis/(2*a);
        cout<<"the equation has two real roots: "<<r1<<r2;
    }
    else if(dis==0){
        double r=(-b/(2*a));   
        cout<<"the equation has one root: "<<r;
    }
    else {
        cout<<"The equation has no roots";
    }
   
   

}