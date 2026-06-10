#include<iostream>
using namespace std;
struct fraction {
    int numerator;
    int denominator;
};
ostream& operator<<(ostream& print, fraction& f){
    print<<f.numerator<<" / "<<f.denominator;
    return print;
}
int main(){
   int n,d;
   cout<<"Enter numertaor:";
   cin>>n;
   cout<<"Enter denominator:";
   cin>>d;
   fraction myfraction{n,d};
   cout<<myfraction<<endl;
}