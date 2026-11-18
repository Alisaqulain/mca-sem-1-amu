//WEEK 9 PROGRAM 5
#include <iostream>
using namespace std;

void display(int arr[], int n, int index)
{
    if (index == n)
        return;

    cout << arr[index] << " ";

    display(arr, n, index + 1);
}

int main()
{
    int arr[100], n, i;

    cout << "Enter number of elements: ";
    cin >> n;

    cout << "Enter array elements:\n";

    for (i = 0; i < n; i++)
        cin >> arr[i];

    cout << "Array elements are: ";
    display(arr, n, 0);

    cout << endl;

    return 0;
}

