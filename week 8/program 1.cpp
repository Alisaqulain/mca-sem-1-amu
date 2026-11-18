//week 8 program 1
#include <iostream>
#include <string>
using namespace std;

// Function to insert a substring at a given position
string insertSubstring(string str, string sub, int pos)
{
    str.insert(pos, sub);
    return str;
}

// Function to delete n characters from a given position
string deleteCharacters(string str, int pos, int n)
{
    str.erase(pos, n);
    return str;
}

int main()
{
    string str, sub;
    int pos, n;

    cout << "Enter main string: ";
    getline(cin, str);

    cout << "Enter substring to insert: ";
    getline(cin, sub);

    cout << "Enter position for insertion: ";
    cin >> pos;

    str = insertSubstring(str, sub, pos);
    cout << "After insertion: " << str << endl;

    cout << "Enter position for deletion: ";
    cin >> pos;

    cout << "Enter number of characters to delete: ";
    cin >> n;

    str = deleteCharacters(str, pos, n);
    cout << "After deletion: " << str << endl;

    return 0;
}

