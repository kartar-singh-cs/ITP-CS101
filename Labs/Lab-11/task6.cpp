#include <iostream>
using namespace std;

int main() {
    while(true) {
        // allocating again & again without deleting
        float* leak = new float[5000];
        // memory usage will keep increasing
    }
    return 0;
}
