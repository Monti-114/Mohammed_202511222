#include <iostream>
#include <vector>
#include "student_mohammed2.h"

using namespace std;

int main() {
    vector<Student> students;
    int choice;
    do {
        cout << "\n1 Add\n2 Display\n3 Search\n4 Update\n5 Delete\n6 Exit\nChoice: ";
        cin >> choice;
        switch (choice) {
            case 1: addStudent(students); break;
            case 2: displayStudents(students); break;
            case 3: searchStudent(students); break;
            case 4: updateStudent(students); break;
            case 5: deleteStudent(students); break;
            case 6: cout << "Exit\n"; break;
            default: cout << "Invalid\n";
        }
    } while (choice != 6);
    return 0;
}