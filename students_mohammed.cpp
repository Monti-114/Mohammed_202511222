#include <iostream>
using namespace std;
int calculateTotal(int marks[])
{
    int total = 0;

    for (int i = 0; i < 3; i++)
    {
        total += marks[i];
    }
    return total;
}
int main()
{
    string name;
    int marks[3];
    char choice;
    do
    {
        cout << "Enter student name: ";
        cin >> name;
        for (int i = 0; i < 3; i++)
        {
            cout << "Enter mark for subject " << i + 1 << ": ";
            cin >> marks[i];
        }
        int total = calculateTotal(marks);
        double average = total / 3.0;
        cout << "\nStudent Name: " << name << endl;
        cout << "Total Marks: " << total << endl;
        cout << "Average: " << average << endl;
        if (average >= 50)
        {
            cout << "Result: Passed" << endl;
        }
        else
        {
            cout << "Result: Failed" << endl;
        }
        cout << "\nDo you want to enter another student? (y/n): ";
        cin >> choice;
    } while (choice == 'y' || choice == 'Y');
    return 0;
}