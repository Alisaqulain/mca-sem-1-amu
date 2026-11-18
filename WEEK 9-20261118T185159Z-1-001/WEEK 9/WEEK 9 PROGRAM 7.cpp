//WEEK 9 PROGRAM 7
#include <iostream>
using namespace std;

int maximum(int arr[], int n)
{
    int maxValue;

    if (n == 1)
        return arr[0];

    maxValue = maximum(arr, n - 1);

    if (arr[n - 1] > maxValue)
        return arr[n - 1];

    return maxValue;
}

int minimum(int arr[], int n)
{
    int minValue;

    if (n == 1)
        return arr[0];

    minValue = minimum(arr, n - 1);

    if (arr[n - 1] < minValue)
        return arr[n - 1];

    return minValue;
}

int main()
{
    int arr[100], n, i;

    cout << "Enter number of elements: ";
    cin >> n;

    if (n <= 0)
    {
        cout << "Invalid array size." << endl;
        return 0;
    }

    cout << "Enter array elements:\n";

    for (i = 0; i < n; i++)
        cin >> arr[i];

    cout << "Maximum element = " << maximum(arr, n) << endl;
    cout << "Minimum element = " << minimum(arr, n) << endl;

    return 0;
}

