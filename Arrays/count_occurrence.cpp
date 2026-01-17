// Program: Count occurrence of each element
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
    {
        cin >> arr[i];
    }
    for (int i = 0; i < n; i++)
    {
        int count = 1;
        bool alreadyCounted = false;

        for (int k = 0; k < i; k++)
        {
            if (arr[i] == arr[k])
            {
                alreadyCounted = true;
                break;
            }
        }

        if (alreadyCounted)
        {
            continue;
        }

        for (int j = i + 1; j < n; j++)
        {
            if (arr[i] == arr[j])
            {
                count++;
            }
        }
        cout << arr[i] << " -> " << count << endl;
    }
    return 0;
}
