#include<iostream>
using namespace std;
struct Counter {
    int count;  
};
void increment(Counter* c) {
    c->count += 1;  
}

int main() {
    Counter c = {0};
    cout << "Initial count: " << c.count << endl;
    increment(&c);
    increment(&c);
    increment(&c);
    cout << "After 3 increments: " << c.count << endl;

    return 0;
}
