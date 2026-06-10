#include<iostream>
using namespace std;
void  change(int* a){ // taking address of b through pointer 

    *a = 123;   // changing b value = 123 on its address
}



int main(){

int b = 0;

cout<<"Value of b before calling function: "<<b<<endl;  // before calling it is b = 0

change(&b);  // Passing address of b to function

cout<<"Value of b after calling function: "<<b<<endl;


}