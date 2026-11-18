
#include <iostream>
#include <bitset>
using namespace std;

int main()
{
    int n, choice;

    cout << "Enter a non-negative integer: ";
    cin >> n;

    if (n < 0)
    {
        cout << "Please enter a non-negative integer.";
        return 0;
    }

    cout << "\n1. Binary";
    cout << "\n2. Octal";
    cout << "\n3. Hexadecimal";
    cout << "\nEnter your choice: ";
    cin >> choice;

    switch (choice)
    {
        case 1:
        {
            if (n == 0)
            {
                cout << "Binary = 0";
                break;
            }

            int temp = n;
            string binary = "";

            while (temp > 0)
            {
                binary = char('0' + temp % 2) + binary;
                temp /= 2;
            }

            cout << "Binary = " << binary;
            break;
        }

        case 2:
            cout << "Octal = " << oct << n;
            break;

        case 3:
            cout << "Hexadecimal = " << hex << n;
            break;

        default:
            cout << "Invalid choice.";
    }

    return 0;
}

