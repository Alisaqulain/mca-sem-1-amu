//week5 problem 6
#include <iostream>
using namespace std;

int main() {
    int a[10][10], b[10][10], sum[10][10], mul[10][10];
    int r1, c1, r2, c2;

    // Input size of first matrix
    cout << "Enter rows and columns of first matrix: ";
    cin >> r1 >> c1;

    // Input first matrix
    cout << "Enter elements of first matrix:\n";
    for (int i = 0; i < r1; i++) {
        for (int j = 0; j < c1; j++) {
            cin >> a[i][j];
        }
    }

    // Input size of second matrix
    cout << "Enter rows and columns of second matrix: ";
    cin >> r2 >> c2;

    // Input second matrix
    cout << "Enter elements of second matrix:\n";
    for (int i = 0; i < r2; i++) {
        for (int j = 0; j < c2; j++) {
            cin >> b[i][j];
        }
    }

    // Matrix Addition
    if (r1 == r2 && c1 == c2) {
        cout << "\nAddition of matrices:\n";

        for (int i = 0; i < r1; i++) {
            for (int j = 0; j < c1; j++) {
                sum[i][j] = a[i][j] + b[i][j];
                cout << sum[i][j] << " ";
            }
            cout << endl;
        }
    } else {
        cout << "\nMatrix addition is not possible.\n";
    }

    // Matrix Multiplication
    if (c1 == r2) {
        cout << "\nMultiplication of matrices:\n";

        for (int i = 0; i < r1; i++) {
            for (int j = 0; j < c2; j++) {
                mul[i][j] = 0;

                for (int k = 0; k < c1; k++) {
                    mul[i][j] += a[i][k] * b[k][j];
                }

                cout << mul[i][j] << " ";
            }
            cout << endl;
        }
    } else {
        cout << "\nMatrix multiplication is not possible.\n";
    }

    return 0;
}

