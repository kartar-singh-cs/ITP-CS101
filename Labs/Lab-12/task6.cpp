#include<iostream>
using namespace std;
struct box{
    int length;
    int *volume;
};
int main(){
    box part1; 
    part1.length = 5;
    int *vol = new int{part1.length * part1.length * part1.length};
    part1.volume = vol; 
    cout<<"Box length: "<<part1.length<<endl;
    cout<<"Volume: "<<*(part1.volume)<<endl;
    delete vol;
}