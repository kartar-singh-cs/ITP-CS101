// 🚗 Simple Car Rental System in C++
// Created by [Kartar Singh], BS Computer Science, IBA Karachi
// Demonstrates: Arrays, Loops, Switch Statements, and Boolean Logic

#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int choice = 0;
    int get, back;

    // Arrays for storing car data
    string car[5] = {"Toyota", "Honda", "Suzuki", "BMW", "Kia"};
    int rent[5] = {4000, 4500, 3500, 8000, 5000};
    bool ava[5] = {true, true, true, true, true};

    cout << "=== Welcome to Car Rental System ===" << endl << endl;

    // Main menu loop
    while (choice != 4) {
        cout << "===== Car Rental Menu =====" << endl;
        cout << "1. View Cars" << endl;
        cout << "2. Rent a Car" << endl;
        cout << "3. Return a Car" << endl;
        cout << "4. Exit" << endl;
        cout << "===========================" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "\n--------------------------------------" << endl;
                cout << left << setw(10) << "Car"
                     << setw(10) << "Rent/Day"
                     << "Status" << endl;
                cout << "--------------------------------------" << endl;

                for (int i = 0; i < 5; i++) {
                    cout << i + 1 << ". " << setw(10) << car[i]
                         << setw(10) << rent[i];
                    if (ava[i])
                        cout << "Available";
                    else
                        cout << "Rented";
                    cout << endl;
                }
                cout << "--------------------------------------\n" << endl;
                break;

            case 2:
                cout << "Enter car number to rent: ";
                cin >> get;
                if (get >= 1 && get <= 5) {
                    if (ava[get - 1]) {
                        cout << "You rented " << car[get - 1] << " successfully!" << endl;
                        ava[get - 1] = false;
                    } else {
                        cout << "Sorry, " << car[get - 1] << " is already rented." << endl;
                    }
                } else {
                    cout << "Invalid car number!" << endl;
                }
                cout << endl;
                break;

            case 3:
                cout << "Enter car number to return: ";
                cin >> back;
                if (back >= 1 && back <= 5) {
                    if (ava[back - 1])
                        cout << car[back - 1] << " is already available!" << endl;
                    else {
                        cout << "You returned " << car[back - 1] << " successfully!" << endl;
                        ava[back - 1] = true;
                    }
                } else {
                    cout << "Invalid car number!" << endl;
                }
                cout << endl;
                break;

            case 4:
                cout << "Thank you for using the Car Rental System!" << endl;
                break;

            default:
                cout << "Invalid choice! Please try again.\n" << endl;
                break;
        }
    }

    return 0;
}
