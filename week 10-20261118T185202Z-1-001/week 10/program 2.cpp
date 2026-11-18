//week 10 program 2
#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

struct Employee {
    string name;
    double basicPay;
};

int main() {
    Employee emp[100];
    double da, gross;

    for (int i = 0; i < 100; i++) {
        cout << "\nEnter name of employee " << i + 1 << ": ";
        getline(cin >> ws, emp[i].name);

        cout << "Enter basic pay: ";
        cin >> emp[i].basicPay;
    }

    cout << "\nEmployee Gross Salary Details\n";
    cout << fixed << setprecision(2);

    for (int i = 0; i < 100; i++) {
        da = emp[i].basicPay * 0.52;
        gross = emp[i].basicPay + da;

        cout << "Name: " << emp[i].name
             << ", Gross Salary: " << gross << endl;
    }

    return 0;
}
