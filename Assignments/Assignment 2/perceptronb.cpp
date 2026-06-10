#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int n =10;
    const double w = 4.2 , b = 1.4;
    double  y , target;
    double correct=0.0;
    int x[n]={};
    cout<<"Enter the number: "<<endl;


    for(int i = 0; i<n; i++)
    cin>>x[i];

    for( int i = 0;i<n;i++){
    y=w* x[i]+b;
    target = 2 * x[i] *x[i] - 4;

    double error = abs(y-target);
  

    cout<<"x = "<<x[i]<<", "<<"Prediction = "<<y<<", "<<"Target = "<<target<<" ";
    
    if(error <= 1.0){
    cout<<"Comparison = Correct"<<endl;
    correct++;}

    else{
        cout<<"Comparison = Incorrect"<<endl;
    }


    }
    cout<<"Accuracy = "<<(correct/10.0)*100.0<<"%";










    return 0;
}