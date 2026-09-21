//weak 6 program 3
#include <iostream>
using namespace std;

int main() {
    int num;
    int *ptr;

    cout << "Enter a number: ";
    cin >> num;

    // Store the address of num in pointer
    ptr = &num;

    cout << "Value of variable = " << num << endl;
    cout << "Address of variable = " << ptr << endl;

    return 0;
}

