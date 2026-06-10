#include <iostream>
#include <cmath>
using namespace std;

int main() {      
    double n,a, b, m; 

    cout <<"Enter a positive number: ";
    cin >> n;
    if (n < 1) {
        a = 0;
        b = 1;}
     else {
        a = 0;
        b = n;}
    
    while ((b - a) > 0.01) {   
        m = (a + b) / 2;      

        if (m * m > n) {
            b = m; }
            
         else {
            a = m;}}           

    cout <<"Approximate square root of "<< n <<" is: "<<a+b/2<<endl;
        

    return 0;}

