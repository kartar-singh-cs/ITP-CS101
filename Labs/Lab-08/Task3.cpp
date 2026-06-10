#include <iostream>
#include <vector>
#include <string>
using namespace std;


/**
 * @brief Displays the main menu of the Student Management System.
 *
 * Shows all available options to the user such as Add Student, Report, Find Student, and Quit.
 * This function does not take any parameters and does not return a value.
 */
void Menu() {
    cout << " ========= Student Management System ==========" << endl;
    cout << "0. Help" << endl;
    cout << "1. Add Student" << endl;
    cout << "2. Report " << endl;
    cout << "3. Find Student" << endl;
    cout << "4. Quit" << endl;
    cout << "==============================================" << endl;
}


/**
 * @brief Adds one or more students to the system.
 *
 * Takes input for student name, grade, and program. Automatically assigns a unique student ID.
 *
 * @param ids Vector containing all student IDs.
 * @param names Vector containing all student names.
 * @param grades Vector containing all student grades.
 * @param programs Vector containing all student programs.
 * @param nextID Reference to the next available unique ID counter.
 * @return void
 */
void add_student(vector<int>& ids, vector<string>& names, vector<string>& grades, vector<string>& programs, int& nextID) {
    int n;
    cout << "Enter number of Students: ";
    cin >> n;
    cout << endl;

    for (int i = 0; i < n; i++) {
        string name, grade, program;

        // Assign auto-increment ID to each student
        ids.push_back(nextID++);

        // Taking student name (using getline to allow spaces)
        cout << "Enter name of " << i + 1 << "st student: ";
        cin.ignore();
        getline(cin, name);
        names.push_back(name);

        // Taking grade
        cout << "Enter Grade of " << name << ": ";
        cin >> grade;
        grades.push_back(grade);

        // Taking program name (can be one-word, so cin is fine here)
        cout << "Enter program name: ";
        cin >> program;
        programs.push_back(program);

        cout << endl;
    }
}


/**
 * @brief Displays a detailed report of all students.
 *
 * Prints out every student's ID, name, grade, and program in a formatted style.
 *
 * @param ids Vector containing all student IDs.
 * @param names Vector containing all student names.
 * @param grades Vector containing all student grades.
 * @param programs Vector containing all student programs.
 * @return void
 */
void report(vector<int>& ids, vector<string>& names, vector<string>& grades, vector<string>& programs) {
    cout << "******** Student Report ******" << endl;

    for (int i = 0; i < ids.size(); i++) {
        cout << "Student ID: " << ids[i] << endl;
        cout << "Name: " << names[i] << endl;
        cout << "Grade: " << grades[i] << endl;
        cout << "Program: " << programs[i] << endl;
        cout << "-----------------------------------" << endl;
    }

    cout << endl;
}


/**
 * @brief Finds a student by ID or program name.
 *
 * Allows the user to enter an ID to directly search a student.  
 * If not found, the user can search by program name to list all students enrolled in that program.
 *
 * @param ids Vector containing all student IDs.
 * @param names Vector containing all student names.
 * @param grades Vector containing all student grades.
 * @param programs Vector containing all student programs.
 * @return void
 */
void find_student(vector<int>& ids, vector<string>& names, vector<string>& grades, vector<string>& programs) {
    int searchID;
    string searchProgram;

    cout << "Enter ID of student: ";
    cin >> searchID;

    bool found = false;

    // Search by student ID
    if (searchID >= 0 && searchID < ids.size()) {
        cout << "Student ID: " << ids[searchID] << endl;
        cout << "Name: " << names[searchID] << endl;
        cout << "Grades: " << grades[searchID] << endl;
        cout << "Program: " << programs[searchID] << endl;
        found = true;
    }

    // If ID not found, allow user to search by program name
    if (!found) {
        cout << "Enter program name: ";
        cin >> searchProgram;
        cout << "Students enrolled in " << searchProgram << " program:" << endl;

        bool programFound = false;

        for (int i = 0; i < programs.size(); i++) {
            if (programs[i] == searchProgram) {
                cout << "Student ID: " << ids[i] << endl;
                cout << "Name: " << names[i] << endl;
                cout << "Grade: " << grades[i] << endl;
                cout << endl;
                programFound = true;
            }
        }

        if (!programFound) {
            cout << "No students found in this program." << endl;
        }
    }
}


/**
 * @brief Main function to run the Student Management System.
 *
 * Initializes all required data structures, runs the main program loop, and handles user choices.
 *
 * @return int Returns 0 upon successful program termination.
 */
int main() {
    vector<int> ids;
    vector<string> names;
    vector<string> grades;
    vector<string> programs;
    int choice;
    bool running = true;
    int nextID = 0;  // Auto-incremented student ID counter

    cout << "*************** Welcome to Student Management System ********************" << endl;

    // Main program loop
    while (running) {
        Menu();
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 0:
                // Help menu can be extended here
                break;

            case 1:
                add_student(ids, names, grades, programs, nextID);
                break;

            case 2:
                report(ids, names, grades, programs);
                break;

            case 3:
                find_student(ids, names, grades, programs);
                break;

            case 4:
                running = false;
                cout << "Good bye!" << endl;
                break;

            default:
                cout << "Invalid choice... try again." << endl;
        }
    }

    return 0;
}
