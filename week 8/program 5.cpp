//week 8 program 5
#include <iostream>
#include <string>
using namespace std;

int main()
{
    string S, T;

    cout << "Enter string S: ";
    getline(cin, S);

    cout << "Enter string T: ";
    getline(cin, T);

    size_t pos = S.find(T);

    if (pos != string::npos)
        cout << "String T begins at index: " << pos << endl;
    else
        cout << "String T is not present in S." << endl;

    return 0;
}

