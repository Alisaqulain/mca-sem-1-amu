//weak 4 pogram 6
   #include <iostream>
using namespace std;

int main() {
    char ch;

    cout << "Enter a character: ";
    cin >> ch;

    if (ch >= 'A' && ch <= 'Z')
        cout << "Capital letter";
    else if (ch >= 'a' && ch <= 'z')
        cout << "Small case letter";
    else if (ch >= '0' && ch <= '9')
        cout << "Digit";
    else
        cout << "Special symbol";

    return 0;
}
