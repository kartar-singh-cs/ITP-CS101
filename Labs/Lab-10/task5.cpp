#include <iostream>
using namespace std;

// Function that takes a pointer to int
void assignPointer(int* ptr) {
    int i = 2;       // local variable inside the function
    ptr = &i;        // assign its address to the pointer (only local copy of ptr)
    // Problem: i will be destroyed when function ends, ptr in main does not change
}

int main() {
    int* p = nullptr;   // pointer in main, initially null
    assignPointer(p);   // attempt to set p inside function

    // Accessing *p is unsafe because assignPointer did not change p in main
    // Also, the local i in function no longer exists, so pointer is dangling
    cout << "Value through pointer: " << p << endl; // likely prints garbage or nullptr

    return 0;
}
