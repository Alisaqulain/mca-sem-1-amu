//weak 4 problem 4
#include <iostream>
using namespace std;

int main() {
    int n;
    int first = 0, second = 1, next;

    cout << "Enter the number of terms: ";
    cin >> n;

    cout << "Fibonacci sequence: ";

    for (int i = 1; i <= n; i++) {
        cout << first << " ";

        next = first + second;
        first = second;
        second = next;
    }

    return 0;
}
