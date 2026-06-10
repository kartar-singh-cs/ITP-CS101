#include<iostream>
using namespace std;
int main(){
int n;


cout<<"Enter the number: ";
cin>>n;


if(n==0){
cout<<"Zero";}

if(n<0){
cout<<"negative ";
n=-n;}

int lack=n/100000;
n=n%100000;

int tenthousand=n/10000;
n=n%10000;

int thousand=n/1000;
n=n%1000;

int hundred=n/100;
n=n%100;

int lastTwo = n % 100;

int ten=n/10;
n=n%10;

int unit=n%10;



switch(lack){
case 1:cout<<"one lack ";break;
case 2:cout<<"two lack ";break;
case 3:cout<<"three lack ";break;
case 4:cout<<"four lack ";break;
case 5:cout<<"five lack ";break;
case 6:cout<<"sixt lack ";break;
case 7:cout<<"seven lack ";break;
case 8:cout<<"eight lack ";break;
case 9:cout<<"nine lack ";break;}




switch(tenthousand){
case 1:cout<<"ten ";break;
case 2:cout<<"twenty ";break;
case 3:cout<<"thirty ";break;
case 4:cout<<"fourty ";break;
case 5:cout<<"fifty ";break;
case 6:cout<<"sixty ";break;
case 7:cout<<"seventy ";break;
case 8:cout<<"eighty ";break;
case 9:cout<<"ninety ";break;}




switch(thousand){
case 1:cout<<"one thousand ";break;
case 2:cout<<"two thousand ";break;
case 3:cout<<"three thousand ";break;
case 4:cout<<"four thousand ";break;
case 5:cout<<"five thousand ";break;
case 6:cout<<"six thousand ";break;
case 7:cout<<"seven thousand ";break;
case 8:cout<<"eight thousand ";break;
case 9:cout<<"nine thousand ";break;}



switch(hundred){
case 1:cout<<"hundred ";break;
case 2:cout<<"two hundred ";break;
case 3:cout<<"three hundred ";break;
case 4:cout<<"four hundred ";break;
case 5:cout<<"five hundred ";break;
case 6:cout<<"six hundred ";break;
case 7:cout<<"seven hundred ";break;
case 8:cout<<"eight hundred ";break;
case 9:cout<<"nine hundred ";break;}



  

if ((lastTwo >= 10) && (lastTwo <= 19)) 
    switch (lastTwo) {
        case 10: cout << "ten"; break;
        case 11: cout << "eleven"; break;
        case 12: cout << "twelve"; break;
        case 13: cout << "thirteen"; break;
        case 14: cout << "fourteen"; break;
        case 15: cout << "fifteen"; break;
        case 16: cout << "sixteen"; break;
        case 17: cout << "seventeen"; break;
        case 18: cout << "eighteen"; break;
        case 19: cout << "nineteen"; break;
    }
else{

switch(ten){
case 2:cout<<"twenty ";break;
case 3:cout<<"thirty ";break;
case 4:cout<<"forty ";break;
case 5:cout<<"fifty ";break;
case 6:cout<<"sixty ";break;
case 7:cout<<"seventy ";break;
case 8:cout<<"eighty ";break;
case 9:cout<<"ninety ";break;}




switch (n){
case 1: cout<<"One "; break;
case 2: cout<<"two "; break;
case 3: cout<<"three "; break;
case 4: cout<<"four "; break;
case 5: cout<<"five "; break;
case 6: cout<<"six "; break;
case 7: cout<<"seven "; break;
case 8: cout<<"eight "; break;
case 9: cout<<"nine "; break;}}





return 0;}