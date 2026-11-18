//WEEK 9 PROGRAM 6
#include <iostream>
using namespace std;

int arraySum(int arr[], int n)
{
    if (n == 0)
        return 0;

    return arr[n - 1] + arraySum(arr, n - 1);
}

int main()
{
    int arr[100], n, i;

    cout << "Enter number of elements: ";
    cin >> n;

    cout << "Enter array elements:\n";

    for (i = 0; i < n; i++)
        cin >> arr[i];

    cout << "Sum = " << arraySum(arr, n) << endl;

    return 0;
}

