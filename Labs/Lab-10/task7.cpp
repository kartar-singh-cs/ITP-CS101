#include <iostream>
using namespace std;

void foo(int a) {
    cout << "foo, value of a is " << a << ", address is " << &a << endl;
}
void bar(int& a) {
    cout << "bar, value of a is " << a << ", address is " << &a << endl;
}
// Recursion
void fooRec(int a) {
    cout << "fooRec, value of a is " << a << ", address is " << &a << endl;

    if(a > 1) {
        fooRec(a - 1);
    }
}
// Recursion
void barRec(int& a) {
    cout << "barRec, value of a is " << a << ", address is " << &a << endl;

    if(a > 1) {
        int next = a - 1;
        barRec(next);   // must pass an lvalue reference, so use a new variable
    }
}

int main() {
    int x = 5;
    cout << " value of x is " << x << ", address is " << &x << endl << endl;

    cout << "Calling foo with x" << endl;
    foo(x);
    cout << endl;

    cout << "Calling bar with x" << endl;
    bar(x);
    cout << endl;

    cout << "Calling fooRec with x" << endl;
    fooRec(x);
    cout << endl;

    cout << "Calling barRec with x" << endl;
    barRec(x);
    cout << endl;

    return 0;
}