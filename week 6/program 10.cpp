//weak 6 program 10
#include <iostream>
#include <cstring>
using namespace std;

int main() {
    char str[100];
    char *start, *end;
    char temp;

    cout << "Enter a string: ";
    cin.getline(str, 100);

    // Pointer to the first character
    start = str;

    // Pointer to the last character
    end = str + strlen(str) - 1;

    // Reverse the string using pointers
    while (start < end) {
        temp = *start;
        *start = *end;
        *end = temp;

        start++;
        end--;
    }

    cout << "Reversed string: " << str << endl;

    return 0;
}

