#include<iostream>
using namespace std;
int main(){
int a = 5,b = 10;
int* ptr1 = &a;  // Initializing pointer with addresss of a
int* ptr2 = &b;  // Initializing pointer with addresss of b


cout<<"Before Swapping: a = "<<*ptr1<<" & b = "<<*ptr2<<endl;

int temp = *ptr1;   // keep temp = value of a temp = 5
*ptr1 = *ptr2;        // a = b a becomes a = 10
*ptr2 = temp;          // b = temp b becomes 5

cout<<"After Swapping: a = "<<*ptr1<<" & b = "<<*ptr2<<endl;

    return 0;
}