// Program: Count frequency of an element in array
// Author: Gaurav

#include <iostream>
using namespace std;
int main()
{
    int arr[50], n, key, count = 0;

    cout << "Enter number of elements: ";
    cin >> n;
    cout << "Enter elements:\n";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << "Enter element to count: ";
    cin >> key;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] == key)
        {
            count++;
        }
    }
    cout << "Frequency= " << count;
    return 0;
}