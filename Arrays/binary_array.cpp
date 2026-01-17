// Porgram : Binary search using function
// author: Gaurav
#include <iostream>
using namespace std;
int binarySearch(int arr[], int n, int key)
{
    int low = 0;
     int  high = n - 1;
    while (low <= high)
    {
        int mid = (low + high) / 2;

        if (arr[mid] == key)
        {
            return mid;
        }
        else if (arr[mid] < key)
        {
            low = mid + 1;
        }
        else if (arr[mid] > key)
        {
            low = mid - 1;
        }
    }
    return -1;
}
int main()
{
    int n, key, arr[100];
    cout << "Enter number of elements: ";
    cin >> n;

    cout << "Enter sorted elements:\n";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << "Enter element to search: ";
    cin >> key;
    int result = binarySearch(arr, n, key);
    if (result != -1)
    {
        cout << "Element found at index  " << result;
    }
    else
    {
        cout << "Element not found";
    }
    return 0;
}
