#include <iostream>
#include <string>
using namespace std;

int balance = 0;
string trans[30];
int transCount = 0;

void checkBal() {
    cout << "Balance = " << balance << endl;
}

void deposit() {
    int x;
    cout << "Deposit amount: ";
    cin >> x;
    balance += x;
    trans[transCount] = "Deposit " + to_string(x);
    transCount++;
    cout << "Balance now: " << balance << endl;
}

void withdraw() {
    int y;
    cout << "Withdraw amount: ";
    cin >> y;
    if (y > balance) {
        cout << "Not enough money" << endl;
    } else {
        balance -= y;
        trans[transCount] = "Withdraw " + to_string(y);
        transCount++;
        cout << "Balance now: " << balance << endl;
    }
}

void showTrans() {
    if (transCount == 0) {
        cout << "No trans yet" << endl;
    } else {
        for (int i = 0; i < transCount; i++) {
            cout << i+1 << ". " << trans[i] << endl;
        }
    }
}

int main() {
    int pin, tries = 3;
    int defPin = 1111;
    while (tries > 0) {
        cout << "PIN: ";
        cin >> pin;
        if (pin == defPin) {
            int c;
            do {
                cout << "\n1.Check\n2.Deposit\n3.Withdraw\n4.History\n5.Exit\n";
                cin >> c;
                if (c == 1) checkBal();
                else if (c == 2) deposit();
                else if (c == 3) withdraw();
                else if (c == 4) showTrans();
                else if (c == 5) cout << "Exit\n";
                else cout << "Wrong\n";
            } while (c != 5);
            break;
        } else {
            tries--;
            cout << "Wrong PIN, left: " << tries << endl;
        }
    }
    if (tries == 0) cout << "Blocked\n";
    return 0;
}