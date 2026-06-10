#include<iostream>
using namespace std;
struct score{
    string subject;
    int marks;
};
int main(){
    score array[3];
    cout<<"Enter 3 subject and their marks"<<endl;
    for(int i =0; i < 3; i++){
        cout<<"Enter subject "<<i + 1;
        cin>>array[i].subject;
        cout<<"Enter marks: ";
        cin>>array[i].marks;
    }
    cout<<"Your score: "<<endl;
    for(int i = 0; i < 3; i++){
        cout<<array[i].subject<<":"<<array[i].marks<<endl;
    }
}