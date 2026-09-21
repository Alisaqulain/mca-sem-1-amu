//weak 6 program 7
#include <iostream>
using namespace std;

int main() {
    int arr[5];
    int *ptr;

    // Initialize pointer to the first element
    ptr = arr;

    // Read elements using pointer
    cout << "Enter 5 elements:" << endl;
    for (int i = 0; i < 5; i++) {
        cin >> *ptr;
        ptr++;
    }

    // Display elements using array
    cout << "Array elements are:" << endl;
    for (int i = 0; i < 5; i++) {
        cout << arr[i] << " ";
    }

    cout << endl;

    return 0;
}

