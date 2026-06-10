#include<iostream>
using namespace std;

// for celsius
double celsiustofahrenite(double cel){
return (cel*9/5) + 32;
}

///////////  for power /////////
double power(double base,double exp){
    double result = 1.0;
if(exp > 0){
    for(double i = 1.0; i <= exp; i++){
        result = result*base;
    }
}
return result;
}


/////////// factorial  /////////
int fact(int x){
    int mult = 1;
    for(int i = x; i>0; i--){
        mult = mult*i;
    }
return mult;
}

int main(){

    // for temperature
    double c;
    cout<<"Enter temperature in celsius: ";
    cin>>c;
    cout<<"Temperature in faheremite is: "<<celsiustofahrenite(c)<<endl;

      // for power
double a,b;
cout<<"Enter base: ";
cin>>a;
cout<<"Enter exponent for "<<a<<": ";
cin>>b;
cout<<"Your answer is: "<<power(a,b)<<endl;

/////////  for factorial
int n;
cout<<"Enter a positive number for factorial: ";
cin>>n;
while(n < 0){
    cout<<"Please enter a positive number!"<<endl;
cout<<"Enter a positive number for factorial: ";
cin>>n;}

cout<<"Factorial of given number is: "<<fact(n)<<endl;


}