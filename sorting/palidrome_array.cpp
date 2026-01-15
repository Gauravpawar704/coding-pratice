// Program:Find palidrome number
// author: Gaurav
#include <iostream>
using namespace std;
int main()
{
    int n, arr[100];
    bool isPalidrome = true;
    cout << "Enter number of elements: ";
    cin >> n;
    cout << "Enter element:\n";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int start = 0, end = n - 1;
    while (start < end)
    {
        if (arr[start] != arr[end])
        {
            isPalidrome = false;
            break;
        }
        start++;
        end--;
    }
    if (isPalidrome)
    {
        cout << "Palidrome";
    }
    else
    {
        cout << "Not palidrome";
    }
    return 0;
}
