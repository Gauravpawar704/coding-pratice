#include <iostream>
using namespace std;
int main()
{
    int n;
    int arr[100];
    int key;
    cout << "Enter number of element: ";
    cin >> n;

    cout << "Enter element:\n";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cout << "Enter key: ";
    cin >> key;
    int first = -1;
    int last = -1;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] == key)
        {
            if (first == -1)
            {
                first = i;
            }
            last = 1;
        }
    }
    if (first == -1)
    {
        cout << "element not found";
    }
    else
    {
        cout << "First occurrence = " << first << endl
             << "Last occurrence = " << last;
    }
}
