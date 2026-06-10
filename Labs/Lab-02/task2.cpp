#include <iostream>
#include <string>
using namespace std;

int main() {
    string fullname;
    int age;

    cout << "Enter your full name: ";
    getline(cin, fullname);
    cout << "Enter your age: ";
    cin >> age;

    cout << "Hello " << fullname << ", you are " << age << " years old." << endl;
    return 0;
}