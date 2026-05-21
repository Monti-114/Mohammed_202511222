#include <iostream>
using namespace std;

void historyCpp() {
    cout << "C++ started from C\n";
    cout << "Developed by Bjarne Stroustrup\n";
    cout << "Later added OOP and templates\n";
}

void learnCpp() {
    cout << "Data Types, Loops, Arrays, Files\n";
}

int main() {
    int ch;
    do {
        cout << "\nMenu\n1.History\n2.Learn\n3.Exit\n";
        cin >> ch;
        switch (ch) {
            case 1: historyCpp(); break;
            case 2: learnCpp(); break;
            case 3: cout << "Bye\n"; break;
            default: cout << "Wrong\n";
        }
    } while (ch != 3);
    return 0;
}