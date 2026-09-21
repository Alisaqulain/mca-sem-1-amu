//week5 problem 4
#include <iostream>
using namespace std;

int main() {
    int n;

    cout << "Enter number of integers: ";
    cin >> n;

    int a[n];

    cout << "Enter the integers: ";
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    int largest = a[0];
    int secondLargest = a[0];

    for (int i = 1; i < n; i++) {
        if (a[i] > largest) {
            secondLargest = largest;
            largest = a[i];
        }
        else if (a[i] > secondLargest && a[i] != largest) {
            secondLargest = a[i];
        }
    }

    cout << "Second largest integer = " << secondLargest << endl;

    return 0;
}

