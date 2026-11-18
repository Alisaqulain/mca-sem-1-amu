//WEEK 9 PROGRAM 3
#include <iostream>
using namespace std;

void transpose(int matrix[][10], int trans[][10], int rows, int cols)
{
    int i, j;

    for (i = 0; i < rows; i++)
    {
        for (j = 0; j < cols; j++)
        {
            trans[j][i] = matrix[i][j];
        }
    }
}

int main()
{
    int matrix[10][10], trans[10][10];
    int rows, cols, i, j;

    cout << "Enter number of rows and columns: ";
    cin >> rows >> cols;

    cout << "Enter matrix elements:\n";

    for (i = 0; i < rows; i++)
    {
        for (j = 0; j < cols; j++)
        {
            cin >> matrix[i][j];
        }
    }

    transpose(matrix, trans, rows, cols);

    cout << "\nTranspose of matrix:\n";

    for (i = 0; i < cols; i++)
    {
        for (j = 0; j < rows; j++)
        {
            cout << trans[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}

