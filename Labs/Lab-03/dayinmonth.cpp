#include<iostream>
using namespace std;
int main(){
    int m,y;
    cout<<"Enter the month(1-12)= ";
    cin>>m;
    cout<<"Enter the year= ";
    cin>>y;
    switch(m)
    {
        case 1:
        cout<<"January,31 days";
        break;
        case 2:
        if((y%4==0)&&(y%400==0)){
            cout<<"February,29 days";
        }
        else {
            cout<<"February,28 days";
        }
        break;
        case 3:
        cout<<"March,31 days";
        break;
        case 4:
        cout<<"April,30 days";
        break;
        case 5:
        cout<<"May,31 days";
        break;
        case 6:
        cout<<"June,30 days";
        break;
        case 7:
        cout<<"July,31 days";
        break;
        case 8:
        cout<<"August,31 days";
        break;
        case 9:
        cout<<"September,31 days";
        break;


    }
    
    return 0;
}