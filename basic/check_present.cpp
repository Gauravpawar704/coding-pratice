// Program: Check element present or not
// Author: Gaurav

#include <iostream>
using namespace std;
int main()
{
    int arr[50], n, key;
    bool found = false;

    cout << "Enter number of elemnts: ";
    cin >> n;

    cout << "Enter elements: \n";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << "Enter elemenrt to search: ";
    cin >> key;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] == key)
        {
            found = true;
            break;
        }
    }
    if (found)
    {
        cout << "Element is present";
    }
    else
    {
        cout << "Element is not present";
    }
    return 0;
}
