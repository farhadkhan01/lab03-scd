
#include <iostream>
#include <string>
using namespace std;

int main() {
    string name;
    int age;
    double gpa;
    string department;

    cout << "Enter name: ";
    cin >> name;

    cout << "Enter age: ";
    cin >> age;

    cout << "Enter GPA: ";
    cin >> gpa;

    cin.ignore();
    cout << "Enter department: ";
    getline(cin, department);

    cout << "\nStudent Information" << endl;
    cout << "-------------------" << endl;
    cout << "Name: " << name << endl;
    cout << "Age: " << age << endl;
    cout << "GPA: " << gpa << endl;
    cout << "Department: " << department << endl;

    return 0;
}
