//WEEK 9 PROGRAM 4
#include <iostream>
using namespace std;

/* Call by value */
void swap_value(int a, int b)
{
    int temp;

    temp = a;
    a = b;
    b = temp;

    cout << "Inside swap_value():\n";
    cout << "a = " << a << ", b = " << b << endl;
}

/* Call by reference */
void swap_reference(int &a, int &b)
{
    int temp;

    temp = a;
    a = b;
    b = temp;
}

int main()
{
    int a, b, choice;

    cout << "Enter two numbers: ";
    cin >> a >> b;

    cout << "\n1. Call by Value";
    cout << "\n2. Call by Reference";
    cout << "\nEnter your choice: ";
    cin >> choice;

    switch (choice)
    {
        case 1:
            swap_value(a, b);
            cout << "\nAfter function call:";
            cout << "\na = " << a << ", b = " << b << endl;
            break;

        case 2:
            swap_reference(a, b);
            cout << "\nAfter function call:";
            cout << "\na = " << a << ", b = " << b << endl;
            break;

        default:
            cout << "Invalid choice." << endl;
    }

    return 0;
}

