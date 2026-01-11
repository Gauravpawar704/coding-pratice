// Pogram: bubble sort in c++
// Gaurav
#include <iostream>
using namespace std;
int main()
{
    int arr[50], n;
    cout << "Enter number of elements: ";
    cin >> n;
    cout << "Enter elemenrs:\n";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    // Bubble sort logic
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    cout << "Sorted array:\n";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}
