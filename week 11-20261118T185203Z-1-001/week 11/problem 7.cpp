
#include <iostream>
using namespace std;

int binarySearch(int a[], int n, int target)
{
    int low = 0;
    int high = n - 1;

    while (low <= high)
    {
        int mid = low + (high - low) / 2;

        if (a[mid] == target)
            return mid;
        else if (a[mid] < target)
            low = mid + 1;
        else
            high = mid - 1;
    }

    return -1;
}

int main()
{
    int n, a[100], target;

    cout << "Enter number of elements: ";
    cin >> n;

    if (n < 1 || n > 100)
    {
        cout << "Invalid array size.";
        return 0;
    }

    cout << "Enter sorted array elements: ";
    for (int i = 0; i < n; i++)
        cin >> a[i];

    cout << "Enter target element: ";
    cin >> target;

    int index = binarySearch(a, n, target);

    if (index != -1)
        cout << "Element found at index: " << index;
    else
        cout << "Element not found.";

    return 0;
}

