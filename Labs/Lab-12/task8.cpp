#include<iostream>
#include<string>
using namespace std;

struct Student {
    string name;
    int marks;
};

ostream& operator<<(ostream& out, const Student& s) {
    out << s.name << ": " << s.marks;
    return out;
}

int main() {
    Student students[3];

    cout << "Enter 3 students:" << endl;
    for (int i = 0; i < 3; ++i) {
        cout << "Enter name of student " << i + 1 << ": ";
        cin >> students[i].name;
        cout << "Enter marks for " << students[i].name << ": ";
        cin >> students[i].marks;
    }

    cout << "\nAll Students:" << endl;
    for (int i = 0; i < 3; ++i) {
        cout << students[i] << endl;
    }

    Student topStudent = students[0];
    for (int i = 1; i < 3; ++i) {
        if (students[i].marks > topStudent.marks) {
            topStudent = students[i];
        }
    }

    cout << "\nTop student: " << topStudent.name << " (" << topStudent.marks << ")" << endl;

    return 0;
}
