//week5 problem 9
#include <iostream>
using namespace std;

int main() {
    int n, num, count = 0;

    cout << "Enter the number of elements: ";
    cin >> n;

    int arr[n];

    cout << "Enter the elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << "Enter the number to find frequency: ";
    cin >> num;

    for (int i = 0; i < n; i++) {
        if (arr[i] == num) {
            count++;
        }
    }

    cout << "Frequency of " << num << " = " << count << endl;

    return 0;
}

