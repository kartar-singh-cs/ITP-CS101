#include<iostream>
using namespace std;
int main(){
    char gender;
    double length,w1,w2;
    cout<<"Enter your gender and length= ";
    cin>>gender>>length;
    if((gender=='m')||(gender=='M')){
        w1=(length*4)-125;
        cout<<"Weight of male is= "<<w1;
    }
else if((gender=='f')||(gender=='F')){
    w2=(length*3.5)-108;
     cout<<"Weight of female is= "<<w2;
}
// else{gender!=m,f,M,F;
//    cout<<"wrong gender";} 
}

   
