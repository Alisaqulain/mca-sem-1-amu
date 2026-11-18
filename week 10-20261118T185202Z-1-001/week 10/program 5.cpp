//week 10 program 5
#include <iostream>
#include <string>
using namespace std;

struct DOB {
    int day;
    int month;
    int year;
};

struct Person {
    string name;
    DOB dateOfBirth;
};

int main() {
    Person p;

    cout << "Enter your name: ";
    getline(cin, p.name);

    cout << "Enter day of birth: ";
    cin >> p.dateOfBirth.day;

    cout << "Enter month of birth: ";
    cin >> p.dateOfBirth.month;

    cout << "Enter year of birth: ";
    cin >> p.dateOfBirth.year;

    cout << "\nPersonal Details\n";
    cout << "Name: " << p.name << endl;
    cout << "Date of Birth: "
         << p.dateOfBirth.day << "/"
         << p.dateOfBirth.month << "/"
         << p.dateOfBirth.year << endl;

    return 0;
}
