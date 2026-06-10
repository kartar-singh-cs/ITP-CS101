#include<iostream>
#include<algorithm>
using namespace std;
int main(){
int num1,num2,deno1,deno2,sum=0,subt=0,multi=1,multi1=1,multi2=1,divi,g;
char c;
cout<<"Enter the numerator and denominator of first fraction: ";
cin>>num1>>deno1;
cout<<"Enter the numerator and denominator of second fraction: ";
cin>>num2>>deno2;
cout<<"Choose operation(+,-,*,/): ";
cin>>c;

switch(c){

case '+':{
multi=deno1*deno2;
sum=((num1*deno2)+(num2*deno1));
g =__gcd(sum,multi);
sum=sum/g;
multi=multi/g;
cout<<sum<<"/"<<multi;
break;}

case '-':{
multi=deno1*deno2;
subt=((num1*deno2)-(num2*deno1));
g=__gcd(subt,multi);
subt=subt/g;
multi=multi/g;
cout<<subt<<"/"<<multi;
break;}

case '*':{
multi1=num1*num2;
multi2=deno1*deno2;
g=__gcd(multi1,multi2);
multi1=multi1/g;
multi2=multi2/g;
cout<<multi1<<"/"<<multi2;
break;}

case '/':{
multi1=num1*deno2;
multi2=num2*deno1;
g=__gcd(multi1,multi2);
multi1=multi1/g;
multi2=multi2/g;
cout<<multi1<<"/"<<multi2;
break;}

default:{
cout<<"Invlaid operation!"<<endl;}}
return 0;}