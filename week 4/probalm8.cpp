//weak 4 problem 8
#include <iostream>
using namespace std;

int main() {
    int num, original, digit, sum = 0;

    cout << "Enter a three digit number: ";
    cin >> num;

    original = num;

    while (num != 0) {
        digit = num % 10;
        sum = sum + digit * digit * digit;
        num = num / 10;
    }

    if (sum == original)
        cout << original << " is an Armstrong number";
    else
        cout << original << " is not an Armstrong number"	;

    return 0;
}
