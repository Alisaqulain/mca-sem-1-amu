//weak 6 program 5
#include <iostream>
using namespace std;

int main() {
    char str[100];
    char *ptr;

    cout << "Enter a string: ";
    cin.getline(str, 100);

    ptr = str;

    cout << "String = ";
    while (*ptr != '\0') {
        cout << *ptr;
        ptr++;
    }

    cout << endl;

    return 0;
}

