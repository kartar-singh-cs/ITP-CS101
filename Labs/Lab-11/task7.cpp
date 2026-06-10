#include <iostream>
using namespace std;

void numericTypes() {
    int* a = new int(10);
    double* b = new double(3.14);

    cout << "Numeric: " << *a << ", " << *b << endl;

    delete a;
    delete b;
}

void charTypes() {
    char* c = new char('X');
    string* s = new string("Hello");

    cout << "Char: " << *c << ", String: " << *s << endl;

    delete c;
    delete s;
}

void pointerTypes() {
    int* x = new int(20);
    int** p = new int*;
    *p = x;

    cout << "Pointer-to-pointer: " << **p << endl;

    delete p;
    delete x;
}

int main() {
    numericTypes();
    charTypes();
    pointerTypes();
    return 0;
}
