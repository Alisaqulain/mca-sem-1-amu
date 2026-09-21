//weak 6 program 4
#include <iostream>
using namespace std;

int main() {
    int num;
    int *ptr;

    cout << "Enter an integer: ";
    cin >> num;

    ptr = &num;

    // Increment using pointer
    (*ptr)++;
    cout << "After increment = " << num << endl;

    // Decrement using pointer
    (*ptr)--;
    cout << "After decrement = " << num << endl;

    return 0;
}

