//weak 6 program 8
#include <iostream>
using namespace std;

int main() {
    int arr[100], n, sum = 0;
    int *ptr;

    cout << "Enter the number of elements: ";
    cin >> n;

    ptr = arr;  // Pointer points to the first element

    cout << "Enter " << n << " elements:" << endl;
    for (int i = 0; i < n; i++) {
        cin >> *ptr;
        ptr++;
    }

    // Calculate sum using pointer
    ptr = arr;
    for (int i = 0; i < n; i++) {
        sum = sum + *ptr;
        ptr++;
    }

    cout << "Sum of " << n << " elements = " << sum << endl;

    return 0;
}

