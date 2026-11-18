//week 8 program 2
#include <iostream>
#include <string>
using namespace std;

int main()
{
    string str, rev;

    cout << "Enter a string: ";
    getline(cin, str);

    rev = string(str.rbegin(), str.rend());

    if (str == rev)
        cout << "The string is a palindrome." << endl;
    else
        cout << "The string is not a palindrome." << endl;

    return 0;
}

