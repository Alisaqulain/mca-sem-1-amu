//week5 problem 7
#include <iostream>
using namespace std;

int main() {
    int n;
    int positive = 0, negative = 0, odd = 0, even = 0;

    cout << "Enter number of elements: ";
    cin >> n;

    int arr[n];

    cout << "Enter the elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << "\nPositive numbers: ";
    for (int i = 0; i < n; i++) {
        if (arr[i] > 0) {
            cout << arr[i] << " ";
            positive++;
        }
    }

    cout << "\nNegative numbers: ";
    for (int i = 0; i < n; i++) {
        if (arr[i] < 0) {
            cout << arr[i] << " ";
            negative++;
        }
    }

    cout << "\nOdd numbers: ";
    for (int i = 0; i < n; i++) {
        if (arr[i] % 2 != 0) {
            cout << arr[i] << " ";
            odd++;
        }
    }

    cout << "\nEven numbers: ";
    for (int i = 0; i < n; i++) {
        if (arr[i] % 2 == 0) {
            cout << arr[i] << " ";
            even++;
        }
    }

    cout << "\n\nCount of positive numbers = " << positive;
    cout << "\nCount of negative numbers = " << negative;
    cout << "\nCount of odd numbers = " << odd;
    cout << "\nCount of even numbers = " << even;

    return 0;
}

