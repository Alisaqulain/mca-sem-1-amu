//week 8 program 3
#include <iostream>
#include <string>
using namespace std;

int main()
{
    string sentence, oldStr, newStr;

    cout << "Enter a sentence: ";
    getline(cin, sentence);

    cout << "Enter string to find: ";
    getline(cin, oldStr);

    cout << "Enter replacement string: ";
    getline(cin, newStr);

    size_t pos = sentence.find(oldStr);

    if (pos != string::npos)
    {
        sentence.replace(pos, oldStr.length(), newStr);
        cout << "After replacement: " << sentence << endl;
    }
    else
    {
        cout << "String not found." << endl;
    }

    return 0;
}

