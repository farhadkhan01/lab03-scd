#include <iostream>
#include <string>
using namespace std;

int main() {
    string name;
    int age;
    int birthYear;

    cout << "Enter your name: ";
    cin >> name;

    cout << "Enter your age: ";
    cin >> age;

    birthYear = 2026 - age;

    cout << "\nStudent Information" << endl;
    cout << "Name: " << name << endl;
    cout << "Age: " << age << endl;
    cout << "Birth Year: " << birthYear << endl;

    return 0;
}
