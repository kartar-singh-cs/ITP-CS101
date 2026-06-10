#include<iostream>
using namespace std;
struct fraction{
    int numerator;
    int denominator;

};
ostream& operator<<(ostream& print, fraction& f){
    print<<f.numerator<<"/"<<f.denominator;
    return print;
}
fraction operator + (const fraction f1, const fraction f2){
    fraction result;
    result.numerator = ((f1.numerator*f2.denominator) +(f1.denominator* f2.numerator));
    result.denominator = (f1.denominator * f2.denominator);
    return result;
}   
int main(){
    fraction myfraction1{2,5};
    fraction myfraction2{5,7};
    fraction sum = myfraction1 + myfraction2;
    cout<<myfraction1<<" + "<<myfraction2<<"  "<<sum;

}