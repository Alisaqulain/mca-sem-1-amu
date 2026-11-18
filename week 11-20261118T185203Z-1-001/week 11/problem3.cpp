
#include <iostream>
using namespace std;

int main()
{
    int n, choice;
    int a, b, c, d, rev;

    cout << "Enter a four-digit number: ";
    cin >> n;

    if (n < 1000 || n > 9999)
    {
        cout << "Please enter a valid four-digit number.";
        return 0;
    }

    a = n / 1000;
    b = (n / 100) % 10;
    c = (n / 10) % 10;
    d = n % 10;

    rev = d * 1000 + c * 100 + b * 10 + a;

    cout << "\n1. Reverse of number";
    cout << "\n2. Sum of number and reverse";
    cout << "\n3. Sum of alternative digits";
    cout << "\nEnter your choice: ";
    cin >> choice;

    switch (choice)
    {
        case 1:
            cout << "Reverse = " << rev;
            break;

        case 2:
            cout << "Sum = " << n + rev;
            break;

        case 3:
            cout << "First + Third digit = " << a + c;
            cout << "\nSecond + Fourth digit = " << b + d;
            break;

        default:
            cout << "Invalid choice.";
    }

    return 0;
}

