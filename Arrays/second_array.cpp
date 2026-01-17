// Program: Second largest element in array
// author: Gaurav
#include <iostream>
using namespace std;

int main()
{
    int n, arr[100];

    cout << "Enter number of elements: ";
    cin >> n;

    cout << "Enter elements:\n";
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    int largest = -99999, second = -99999;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] > largest)
        {
            second = largest;
            largest = arr[i];
        }
        else if (arr[i] > second && arr[i] != largest)
        {
            second = arr[i];
        }
    }

    if (second == -99999)
        cout << "Second largest not found";
    else
        cout << "Second largest element = " << second;

    return 0;
}
