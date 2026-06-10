#include<iostream>
#include<string>
#include<cmath>
using namespace std;
int main(){
    float r,a,p,s,ss;
    string shape;
    cout<<"Enter your choice: ";
    cin>>shape;
    if((shape=="circle")||(shape=="Circle")){
        cout<<"Enter the radius of the circle: ";
        cin>>r;
        double a=M_PI*r*r;
       double p=M_PI*2*r;
cout<<"Area: "<<a<<endl;
cout<<"Perimeter: "<<p<<endl;


    }
    else if(shape==("Square")||(shape=="square")){
        cout<<"Enter the side of a square: ";
        cin>>s;
        double area=s*s;
       double perimeter=4*s;
cout<<"Area: "<<area<<endl;
cout<<"Perimeter: "<<perimeter<<endl;
    }
    else if((shape=="triangle")||(shape=="Triangle"));
    cout<<"Enter the side of a triangle: ";
    cin>>ss;
    double b=sqrt(3);
    double ar=(b/4)*ss*ss;
    double pe=3*ss;
    cout<<"Area: "<<ar<<endl;
    cout<<"Perimeter: "<<pe<<endl;
    
    return 0;
}