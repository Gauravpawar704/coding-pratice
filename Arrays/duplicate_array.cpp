// Porgram : Remove Duplicates from array
// author: Gaurav
#include <iostream>
using namespace std;
int main()
{
    int n, arr[100], k = 0, temp[100];
    cout << "Enter number of elements: ";
    cin >> n;

    cout << "Enter elements:\n";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    for (int i = 0; i < n; i++)
    {
        bool isDuplicate = false;
        for (int j = 0; j < k; j++)
        {
            if (arr[i] == temp[j])
            {
                isDuplicate = true;
                break;
            }
        }
        if (!isDuplicate)
        {
            temp[k] = arr[i];
            k++;
        }
    }

    cout << "Array after removing duplicates:\n";
    for (int i = 0; i < k; i++)
    {
        cout << temp[i] << " ";
    }
    return 0;
}
