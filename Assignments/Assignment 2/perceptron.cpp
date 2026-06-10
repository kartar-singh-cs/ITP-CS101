#include<iostream>
using namespace std;
int main(){
    const double x=3,target=14; 
    double w=0.0,b=0.0,y,a=0.01,error;
    y=w*x+b;
    for(int i = 0;i<=1000;i++){
        y=w*x+b;
            error=target-y;
              w=w+(a*error)*x;
        b=b+(a*error);
          
           
        if(i % 100 == 0){
          
            cout<<"Step "<<i<<": "<<"prediction = "<<y<<", "<<"error = "<<error<<endl;
       
        }
        
    }
    cout<<"Final prediction at x=3: "<<y<<endl;
    cout<<"Target value: "<<target<<endl;
    cout<<"Final w = "<<w<<", "<<"b = "<<b<<endl;









    return 0;
}