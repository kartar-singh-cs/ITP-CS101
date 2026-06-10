#include <iostream>
using namespace std;

int main() {
    char secret, key, decryptKey;
    cout << "Secret: ";
    cin >> secret;
    cout << "Key: ";
    cin >> key;

    char encrypted = secret ^ key;
    cout << endl << "Encrypted character: " << encrypted << endl;

    cout << "Enter key: ";
    cin >> decryptKey;
    char decrypted = encrypted ^ decryptKey;

    if (decrypted == secret) {
        cout << "Decrypted character: " << decrypted << endl;
    } else {
        cout << "Key error" << endl;
    }
    return 0;
}