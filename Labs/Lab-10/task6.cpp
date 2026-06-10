#include<iostream>
using namespace std;
int main(){

int i = 2;


// task 6 part a
// cout<<*i<<endl;  // it is causing error because we cant dereference variable we dereference pointers 
// * operator derefernces a pointer ,meaning it addresses value stored at that address 



// task 6  part  b

int arr[5] = {1,2,3,4,5};
cout<<*arr<<endl; // it is printing value because when we write arr it takes address of first index by default 
// and when we derefernce it it prints value on that address

// task 6 part c - memory layout
// i is stored at its own address; dereferencing fails because i is not a pointer
// arr occupies contiguous memory; arr name is address of first element, dereferencing gives value at that address



}