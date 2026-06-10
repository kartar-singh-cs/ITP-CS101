#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int a,b,c;
    cout<<"Enter three values= ";
    cin>>a>>b>>c;
int smallest =min(a,min(b,c)) ;
int largest=max(a,(b,c));
int middle=(a+b+c-largest-smallest);
cout<<"Values in Ascending order= "<<smallest<<" "<<middle<<" "<<largest;
return 0;
}