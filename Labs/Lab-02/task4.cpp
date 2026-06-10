#include <iostream>
using namespace std;

void printPermissions(int value) {
    cout << "Read  : " << (((value & 4) != 0) ? "True" : "False") << endl;
    cout << "Write : " << (((value & 2) != 0) ? "True" : "False") << endl;
    cout << "Exec  : " << (((value & 1) != 0) ? "True" : "False") << endl;
}

int main() {
    int permissions, mask;
    cout << "Enter current permissions (0-7): ";
    cin >> permissions;

    cout << endl << "Current Permissions:" << endl;
    printPermissions(permissions);

    cout << endl << "Enter toggle mask (0-7): ";
    cin >> mask;

    int newPermissions = permissions ^ mask;
    cout << endl << "New Permissions after toggling:" << endl;
    printPermissions(newPermissions);
    return 0;
}